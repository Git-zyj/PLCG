/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-9223372036854775805 / ((var_13 ? var_5 : var_14))))) ? var_0 : (((((322136082 ? 1346015212896012519 : 1346015212896012519)) <= ((var_7 ? var_3 : var_16)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 ^= ((((((arr_5 [i_0 + 1] [i_2 - 2]) ? (((arr_5 [i_1] [i_2]) ? var_5 : (arr_2 [i_0]))) : (arr_3 [i_2])))) && (arr_4 [i_0] [i_1])));
                    var_19 |= -322136082;
                    var_20 = (min(((((((-832032819336909079 + 9223372036854775807) >> (79 - 49)))) ? (((arr_3 [i_0]) ? (arr_7 [i_0 + 1] [i_2] [i_2]) : 7871442307069541474)) : (((17100728860813539103 ? 255 : 15))))), ((((max((arr_1 [i_0 + 1]), var_6)) / (~-269073474))))));
                    var_21 = ((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) && var_4));
                    arr_8 [i_2] = 253;
                }
            }
        }
    }
    var_22 = (((((var_13 >= 780707122) ? (max(var_8, var_12)) : ((max(186, var_1)))))) - var_16);
    #pragma endscop
}
