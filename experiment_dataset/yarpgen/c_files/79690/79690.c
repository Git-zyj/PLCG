/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 179;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (((((((max((arr_5 [i_0] [i_0]), (arr_3 [i_0] [i_1])))) ? ((2370147405 ? var_5 : var_1)) : var_5))) ? var_3 : var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] = var_7;
                            arr_13 [1] [i_0] [i_2] [i_3] = var_1;
                            var_13 += (((arr_9 [i_0] [i_1] [i_1] [4] [i_3 + 1]) ? 1924819890 : ((max(((var_2 ? 1 : 94)), 167)))));
                            arr_14 [i_0] [i_1] [i_3] = var_10;
                        }
                    }
                }
            }
        }
    }
    var_14 = (var_1 && ((((((var_1 ? var_7 : var_6))) ? (!var_4) : var_7))));
    #pragma endscop
}
