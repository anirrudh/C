/* K&R Example 1-10 Solutions */

int main() {
        int c; 
        while ((c = getchar();) != EOF) {
                if (c == '\t') {
                        putchar('\\');
                        putchar('t');
                }
                else if (c == '\b') {
                        putchar('\\');
                        putchar('b');
                }
                else if (c == '\\') {
                        putchar('\\');
                        putchar('\\');
                }

}
}
