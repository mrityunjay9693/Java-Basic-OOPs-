package local.tilde.oops;

import java.util.Scanner;

public class BankAccount {
    private int acNo;
    private String name;
    private String acType;
    private float balance;
    private int init_flag = 0;

    public BankAccount() { // constructor.
        init_flag = 0; // account uninitialized.
    }

    public void menu() {
        int ch;
        Scanner scan = new Scanner(System.in);
        while (true) {
            System.out.println("MAIN MENU");
            System.out.println("1.Initialize Account");
            System.out.println("4.Print Account");
            System.out.print("Enter choice(0 to exit): ");
            ch = scan.nextInt();
            switch (ch) {
                case 0:
                    System.exit(0);
                    break;
                case 1:
                    initializeAccount();
                    break;
                case 4:
                    printAccount();
                    break;
                default:
                    System.out.println("Invalid input.");
            }
        }

    }

    public void initializeAccount() {
        acNo = 123;
        name = "Mrityunjay Kumar";
        acType = "SA";
        balance = 10000.00f;
        System.out.println("\nAccount initialized!\n");
        init_flag = 1;
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

    public static void newAccount() {

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

    }

    public void withdraw() {

    }

    public void displayBalance() {

    }

    public static void main(String[] args) {
        new BankAccount().menu();
    }
}
