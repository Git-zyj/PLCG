/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((((max(18446744073709551615, 0))) ? ((var_13 ? var_6 : var_11)) : var_9))), ((((var_2 ? 17514056782082271940 : (-2147483647 - 1))) / (max(-92, 18446744073709551615))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((16881251802221210446 ? 1565492271488341170 : 0));
                    var_15 *= (((((~((var_11 >> (((arr_7 [i_1] [i_2]) - 3420897931))))))) >= (arr_7 [i_0] [i_0])));
                    var_16 = 18446744073709551594;
                    arr_10 [i_0] [i_1] [7] = (((((var_7 / 18446744073709551606) + (((18446744073709551615 ? 8556874703431494342 : 111))))) <= ((58 ? ((min((arr_2 [i_1] [i_1]), 0))) : (max((-127 - 1), 19))))));
                    var_17 = (((((min(var_10, var_8)) >= ((max(1, 0))))) ? (arr_6 [i_0]) : (max(var_13, (arr_7 [i_1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
