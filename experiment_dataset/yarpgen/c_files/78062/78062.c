/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    var_13 |= (var_1 | var_2);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_14, (((((var_7 >> var_3) % (arr_0 [12]))) > (((((arr_0 [16]) != (max(14, 8617786347432012081))))))))));
        var_15 ^= (max(2147483647, (((var_8 / (arr_0 [4]))))));
        arr_2 [1] &= (((((arr_0 [4]) & (arr_1 [i_0]))) - var_11));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_16 = ((~((~((max((arr_5 [13]), (arr_6 [i_1] [i_1]))))))));
            var_17 = (((arr_7 [i_1] [i_1] [i_1]) ? ((((((1 | (arr_5 [0])))) ? 232 : (arr_6 [i_1] [i_2])))) : (min(((var_10 ? 2118002859 : -50)), (arr_4 [i_1] [i_1])))));
            arr_8 [i_1] = ((((((arr_6 [i_2] [i_1]) / (arr_6 [i_1] [i_1])))) ? (arr_6 [i_1] [i_2]) : (arr_6 [i_1] [i_2])));
            var_18 = (max(var_18, 2118002859));
            var_19 = (((((var_0 ? (arr_7 [i_2] [1] [i_1]) : var_9))) - (var_4 >= var_1)));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_1] [i_3] [i_1] = (((arr_4 [i_3 - 1] [i_3 - 1]) ? (arr_3 [i_3 - 1] [i_3 - 1]) : 23));
            arr_14 [i_1] [i_1] = ((!(arr_4 [i_3] [i_3 - 1])));
        }
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_20 ^= (arr_12 [1] [i_4 - 1] [i_4]);
            var_21 ^= (~13);
        }
        arr_18 [i_1] = (arr_9 [i_1]);
        arr_19 [i_1] = ((+(((arr_15 [i_1] [i_1]) ? var_10 : (arr_15 [i_1] [i_1])))));
        var_22 *= ((-((((((arr_15 [i_1] [i_1]) + -1897864366))) ? 6 : (arr_10 [i_1])))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 = (max(var_23, (((-((var_5 / (arr_15 [i_5] [i_5]))))))));
        arr_23 [9] [3] = (arr_22 [i_5]);
        var_24 = (min(var_24, 232));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_25 = (arr_16 [i_6] [i_6]);
        var_26 = var_4;
    }
    #pragma endscop
}
