/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_15 = ((((!(arr_0 [3] [i_0]))) && var_1));
        var_16 = (min(var_16, (((var_6 - (arr_0 [i_0 + 2] [i_0 + 2]))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_3 [i_1 - 1]);
        arr_6 [i_1] = (arr_5 [i_1]);
        arr_7 [i_1] = ((arr_3 [i_1 + 3]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 3]));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = ((~(arr_3 [i_2 + 2])));
        arr_10 [2] |= ((min((arr_5 [i_2]), (!var_0))));
        arr_11 [i_2] = ((((~(max((arr_8 [i_2]), (arr_8 [i_2]))))) | (((+((((arr_8 [i_2]) || 3330))))))));
        var_19 = ((((min((arr_4 [i_2 + 1]), -1284619117))) ? ((var_9 & (((669396737 ? var_0 : (arr_4 [i_2])))))) : (arr_8 [i_2 + 1])));
        arr_12 [i_2] = -669396737;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_20 |= (arr_13 [i_3 + 3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_21 += ((27371 ? (arr_4 [i_3 + 2]) : 121));
                    var_22 = (max(var_22, ((((-125 + 2147483647) << (((arr_9 [i_3 + 2] [i_3 + 3]) - 69)))))));
                }
            }
        }
        var_23 = ((((var_8 ? 49326 : -6838902777224642639)) * ((((!(arr_18 [i_3] [i_3 + 3] [6] [9])))))));
    }
    var_24 *= var_14;
    var_25 = ((var_5 ? var_3 : ((var_7 << (281474976710655 - 4294967290)))));
    #pragma endscop
}
