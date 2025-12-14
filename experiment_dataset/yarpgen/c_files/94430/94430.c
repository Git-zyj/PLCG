/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((((-1385 ? 3976787779208938507 : -3976787779208938509)) / -337055301)), (((max(var_5, 1570206089))))));
    var_21 = (max((max(-var_13, ((max(0, var_19))))), (!var_4)));
    var_22 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [6] [6] &= (((~-95) ? (min(3976787779208938493, var_8)) : (min((~var_9), (((-(arr_2 [16]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_0] [i_0] = ((((max(357283074, var_11))) & -99));
                            arr_13 [i_0] [i_0] [i_0] [i_3 - 2] [i_2] [i_0] = var_2;
                            arr_14 [i_0] [i_1 - 1] [i_2] [22] [i_2] [i_3] = 65523;
                            var_23 = 101;
                        }
                    }
                }
                arr_15 [i_0] = (max((!3976787779208938507), var_0));
            }
        }
    }
    #pragma endscop
}
