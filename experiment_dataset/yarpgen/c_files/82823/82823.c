/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((!((max((arr_4 [i_1] [i_1] [i_2]), (arr_4 [i_1] [5] [i_1]))))));
                                var_21 = ((!((!(((~(arr_0 [i_3] [i_2]))))))));
                            }
                        }
                    }
                    var_22 = -0;
                }
                var_23 = (!144114913197948928);
            }
        }
    }
    #pragma endscop
}
