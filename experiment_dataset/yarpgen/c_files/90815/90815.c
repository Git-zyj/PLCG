/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(35 * -36)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 &= (var_7 + var_13);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_22 = (arr_0 [i_0]);
            var_23 = (arr_1 [i_0]);
            var_24 += (arr_2 [i_0]);
        }
        arr_6 [i_0] = (((arr_1 [i_0]) | ((((arr_4 [i_0] [i_0]) || 114)))));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((-36 && (-127 - 1)));
        var_25 = (((((arr_7 [i_2]) / (arr_7 [i_2]))) - (arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = (arr_2 [i_3]);
        var_26 = (((((max((arr_4 [i_3] [i_3]), (arr_3 [i_3] [i_3]))))) > var_1));
        arr_14 [i_3] = ((((!(((~(arr_0 [i_3])))))) || (arr_3 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_27 += (3100 ? 2147483647 : 255);
            var_28 += ((~(!-19)));
            var_29 = 953460267602681650;
        }
        arr_22 [i_4] = ((var_19 >= (((!(((var_12 - (arr_4 [i_4] [i_4])))))))));
    }
    var_30 -= (((var_2 / -var_17) ? var_14 : var_11));
    var_31 -= ((127 | ((var_16 ? ((((var_8 + 2147483647) << (((-46 + 72) - 26))))) : var_5))));
    var_32 -= var_3;
    #pragma endscop
}
