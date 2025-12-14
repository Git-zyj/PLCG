/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 &= (--64731);
    var_20 = ((((min(14362626799801098527, var_1))) ? 65535 : (((max(var_0, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_21 = (-(arr_3 [i_2] [i_3]));
                                var_22 = (((-127 - 1) != (min(var_15, (((-3443869538586199828 ? var_1 : (arr_0 [i_3]))))))));
                            }
                            var_23 = (max(1, (max(3975221797, 65535))));
                        }
                    }
                }
                var_24 |= (arr_4 [i_0] [i_1] [i_0] [i_0]);
                arr_10 [i_0] [i_0] &= ((max(1, var_10)));
            }
        }
    }
    var_25 = 0;
    #pragma endscop
}
