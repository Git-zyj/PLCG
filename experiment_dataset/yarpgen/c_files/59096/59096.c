/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((((((arr_3 [i_0] [i_1] [i_0]) - (arr_3 [i_0] [i_0] [i_2])))) ? (arr_1 [i_0] [i_2]) : (((arr_1 [i_1] [i_2]) ? (arr_1 [i_0] [i_0]) : (arr_1 [10] [i_1]))))))));
                    var_16 = (min(-9026824182585459966, (arr_3 [i_0] [2] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_13 [i_4] [i_4] = ((((((((var_7 ? var_8 : var_14))) ? -2842632899037497164 : (min(var_0, var_12))))) ? -3231427113988744858 : -166));
                arr_14 [i_4] [i_4] = var_14;
                var_17 = (min((max((arr_12 [i_4]), (arr_12 [i_3]))), ((var_0 ? var_13 : (arr_12 [i_4])))));
            }
        }
    }
    #pragma endscop
}
