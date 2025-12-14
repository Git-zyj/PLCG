/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((var_10 ? (min(0, 10048)) : (!122715368))), var_10));
    var_12 = (max((10048 >= 10068), (min(var_7, (var_5 <= -701240323)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((((arr_1 [i_1]) || (((10068 ? 10068 : (arr_2 [i_1])))))) ? ((max((((var_2 ? -10068 : 9071))), 22586995))) : (((arr_0 [i_0 - 2] [i_0 - 1]) ? 1071720761 : (arr_0 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (((((arr_4 [i_0 + 1] [i_2 + 2]) ? (arr_3 [i_0 - 1]) : 76113673)) * ((((!(arr_4 [i_0 - 1] [i_2 + 2])))))));
                                arr_12 [i_3] [i_3] [i_2] [i_3] [i_3] [i_4] [i_4] = (!(((254 ? 3223246534 : (arr_6 [i_0 - 1] [i_0 - 1])))));
                                var_15 = 3223246562;
                                var_16 = (arr_8 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max((78 / 16116831555418240306), 122715368));
    #pragma endscop
}
