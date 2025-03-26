int evklid(int a, int b) {
    if (b == 0) return a;
    else evklid(b, a % b);
}