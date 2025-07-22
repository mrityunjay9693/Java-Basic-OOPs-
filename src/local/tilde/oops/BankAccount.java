package local.tilde.oops;

import java.sql.*;
import java.util.Scanner;

public class BankAccount {
    private int acNo;
    private String name;
    private String acType;
    private float balance;
    private int init_flag = 0; // instance variable

    public BankAccount() { // Default constructor.
        init_flag = 0; // Account is uninitialized.
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
            System.out.println();
            System.out.print("Enter choice(0 to exit): ");
            ch = scan.nextInt();
            System.out.println();
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
            String sql = "INSERT INTO account(name, acType) VALUES('" + name + "', '" + acType + "')";
            stmt.executeUpdate(sql);
            System.out.println("Account created successfully!");
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

    public void editAccount() { }

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
            }
        } catch (Exception ex) {
            // TODO: handle exception
            System.out.println(ex.toString());
        }
        return status; 
    }

    public void getBalance() {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22", "BanK$2022");
            Statement stmt = con.createStatement();
        } catch (SQLException ex) {
            System.out.println(ex.toString());
        }

    }

    public void printAccount() {
        if (checkAccount() == 1) {
            try {
                Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22",
                        "BanK$2022");
                Statement stmt = con.createStatement();
                String sql = "SELECT ((IFNULL((SELECT SUM(amount) FROM transaction WHERE acno=" + acNo
                        + " AND type='Cr'), 0)) - (IFNULL((SELECT SUM(amount) FROM transaction WHERE acno=" + acNo
                        + " AND type='Dr'), 0))) AS balance";
                ResultSet result = stmt.executeQuery(sql);
                if (result.next()) {
                    balance = result.getFloat("balance");
                }
            } catch (Exception ex) {
                System.out.println(ex.toString());
            }
            System.out.println("\nAccount number: " + acNo);
            System.out.println("Name: " + name);
            System.out.println("Account type: " + acType);
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
            if (continuee.equals("n")) {
                return;
            }
            System.out.print("Enter amount: ");
            float amount = scan.nextFloat();
            try {
                Connection con = DriverManager.getConnection("jdbc:mysql://localhost/bank_2022", "bank_22",
                        "BanK$2022");
                Statement stmt = con.createStatement();
                String sql = "INSERT INTO transaction(date, acno, particulars, type, amount) VALUES(CURDATE(), " + acNo
                        + ", 'Cash Deposited', 'Cr', " + amount + ")";
                stmt.executeUpdate(sql);
            } catch (SQLException ex) {
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
