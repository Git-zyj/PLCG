/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((((-((((arr_10 [i_0] [i_1] [i_2] [i_3]) == -95))))) <= (((arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2]) ? ((10825 ? (arr_3 [i_1]) : 32020)) : -74))));
                        arr_12 [i_0] [i_1] [i_0] = (max(((min(33515, var_1))), ((~((var_7 ? var_0 : (arr_1 [i_0])))))));
                        var_10 = ((248 ? (((arr_4 [i_1] [8]) ? (arr_10 [i_0] [i_1] [i_2] [i_1 - 2]) : (arr_4 [i_1] [i_1]))) : (max(((min(-2304, 2311))), (-66 * 32033)))));
                        var_11 = 6;
                    }
                    var_12 |= -251;
                }
            }
        }
    }
    var_13 = (((((((var_0 ? 252 : var_2)) * (!var_4)))) ? ((0 ? (var_7 & 52614) : var_6)) : var_4));
    var_14 = (((((~-14606) >> (var_1 + 42))) > ((var_0 ? ((min(var_0, 14616))) : ((max(var_2, 2309)))))));
    #pragma endscop
}
