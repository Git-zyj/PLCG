/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((60497 * ((max(var_11, var_9)))))) ? -90 : var_7));
    var_16 = (max(var_16, (((3572612296 ? ((((((var_8 ? var_8 : 5030))) && (var_7 + 73)))) : ((var_14 ? (var_11 * 24680) : var_3)))))));
    var_17 = max((-var_5 + var_7), ((max((var_2 == var_12), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 764263294638778273;
                var_18 = (max(var_18, (((((~(arr_2 [i_0] [i_0]))) != (arr_1 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_19 = (--60497);
                            arr_10 [i_3] [i_3] [i_3] [i_0] = (((90 / (arr_6 [i_3] [i_3 - 2]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_20 = (min(var_20, (arr_15 [i_4 + 1] [i_4 + 1])));
                var_21 = max((((arr_16 [i_4] [i_5] [i_4]) >> (5039 - 5037))), (arr_16 [i_4 + 1] [i_5] [i_4]));
            }
        }
    }
    #pragma endscop
}
