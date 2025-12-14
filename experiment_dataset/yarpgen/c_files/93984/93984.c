/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((11805 + 1537135541) * var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= (734374585 == 1537135569);
                    var_20 *= var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [8] |= (((43687 + 44239) == (1537135529 <= 16957)));
                                var_21 = 8787503087616;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0 + 1] = var_0;
                            }
                        }
                    }
                    var_22 = (max(var_22, 1537135554));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    var_23 = (var_5 == var_7);
                    arr_24 [i_5] [i_7] = -16;
                }
            }
        }
    }
    #pragma endscop
}
