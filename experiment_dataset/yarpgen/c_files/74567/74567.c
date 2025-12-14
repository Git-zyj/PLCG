/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_3, var_1));
    var_12 &= (max(var_6, ((((65525 || 91) / -var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (~142);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_13 &= (min(var_10, 114));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_12 [i_1] = ((1 << (8607 - 8594)));
            var_14 = (((var_4 ? 8607 : (arr_7 [i_1]))));
            var_15 = (((arr_5 [i_1 + 2] [i_1]) * 0));
        }
        var_16 ^= (min((max(var_2, ((107 ? 91 : 1187535452)))), (1 + var_4)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_17 ^= var_0;
        arr_15 [i_3] = (((arr_14 [i_3] [i_3]) >= var_0));
        var_18 = (min(var_18, (arr_13 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_19 = (min(var_19, ((((arr_1 [i_4 - 1]) ? 114 : (arr_9 [i_4] [i_4] [1]))))));
        var_20 = (min(var_20, (arr_8 [i_4] [i_4])));
        arr_19 [i_4] [i_4 - 1] |= var_9;
    }
    var_21 -= var_0;
    #pragma endscop
}
