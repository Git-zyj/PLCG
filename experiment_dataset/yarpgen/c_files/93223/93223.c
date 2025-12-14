/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((((((-18 ? -16 : 170))) ? (max(170, (arr_4 [i_0] [i_0] [i_0]))) : ((((arr_5 [i_0] [i_0]) == 182)))))) ? ((max((arr_0 [i_1 + 1]), 240))) : (arr_4 [i_1 - 2] [i_1 - 1] [i_2 - 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = min(((((arr_13 [i_0] [i_3] [i_3] [i_0]) ^ var_6))), (((min(var_6, (arr_12 [i_0] [i_1] [i_2 - 1] [3] [i_4]))))));
                                arr_14 [i_2] [i_3] [i_2] [i_3] [i_0] = ((((min(var_11, -32752))) ? ((0 ? 4294967295 : (arr_5 [i_3 - 1] [i_1 + 1]))) : (((var_12 ? 170 : (arr_3 [i_0] [i_0] [i_3]))))));
                            }
                        }
                    }
                    var_18 = (((19 % 22) && ((((((var_6 ? 118 : -9223372036854775788))) ? -65514 : (max(var_14, 1)))))));
                }
            }
        }
    }
    var_19 = var_6;
    var_20 = (((((-1 ? -2147483633 : -19))) + (max(((-2432038664061895338 ? -1 : var_1)), ((var_0 ? 9223372036854775807 : -1))))));
    #pragma endscop
}
