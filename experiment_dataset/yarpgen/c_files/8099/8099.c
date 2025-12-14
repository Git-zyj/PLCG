/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((var_5 || 317356619317953565), ((var_11 ? 3839570513 : 254))))) ? (((~261) | -var_0)) : (((var_0 && (((var_4 ? var_6 : var_4))))))));
    var_18 = (((((~(65288 + var_15)))) ? (((~var_0) + 317356619317953564)) : (min(var_12, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (((arr_3 [i_0] [i_1 + 2] [i_1]) ? (arr_0 [i_0] [i_1 + 4]) : (((arr_3 [i_0] [i_1 + 3] [8]) ^ (arr_0 [i_0] [i_1 - 1])))));
                var_20 = arr_3 [10] [10] [i_1 - 1];
                var_21 -= ((65275 ? ((((536868864 + (arr_1 [i_0]))) % (~-3233249298725194295))) : ((((min((arr_1 [1]), (arr_2 [2])))) ? -9223372036854775807 : ((((arr_2 [i_1]) / 4088)))))));
                var_22 ^= (arr_1 [1]);
                var_23 = ((((((2060342763 ? -2933279693470304830 : 317356619317953565)))) % ((min(var_4, 4088)))));
            }
        }
    }
    #pragma endscop
}
