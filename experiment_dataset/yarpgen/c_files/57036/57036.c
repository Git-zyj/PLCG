/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min((min((-2106309921 && var_9), var_11)), var_4)))));
    var_13 = ((((((var_4 ? 255 : -85058435))) ? (51 && var_6) : (1191957742 || var_4))));
    var_14 = var_2;
    var_15 = (max(var_15, ((min(var_2, 8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = 1252911863;
                    arr_9 [i_2] = (((arr_8 [i_2] [i_0] [i_0]) & (arr_6 [i_0] [i_1 - 2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 += arr_12 [i_0] [i_0] [i_2] [i_1] [i_1];
                                arr_14 [1] [i_2] [i_0] = (((((max(238, 25580))) | (min(22, -1684515474)))));
                                var_18 += ((((101 ? 857581197 : 3110)) + ((((((130 + (arr_8 [i_4] [i_2] [i_1])))) ? (min(-94, 2106309932)) : -620654165)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
