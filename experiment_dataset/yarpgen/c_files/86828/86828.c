/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 ^= -7460101885460248526;
        var_15 = arr_0 [i_0];
        arr_3 [12] [i_0] = (arr_2 [3]);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 = (arr_0 [i_1]);
        var_17 &= ((((((arr_2 [i_1 + 1]) / -2147483634))) ? ((~(arr_2 [i_1 + 1]))) : (2147483634 / -2147483634)));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_1] |= (arr_2 [i_1 + 1]);

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                var_18 *= 65535;
                arr_12 [i_1] [i_1] [i_3] = 65533;
            }
            arr_13 [i_1] [i_2] = ((((arr_5 [i_1]) | (arr_2 [i_1]))));
            var_19 *= ((8594670026215101456 ? (((arr_7 [i_2]) >> (((arr_6 [i_1 + 1] [i_1 + 1]) - 7187120856331479247)))) : -1280044998));
            arr_14 [i_2] = (((-2147483634 + 2147483647) << (((arr_2 [i_1]) - 2023507261))));
        }
    }
    var_20 = (min((((20933 & 2147483633) - 2147483624)), var_9));
    var_21 = var_10;
    var_22 = var_5;
    #pragma endscop
}
