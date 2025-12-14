/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 |= var_7;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (-529432076911099004 - var_4);
                    var_15 = (((arr_6 [i_0]) * ((var_2 ? 0 : var_5))));
                    var_16 -= (((((arr_0 [10] [10]) & 8493392072100552321)) >= (arr_7 [i_2] [i_0])));
                    var_17 ^= arr_8 [i_0] [i_0 - 2] [20] [i_1 - 1];
                }
            }
        }
        var_18 = (max(var_18, var_11));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_19 ^= (arr_11 [12] [i_4 - 2]);
            var_20 = (min(var_20, 204));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_21 [i_3] [i_5] [18] [18] = 39;
                arr_22 [i_3] [i_3] [i_6] = ((((((arr_14 [4] [i_5]) ? var_12 : 255))) ? 65513 : (arr_15 [i_3])));
            }
            arr_23 [i_3] = (((arr_15 [i_3]) % (arr_17 [i_3])));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_27 [i_3] [i_3] [i_3] = (((var_4 < var_8) / (arr_11 [i_3] [i_3 - 2])));
            var_21 = var_5;
            arr_28 [i_3] [i_3] = ((!(((32736 ? (arr_12 [i_3]) : 4031356251)))));
        }
        var_22 = (max(var_22, (((var_5 ? 268435456 : (arr_15 [14]))))));
    }
    var_23 = (((max(var_7, (var_10 % 1))) > var_11));

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_24 = (max((((!(((arr_5 [i_8] [i_8]) && var_6))))), (max((max(0, (arr_2 [i_8]))), ((((arr_29 [i_8]) || 14170140704876210013)))))));
        var_25 = (min(var_25, (((((((arr_10 [24]) ? 91 : (arr_10 [16])))) ? (var_8 & -86) : (((((arr_10 [18]) < 2103516043)))))))));
    }
    #pragma endscop
}
