/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((29 ? ((max((min(1, var_15)), 2747631369))) : -663817087776522017));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [4] [i_0] = ((!((min((!var_9), ((-10694 ? var_15 : var_10)))))));
                    var_19 = (arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [6] [4] [6] [6] [i_0] = (((arr_10 [3]) + ((((((arr_4 [i_0] [i_0] [5]) && -10694)) ? var_15 : 10694)))));
                                var_20 = var_5;
                            }
                        }
                    }
                    arr_14 [i_0 + 1] [i_1] [i_2] = (arr_5 [i_2] [i_2] [2]);
                }
            }
        }
    }
    var_21 = (var_9 - ((((var_9 ? -10694 : var_10)) / ((max(10689, 10694))))));
    #pragma endscop
}
