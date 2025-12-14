/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (10 >> 14);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (!var_6);
                                var_21 = (((((!(((var_3 ? var_2 : 195713613))))))) % (min((((-(arr_8 [i_0] [i_0] [i_2])))), (min(-1148258040603655735, -3)))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [18] [i_3] = ((((min(4584482986058940535, (arr_6 [i_0] [i_0] [20] [i_3])))) ? -1363465778 : (((~var_2) ^ ((15794900712932772906 ? 9538304346142390525 : 1148258040603655735))))));
                                var_22 += ((max((min(14043965914497525648, (arr_5 [i_0]))), (4216406132341880059 && 1792))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~7);
    #pragma endscop
}
