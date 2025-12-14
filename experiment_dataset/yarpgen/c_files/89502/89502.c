/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((((((!(arr_4 [i_0] [i_0]))) ? ((-24175 ? -1592723424 : -24195)) : (~0)))) ? ((var_4 ? var_5 : (arr_3 [i_0]))) : ((24170 ? -15 : 24175))));
                var_16 = (min(-24181, ((var_10 ? (min(-1689876939, 17127)) : (arr_5 [11] [i_1])))));
                var_17 = ((var_4 || (arr_0 [i_0])));
                var_18 ^= (((~var_12) ? (((arr_5 [3] [i_1]) * ((2419553740 ? 0 : -24195)))) : var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_14 [11] [11] |= (((((max(-1, var_5))) ^ ((max(24195, 24202))))));
                arr_15 [i_3] = (max((((arr_9 [i_2 - 2]) ? 86 : var_9)), ((~(arr_7 [i_2 - 1])))));
                arr_16 [i_2] = (arr_6 [1]);
                var_19 ^= ((((min((arr_13 [i_2] [i_2] [i_2 - 1]), 128031024))) ? 0 : (((!(arr_13 [5] [i_3] [i_2]))))));
                var_20 = var_13;
            }
        }
    }
    #pragma endscop
}
