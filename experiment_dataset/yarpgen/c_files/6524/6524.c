/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-(!131071)))) ? (~-16374084198504715865) : -var_11));
    var_21 = (!var_6);
    var_22 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((!(((9521 ? 193 : 132)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_23 = ((~(~54894)));
                                var_24 = (--131065);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
