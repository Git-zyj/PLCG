/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3006283976617921745;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_21 = ((((((!(arr_2 [i_2]))) ? (max(-5050566899774191597, (arr_5 [i_2] [i_2] [12]))) : (arr_2 [5]))) > (((max(var_9, (arr_3 [i_1 - 1] [i_0 + 1])))))));
                            var_22 = 292229299944049752;
                        }
                    }
                }
                var_23 = (!var_9);
                var_24 = (max(((1 ? (min((arr_1 [i_1] [i_0 + 1]), (arr_0 [i_0]))) : (((19692 ? (arr_0 [i_0]) : 44547))))), (arr_5 [i_0] [i_0] [12])));
                arr_8 [i_0] |= ((~((max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
