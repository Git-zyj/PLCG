/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((201326592 ? var_1 : var_12));
    var_15 -= (((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (1370743147 - 1370743147))) >= -var_7)) ? (min((~var_5), ((2147483647 ? 4294967295 : var_11)))) : ((~(max(27, (-2147483647 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 &= (((max((((arr_3 [i_1]) ? var_10 : (arr_7 [3] [i_1] [i_2]))), (arr_7 [i_0 + 1] [i_1] [i_1]))) != ((min((arr_3 [i_1 + 1]), (min(52, var_11)))))));
                    var_17 = ((var_1 ? ((((arr_2 [i_0]) > 956727636))) : -2147483647));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = (((-76 ^ 956727636) > (-2147483647 - 1)));
                }
            }
        }
    }
    var_18 = (max(var_1, ((((min(var_3, 4294967278))) ? (var_4 != var_6) : var_1))));
    #pragma endscop
}
