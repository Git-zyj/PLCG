/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((-(70 - var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] &= ((((((((var_8 ? (arr_6 [i_1]) : var_2))) ? var_11 : (min(7488085270956792653, 96))))) || ((((arr_1 [i_0] [i_1]) ? (21504 | 0) : (arr_0 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = 186;
                            var_17 = (min(var_17, (arr_11 [i_0] [1] [1])));
                            var_18 ^= ((var_7 ? ((((!((((arr_9 [17] [4] [i_2]) ? var_1 : var_12))))))) : (~var_7)));
                            var_19 = (max(var_19, (((~(((arr_7 [i_2]) - -1251338138055947074)))))));
                            arr_14 [i_2] [i_1] [13] [i_1] = (arr_13 [i_1] [i_2] [i_0] [i_2] [i_1]);
                        }
                    }
                }
                var_20 *= (~-var_12);
            }
        }
    }
    var_21 = ((((min(var_14, -var_14))) ? var_9 : (((var_2 ? var_3 : var_0)))));
    #pragma endscop
}
