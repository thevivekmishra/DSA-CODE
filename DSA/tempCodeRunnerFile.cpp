int bit=(n&1);
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;