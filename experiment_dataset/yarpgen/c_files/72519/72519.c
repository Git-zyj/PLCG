/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_3;
                var_11 = (min((((arr_3 [i_0] [i_0]) ? -310912873 : 310912866)), 310912884));
                arr_5 [12] [i_0] [i_1] = (((((-310912879 + (arr_1 [i_0])))) || (((-var_6 ? (310912879 & 310912880) : (((var_9 + 9223372036854775807) << (310912875 - 310912875))))))));
                arr_6 [2] [i_1] = ((min((arr_3 [i_0] [i_0]), (arr_1 [i_0]))));
            }
        }
    }
    var_12 = ((var_2 - (max(var_10, (var_4 + var_9)))));
    #pragma endscop
}
