/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max(((10575851567593727748 ? (arr_5 [14] [i_1 + 1] [i_0]) : 1013528591913272795)), ((min((min((arr_7 [i_0] [i_0] [i_0]), 1073741824)), (max((arr_5 [i_0] [20] [i_0]), 0))))))))));
                    arr_9 [i_1] = (max(10575851567593727754, 4294967295));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 + 1] [i_2] [i_1] [1] = (((((3667870347 ? (arr_13 [i_1] [i_1 + 1] [1] [1] [i_1] [i_1 + 1] [i_1]) : var_6))) ? ((min((arr_13 [i_1] [i_4] [i_4] [i_4] [i_4] [i_1 - 1] [i_1]), (arr_13 [i_1] [i_4] [i_4] [i_4] [i_4] [i_1 + 2] [i_1])))) : ((min((arr_13 [i_1] [i_4] [i_4] [i_3] [i_3] [i_1 + 2] [i_1]), (arr_13 [i_1] [i_2] [i_1] [i_1] [15] [i_1 + 1] [i_1]))))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] = ((((min(var_7, 10780276881356778740))) ? (((arr_6 [i_1 + 1] [i_2] [i_4]) ? 10780276881356778725 : (arr_6 [i_2] [i_3 - 1] [i_4]))) : (min(0, 7666467192352772876))));
                                var_15 = max(6994100451404462422, 10575851567593727754);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_16 = (((min((arr_8 [18] [18] [i_6 + 1] [18]), 0)) ? ((max(83, 1))) : ((min((arr_8 [4] [12] [i_6 + 1] [4]), var_0)))));
                arr_23 [1] [i_6] = ((((max((max(0, 7666467192352772874)), (((var_5 ? 0 : var_12)))))) ? ((21854305 ? 0 : 2080374784)) : (((var_11 ? (arr_8 [18] [i_6 - 1] [18] [10]) : (arr_8 [1] [i_6 - 1] [16] [1]))))));
                var_17 = ((min(var_12, 1)) ? (((arr_2 [i_6 + 1]) ? 10167087747222727158 : var_3)) : (min((((var_9 ? (arr_11 [9] [i_5] [i_5] [i_6] [i_6] [i_6]) : 96))), (((arr_22 [i_6 - 1] [i_5] [i_5]) ? (arr_3 [i_5]) : (arr_8 [i_5] [i_5] [1] [1]))))));
            }
        }
    }
    #pragma endscop
}
