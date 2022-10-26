import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int diff;
        int n = sc.nextInt(), i, j;
        int nums[][] = new int[n][n];
        
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                nums[i][j] = sc.nextInt();
            }
        }
        
        int diagLeft = 0, diagRight = 0;
        
        for(i = 0; i < n; i++) {
            j = i;
            diagLeft += nums[i][j];
        }
        
        for(i = 0; i < n; i++) {
            j = n - i - 1;
            diagRight += nums[i][j];
        }
        
        System.out.println(Math.abs(diagLeft - diagRight));
    }
}
