/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? ((((~var_8) + (min(var_1, var_6))))) : (min(((min(var_8, var_12))), var_2))));
    var_17 = 65504;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_2] = ((((min((arr_9 [i_0 - 1] [i_1] [i_4] [i_4] [i_4] [i_4]), ((29360128 ? var_9 : (-127 - 1)))))) ? ((((1012 ? (arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3] [i_3]) : (arr_4 [i_4]))) & (((127 ? var_9 : (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))))) : ((min(74, (((arr_7 [i_4] [i_4] [i_4] [i_0] [i_4]) ? -24454 : -1066253106)))))));
                                arr_13 [4] [i_0] [i_3] = (min(((min(((-741516054 ? 4789 : 1066253110)), (min(1066253100, -354440425))))), ((-(min((arr_7 [i_0] [i_1] [i_2] [i_0] [i_4]), (arr_9 [i_0] [i_0] [i_1] [3] [1] [1])))))));
                            }
                        }
                    }
                    var_18 = 1733008458754221947;
                    arr_14 [i_0] = (((((((1000 ? 741516053 : -1066253089))) && var_0)) ? ((-102 ? 405023866077209906 : 618941235)) : (min(var_12, (min(233, var_10))))));
                    var_19 = (((((((min((arr_2 [i_1] [i_1]), var_7))) ? (min(255, (arr_4 [i_0]))) : (((var_5 ? var_6 : (arr_6 [i_2] [11] [11]))))))) ? (arr_2 [i_1] [i_1]) : ((183 ? (min(3098552597485031666, 1)) : var_10))));
                }
            }
        }
    }
    #pragma endscop
}
