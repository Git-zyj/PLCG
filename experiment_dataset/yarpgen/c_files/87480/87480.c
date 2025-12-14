/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = (max(((((!7321120239670305753) | ((-2 ? 1 : (arr_6 [i_0] [12] [i_2] [i_3])))))), ((~(((-1 + 9223372036854775807) << (((-26 + 68) - 42))))))));
                                var_15 = (max(var_15, var_3));
                                var_16 = var_1;
                                arr_14 [12] = ((arr_13 [i_0] [i_1] [i_0] [8] [2] [i_3] [i_1]) < (((max((!var_2), var_6)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((var_4 << (((min((arr_16 [i_1] [i_5] [i_6]), var_11)) % 1)))))));
                                var_18 = (min((((((18 ? 22 : var_6))) ? (var_0 ^ var_2) : (((29 + (arr_2 [i_2])))))), (((!((min(4294967290, var_0))))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_2] = (min(((-(var_2 - var_8))), (((-((var_3 ? var_2 : var_7)))))));
                    var_19 = ((((min((var_8 - 188), (48 + 2139036469)))) || ((((((var_10 ? var_7 : var_6))) ? ((((-1 + 9223372036854775807) >> var_2))) : (-32488 * 785146708081355163))))));
                    var_20 = (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((!0) << ((((arr_16 [i_1] [i_1] [i_0]) <= -1))))) : ((var_7 ? (var_0 < var_8) : ((min((arr_4 [i_0] [i_1]), 35)))))));
                }
            }
        }
    }
    #pragma endscop
}
