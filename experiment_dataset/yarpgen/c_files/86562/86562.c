/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = ((var_0 ? 5613100611354391863 : ((((var_7 & 3418012994) ? (((127 > (arr_1 [i_0])))) : (arr_2 [i_0] [i_1]))))));
                var_14 ^= (arr_0 [i_0]);
                arr_7 [1] [1] |= ((-((((((min(var_5, 0)))) <= ((var_2 | (arr_6 [i_1] [i_1] [i_1]))))))));
                var_15 = -112;
                var_16 = (max(var_16, ((max((arr_1 [i_1]), ((-(((arr_5 [4] [4] [4]) ? (arr_1 [i_0]) : (arr_2 [8] [i_1 + 4]))))))))));
            }
        }
    }
    var_17 = ((117 ? ((((var_4 ? var_2 : var_9)))) : ((var_5 ? (((1 ? var_11 : var_4))) : var_2))));
    #pragma endscop
}
