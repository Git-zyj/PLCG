/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~18060611431047540619)));
    var_11 |= (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = var_4;
                    var_13 = ((!(((var_6 << (var_4 + 5230661084001585900))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_12 [i_0] [i_3] [7] = (min((arr_7 [i_0] [i_3]), (338829974 / 47)));
                    var_14 -= ((((-9223372036854775807 - 1) | 208)));
                }
                var_15 = 899330400;
            }
        }
    }
    var_16 = ((var_4 ? (((!167) ? var_6 : (max(var_3, var_0)))) : ((((var_5 > (var_3 & 1)))))));

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_17 = ((~(((145 >= 2955820622) | (arr_13 [i_4 + 3] [i_4 + 2])))));
        var_18 = (max(var_18, (((154 != 12559) ? ((((arr_1 [i_4 + 1]) ? 1973869840 : (arr_5 [i_4 + 1])))) : (((var_7 <= 15117) - (arr_0 [i_4 - 1])))))));
    }
    #pragma endscop
}
