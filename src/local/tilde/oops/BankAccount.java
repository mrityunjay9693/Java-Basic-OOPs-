package local.tilde.oops;

import java.util.Scanner;

public class BankAccount {
    private int acNo;
    private String name;
    private String acType;
    private float balance;
    private int init_flag = 0;  //instance varible

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
        System.out.println("Enter Depositor Name: ");
        name = scan.nextLine();
        System.out.println("Enter Account Type(SA/CA): ");
        acType = scan.next();
    }

    // Parameterized constructor.
    public void initializeAccount(int acNo, String name, String acType, float balance) {
        this.acNo = acNo;
        this.name = name;
        this.acType = acType;
        this.balance = balance;
        System.out.println("\nAccount initialized!\n");
        init_flag = 1;
    }

    public void editAccount() {

    }

    public void printAccount() {
        if (init_flag == 1) {
            System.out.println("\nAccount Number:" + acNo);
            System.out.println("Account Holder Name: " + name);
            System.out.println("Account Type: " + acType);
            System.out.println("Account Balance: " + balance + "\n");
        } else {
            System.out.println("\nAccount is not initialized. Initialize account first to continue...\n");
        }
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
