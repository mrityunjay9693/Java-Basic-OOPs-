package local.tilde.oops;

import java.sql.*;
import java.util.Scanner;

public class BankAccount {
    private int acNo;
    private String name;
    private String acType;
    private float balance;
    private int init_flag = 0; // instance varible

    public BankAccount() { // constructor.
        init_flag = 0; // account uninitialized.
    }

    public void menu() {
        int ch;
        Scanner scan = new Scanner(System.in);
        while (true) {
            System.out.println("MAIN MENU");
            System.out.println("1. New Account");
            System.out.println("2. Deposit Amount");
            System.out.println("4. Print Account");
            System.out.print("Enter choice(0 to exit): ");
            ch = scan.nextInt();
            switch (ch) {
                case 0:
                    System.exit(0);
                    break;
                case 1:
                    newAccount();
                    break;
                case 2:
                    deposit();
                    break;
                case 4:
                    printAccount();
                    break;
                default:
                    System.out.println("Invalid input.");
            }
        }
    }

    public void newAccount() {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Depositor Name: ");
        name = scan.nextLine();
        System.out.print("Enter Account Type(SA/CA): ");
        acType = scan.next();
        System.out.print("Enter initial balance:");
        balance = scan.nextFloat();
        System.out.println("\n");

        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22", "BanK$2022");
            Statement stmt = con.createStatement();
            String sql = "INSERT INTO account(name, acType, balance) VALUES('" +name + "', '" + acType + "', '" + balance + "')";
            stmt.executeUpdate(sql);
            System.out.println("Acount created Successfully!");
        } catch (SQLException ex) {
            System.out.println(ex.toString());
        }
    }

    // Parameterized constructor.
    public void initializeAccount(int acNo, String name, String acType, float balance) {
        this.acNo = acNo;
        this.name = name;
        this.acType = acType;
        this.balance = balance;
        System.out.println("\nAccount initialized!\n");
    }

    public void editAccount() {

    }

    public void printAccount() {
        System.out.println("\nAccount Number:" + acNo);
        System.out.println("Account Holder Name: " + name);
        System.out.println("Account Type: " + acType);
        System.out.println("Account Balance: " + balance + "\n");
    }

    public void deposit() {
        if (init_flag == 0) {
            float amount;
            Scanner scan = new Scanner(System.in);
            System.out.print("Enter amount: ");
            amount = scan.nextFloat();
            balance += amount;
            System.out.println("\nAmount deposited\n");
        } else {
            System.out.println("\nAccount is not initialized.\n");
        }
    }

    public void withdraw() {
        if (init_flag == 1) {
            float amount;
            Scanner scan = new Scanner(System.in);
            System.out.println("Eneter amount: ");
            amount = scan.nextFloat();
            if (balance >= amount) {
                balance -= amount;
            } else {
                System.out.println("\nTransaction Declined\n");
            }
        } else {
            System.out.println("\nAccount is not initialized.\n");
        }
    }

    public void displayBalance() {

    }

    public static void main(String[] args) {
        new BankAccount().menu();
    }
}
