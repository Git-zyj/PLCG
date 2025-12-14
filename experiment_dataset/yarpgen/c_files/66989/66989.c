/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 9223372036854775807;
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 = (i_2 % 2 == zero) ? (((((((arr_7 [i_1] [i_2] [i_1]) % var_5))) ? ((((((arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 2]) + 2147483647)) << (((arr_8 [i_2] [i_2]) - 1234830881))))) : ((var_5 ? (arr_3 [i_1 - 2]) : ((17957616041940940109 >> (((arr_4 [i_2] [i_3]) - 404814065))))))))) : (((((((arr_7 [i_1] [i_2] [i_1]) % var_5))) ? ((((((arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 2]) + 2147483647)) << (((((((arr_8 [i_2] [i_2]) - 1234830881)) + 2045049846)) - 4))))) : ((var_5 ? (arr_3 [i_1 - 2]) : ((17957616041940940109 >> (((arr_4 [i_2] [i_3]) - 404814065)))))))));
                    arr_12 [i_1] [i_2] [i_1] = 9223372036854775807;
                }
            }
        }
    }
    var_15 = (((((((var_8 ? var_3 : 9223372036854775807))) ? ((var_12 ? 9223372036854775807 : var_12)) : var_6)) % ((((((var_8 ? var_4 : var_8))) ? var_0 : ((var_2 ? 0 : -2)))))));
    var_16 = var_7;
    #pragma endscop
}
