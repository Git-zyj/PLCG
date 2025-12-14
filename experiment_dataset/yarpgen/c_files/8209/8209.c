/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((~(arr_3 [i_0] [i_0] [i_0]))) >= (((((min((arr_3 [i_1] [i_0] [i_0]), var_13))) || 2657857705))))))));
                var_21 = ((((min(var_4, var_1)) | var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_22 = ((((arr_5 [i_3 + 1] [i_1] [i_3 + 4]) ? (arr_6 [i_3 - 1] [i_3 + 2] [i_3]) : (arr_5 [i_3 + 4] [i_1] [i_3 - 2]))));
                            var_23 = (min(var_23, ((min((((((max(0, var_7)))) / (min(42354, 1869429486)))), var_19)))));
                            var_24 -= (((arr_1 [i_3 + 1]) | (~var_0)));
                            var_25 += ((min(((min(1637109591, var_9))), ((1637109577 ? 2425537815 : 18446744073709551615)))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((~(((!var_12) ? (((var_4 ? var_11 : var_1))) : (min(1, 1869429481))))));
    #pragma endscop
}
