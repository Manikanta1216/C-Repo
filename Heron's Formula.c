#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
        double s, area;

            // Input the three sides
                scanf("%d %d %d", &a, &b, &c);

                    // Calculate semi-perimeter
                        s = (a + b + c) / 2.0;

                            // Check if sides form a valid triangle
                                if (a + b > c && a + c > b && b + c > a) {
                                        // Calculate area using Heron's formula
                                                area = sqrt(s * (s - a) * (s - b) * (s - c));
                                                    } else {
                                                            // If not a valid triangle, area is 0
                                                                    area = 0.0;
                                                                        }

                                                                            // Print area with 4 decimal places
                                                                                printf("%.4f\n", area);

                                                                                    return 0;
                                                                                    }
                                                                                    