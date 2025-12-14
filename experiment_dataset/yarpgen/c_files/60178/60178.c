/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 += ((!((min((arr_1 [i_3 + 1] [i_3 - 1]), (arr_1 [i_3 + 2] [i_3 - 1]))))));
                            var_17 = arr_6 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1];
                            var_18 = (arr_2 [i_3 + 1] [20] [2]);
                        }
                    }
                }
                var_19 = ((((max(var_0, 18446744073709551615))) ? ((-(arr_3 [i_0] [i_0]))) : (min(-4667534583961304045, (arr_2 [15] [i_1] [i_0])))));
            }
        }
    }
    var_20 = (max((((~var_3) ? 18446744073709551615 : 15991901665235335372)), (((((var_0 ? var_13 : 15128042406403703605))) ? var_12 : 15128042406403703605))));
    #pragma endscop
}
