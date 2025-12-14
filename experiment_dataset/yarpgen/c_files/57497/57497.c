/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((~(arr_1 [i_0] [i_1])));
                arr_5 [i_0] = ((((~((var_4 ? (arr_2 [i_0] [i_1] [i_1]) : var_15)))) | (((min(((((arr_3 [i_0 + 1] [i_1] [i_1]) && 65525))), (arr_4 [i_1] [i_0] [i_0 - 2])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_1, (((arr_9 [i_1] [i_1] [i_3 - 1]) ? ((var_7 ? var_14 : 3392623690)) : 2107566815))));
                            arr_11 [i_0] [i_0] [i_2] [i_3 + 2] [i_2] [i_3] = (i_0 % 2 == 0) ? (((((~(arr_1 [i_0] [i_3 + 2]))) << (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0]) - 91))))) : (((((~(arr_1 [i_0] [i_3 + 2]))) << (((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0]) - 91)) + 100)))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((!(var_2 + var_6))) || -48063));
    var_18 = var_10;
    var_19 = var_11;
    #pragma endscop
}
