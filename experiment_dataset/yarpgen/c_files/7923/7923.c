/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = ((((((max((arr_1 [i_0]), (arr_6 [i_0] [13])))) + var_5)) < 30356));
                                var_21 = (((((((var_1 >= var_1) && ((((arr_3 [i_1] [i_2] [1]) << (-30344 + 30357)))))))) > (((arr_0 [i_3 - 1] [i_0 - 1]) ? (min(var_16, var_13)) : (119 + -18111)))));
                            }
                        }
                    }
                    var_22 = (((arr_0 [i_0 + 1] [i_0]) ? 6 : var_4));
                }
            }
        }
    }
    var_23 |= (((max((min(var_13, var_5)), -990623239)) | ((((((4294967295 ? 2659644056 : -5))) ? var_13 : var_14)))));
    #pragma endscop
}
