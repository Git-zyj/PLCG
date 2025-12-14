/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(((var_12 ? var_3 : var_4)), var_10)), (((max(var_13, 32743))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [3] [9] [i_1] [i_1] = ((((max(var_6, (arr_3 [i_0 - 1] [i_1] [i_1 + 1])))) ? (((arr_3 [i_0 - 1] [1] [i_1 + 1]) ? var_5 : (arr_3 [i_0] [i_0] [i_1 + 1]))) : ((((arr_3 [i_0] [i_0] [i_1 + 1]) > (arr_3 [10] [i_1 + 1] [i_1 + 1]))))));
                    var_17 = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = ((((119 ? var_0 : (arr_1 [i_0 - 1] [i_2]))) != ((((!(((var_9 ? -32731 : var_0)))))))));
                                var_19 = (0 - 6871);
                                var_20 = (((-127 - 1) ? 0 : 123));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
