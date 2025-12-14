/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 &= ((((51869 | 4294967295) ? (arr_4 [i_0] [i_1]) : (((arr_6 [i_1]) ? (arr_0 [i_1]) : 15)))) | ((((var_11 && (arr_0 [i_1]))) ? (var_5 < 7) : (-9223372036854775807 - 1))));
                arr_7 [i_0] [i_0] = (((arr_5 [i_1]) ? (((((65521 ? (arr_1 [i_0]) : var_0))) ? 61736 : (787712681 | var_1))) : (((((var_5 ? (arr_3 [i_0 + 2] [i_0] [i_1]) : 65532)))))));
                arr_8 [i_1] [i_0] [i_0] = ((((((-3668041885754587699 ? 3589633579 : (arr_1 [i_0]))))) ? (((((var_8 ? -709180986833285535 : -1))))) : ((var_3 ? (((32767 ? 115 : 65521))) : (((arr_6 [i_0]) ? (arr_6 [i_0]) : var_11))))));
            }
        }
    }
    var_15 = ((((var_4 > 15) ? 65535 : var_5)));
    var_16 = (3668041885754587699 ^ var_11);
    #pragma endscop
}
