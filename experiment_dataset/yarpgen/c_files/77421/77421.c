/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (((arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_0]) % ((((var_1 + (arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_3])))))));
                            arr_12 [i_0] [i_1] [i_1] [0] [i_2] [i_0] = (!var_1);
                            var_13 *= ((!((min((arr_2 [i_0 + 1] [i_0 + 3] [i_0 + 1]), var_11)))));
                            var_14 = (arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                        }
                    }
                }
                var_15 = (min(var_15, (((((var_9 ? (!var_0) : (((arr_8 [i_0 - 1] [i_1]) - (arr_6 [0] [i_1 - 2] [i_1] [i_1]))))) / 115)))));
                var_16 = var_9;
                arr_13 [i_0] [i_1] = ((arr_8 [i_0] [i_1]) * (-27 > 6882999410378705894));
                var_17 -= 74;
            }
        }
    }
    var_18 -= ((min(-var_7, var_3)));
    var_19 = ((min((((var_11 << (var_2 - 17218259541157028577)))), var_2)));
    #pragma endscop
}
