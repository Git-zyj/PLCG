/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_10 ^= (arr_4 [5]);
                var_11 = (max(((((arr_1 [4] [i_1]) ? (arr_3 [i_1]) : 65535))), (((~(arr_0 [i_0]))))));
                arr_6 [1] [3] [i_0] = var_4;
            }
        }
    }

    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_12 = (1 ? 16383 : 16375);
        var_13 ^= -var_7;
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        var_14 |= ((var_4 ^ (!49152)));

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_14 [1] = (((!(arr_13 [i_3 - 2]))));
            arr_15 [9] = var_9;
            arr_16 [i_4] = var_8;
            var_15 &= var_5;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_16 -= (max((((arr_18 [i_3 - 1]) ? (arr_18 [i_3 - 2]) : var_5)), (((var_3 ^ (arr_18 [i_3 - 1]))))));
            arr_19 [i_3] [i_5] &= (!((((arr_18 [i_3 - 1]) / (arr_18 [i_3 - 3])))));
            arr_20 [i_3] [i_5] = (arr_9 [7] [i_5]);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_24 [i_3] [1] [1] &= (!(((arr_13 [3]) >= (((arr_0 [i_3]) ? -8899297557848612001 : 56244)))));
            var_17 = ((((arr_13 [i_3 + 1]) ? (arr_23 [i_3 + 2] [i_3 + 2] [i_3 + 1]) : (arr_13 [i_3 + 2]))) >= (min((arr_21 [i_3]), (!var_6))));
            var_18 = ((max(49152, 4575657221408423936)));
        }
        arr_25 [8] &= ((+((max((arr_18 [i_3 + 2]), 59343)))));
    }
    #pragma endscop
}
