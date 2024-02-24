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
            System.out.println("3. Withdraw");
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
                case 3:
                    withdraw();
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
        System.out.println();

        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22", "BanK$2022");
            Statement stmt = con.createStatement();
            String sql = "INSERT INTO account(name, acType, balance) VALUES('" + name + "', '" + acType + "', '"
                    + balance + "')";
            stmt.executeUpdate(sql);
            System.out.println("Acount created Successfully!");
            System.out.println();
        } catch (SQLException ex) {
            System.out.println(ex.toString());
        }
    }

    // Parameterized constructor.
    // public void initializeAccount(int acNo, String name, String acType, float
    // balance) {
    // this.acNo = acNo;
    // this.name = name;
    // this.acType = acType;
    // this.balance = balance;
    // System.out.println("\nAccount initialized!\n");
    // }

    public void editAccount() {

    }

    public int checkAccount() {
        int status = 0;
        Scanner scan = new Scanner(System.in);
        System.out.print("\nEnter account number: ");
        acNo = scan.nextInt();
        String sql = "SELECT * FROM account WHERE acno=" + acNo;
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22", "BanK$2022");
            Statement stmt = con.createStatement();
            ResultSet result = stmt.executeQuery(sql);
            if (result.next()) {
                status = 1;
                name = result.getString("name");
                acType = result.getString("actype");
                balance = result.getFloat("balance");
            }
        } catch (Exception ex) {
            // TODO: handle exception
            System.out.println(ex.toString());
        }
        return status;
    }

    public void printAccount() {
        if (checkAccount() == 1) {
            System.out.println("\nAccount Number:" + acNo);
            System.out.println("Account Holder Name: " + name);
            System.out.println("Account Type: " + acType);
            System.out.println("Account Balance: " + balance + "\n");
        } else {
            System.out.println("\nAccount not found!");
        }
        System.out.println();
    }

    public void deposit() {
        if (checkAccount() == 1) {
            Scanner scan = new Scanner(System.in);
            System.out.println("Name: " + name);
            System.out.print("Continue? (y/n):");
            String continuee = scan.next();
            if(continuee.equals("n")){
                return;
            }
            System.out.print("Enter amount: ");
            float amount = scan.nextFloat();
            balance += amount; // amount is deposited to baance
            try{
                Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22", "BanK$2022");
                Statement stmt = con.createStatement();
                String sql = "UPDATE account SET balance=" + balance;
                stmt.executeUpdate(sql);
            } catch(SQLException ex){
                System.out.print(ex.toString());
            }
            
            System.out.println("\nAmount Deposited\n");
        } else {
            System.out.println("\nAccount Not Found!\n");
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
