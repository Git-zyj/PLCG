/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_5 <= var_2) < (var_7 + 117))) ? (((var_0 > (1 == var_0)))) : ((((((-54 ? -1 : var_5))) && (((278166416 ? 192 : 192))))))));
    var_11 = (((((((var_3 ? var_7 : var_9)) >> (var_6 - 455352880)))) || var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(18446744073709551599, -2147483639));
                arr_5 [i_0] [i_1] = -1;
                var_13 = (min(var_13, ((((((((arr_1 [i_1] [i_0]) - 7034613979147510003)) - 0))) && ((((max(192, -179800782)) - -69)))))));
                arr_6 [i_1] [i_1] = 14662588183617789646;
                var_14 |= ((((((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_0]) : var_4))) < (max((192 - 1217976693), (max(1, 194921146534085799))))));
            }
        }
    }
    #pragma endscop
}
