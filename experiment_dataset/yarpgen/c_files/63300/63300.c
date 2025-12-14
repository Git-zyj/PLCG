/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-(2130706432 + 4183103916));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(-45356, (!19)));
                    arr_7 [i_2] [i_0] [i_0] = (((2097151 && -1307953371) ? (!var_11) : (0 > -1477143704)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 += 3013338531;
                                var_16 = ((((((((65517 ? 3013338531 : 32256)) <= 0)))) / (((var_12 != var_4) ? (min(var_5, 4836756037604478579)) : (!32265)))));
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_0] [i_3] &= ((((((((-1799753362 ? var_5 : -1))) ? (~43956) : 46390))) >= (1477143699 == 10572)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 -= (min(-1, (min(1477143679, 4276279752))));
    #pragma endscop
}
