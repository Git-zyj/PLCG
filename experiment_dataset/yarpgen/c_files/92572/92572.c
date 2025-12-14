/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_21 = ((!((min((max(1, 13462543432549679712)), 13462543432549679683)))));
                                var_22 ^= ((((min(-90, var_5)))));
                                var_23 = (min(var_23, (~113)));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = ((!((!((min(4975332210525206291, 121)))))));
                                var_24 = (max(var_24, (((!(!-104))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] [i_2] = -75;
                    arr_15 [i_0] [i_2] [i_0] [i_0] = var_7;
                    var_25 = (max(var_25, var_10));
                }
            }
        }
    }
    #pragma endscop
}
