/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((~((~(arr_3 [0] [i_0])))));
                arr_7 [i_0] = 254;
                arr_8 [i_0] [i_0] [i_0] = ((((((((arr_3 [i_0] [i_0]) ? (arr_1 [i_0]) : 1))) != -3572423117)) ? (((var_11 ? 1 : (((722544166 > (arr_0 [i_0] [i_1]))))))) : (~2182195048)));
                var_20 = (min(19296, (~3572423130)));
                var_21 = (((((arr_3 [i_0] [i_0]) ? 1 : var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_18 [i_2 - 2] [i_3 + 1] = var_8;
                            arr_19 [i_2] [4] [i_2] [i_5] = 722544181;
                        }
                    }
                }
                arr_20 [15] = ((arr_9 [i_2 + 2]) ? 722544187 : (((((1 ? 137 : var_11))) ? (254 ^ 4066652277) : (arr_17 [i_2 + 2] [i_2 + 2]))));
            }
        }
    }
    var_22 = 240;
    #pragma endscop
}
