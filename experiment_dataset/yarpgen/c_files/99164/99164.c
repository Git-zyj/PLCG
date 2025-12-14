/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = ((min(var_5, var_2)));
                    arr_6 [i_0] = ((~(-2 | var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (max((((!(!var_4)))), -1922644360));
                                var_12 = ((!(!var_0)));
                                var_13 = ((!(-1069100954 > -8337690727069856522)));
                                var_14 = -2;
                            }
                        }
                    }
                    var_15 |= var_1;
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = var_2;
    #pragma endscop
}
