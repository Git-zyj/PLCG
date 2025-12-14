/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_10 ? (((max(var_7, -9920)) - var_9)) : var_6);
    var_14 = (max((!323505539074642679), (((var_10 & var_4) | (max(18123238534634908936, 1222178213))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 ^= (max(1, (min(1714033600402867497, (arr_1 [i_0 - 1] [i_0 + 1])))));
                var_16 += 18123238534634908936;
            }
        }
    }

    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (arr_4 [i_4]);
                    arr_10 [i_4] [i_2] [i_2] = (~1);
                }
            }
        }
        arr_11 [6] [12] = (((((((min((arr_6 [i_2] [i_2] [i_2 - 3]), 5))) ? (arr_9 [i_2] [i_2] [i_2]) : var_7))) ? (max(9223372036854775807, 18123238534634908936)) : ((max(-1436141730, (~var_10))))));
        arr_12 [i_2] = (min(var_5, ((var_8 ? ((((!(arr_7 [i_2] [i_2 - 3] [i_2]))))) : 531618017092288369))));
        arr_13 [2] = 253;
        var_18 = var_7;
    }
    for (int i_5 = 1; i_5 < 6;i_5 += 1)
    {
        arr_16 [i_5] = ((-((min((!4086308958), (arr_15 [i_5]))))));
        var_19 += (((((var_3 - (arr_7 [i_5] [i_5 + 1] [i_5 + 4])))) ? ((var_11 ? var_11 : (arr_7 [10] [i_5 + 4] [10]))) : ((2129603966 ^ (arr_7 [6] [i_5 + 1] [i_5])))));
    }
    #pragma endscop
}
