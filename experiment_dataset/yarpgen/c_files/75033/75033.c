/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(~var_12)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0 - 1] [i_2] [i_0] = (arr_9 [i_0] [i_1] [6]);
                    var_21 &= (max((max(0, (((var_14 ? var_1 : 1))))), 1));
                    var_22 &= (arr_7 [i_2] [i_1 - 2] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_4 - 1] [i_4] = (1 < 1);
                var_23 = 1;
                arr_19 [i_3] [i_3] = (max(var_17, (((!(((1 ? var_8 : 31949))))))));
                arr_20 [i_3] = (max(((((1 != (arr_3 [i_3]))))), 1));
            }
        }
    }
    #pragma endscop
}
