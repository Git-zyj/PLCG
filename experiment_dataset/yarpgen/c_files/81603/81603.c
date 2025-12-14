/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((!(((((-10079 ? var_8 : (-9223372036854775807 - 1)))) && (var_6 | 2016110202644922151)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            var_12 = ((((max(var_8, (-9223372036854775807 - 1))))) ? ((max(-1602, var_1))) : (var_1 - -32444));
                            var_13 *= ((((((9223372036854775807 ? var_10 : -10079)) * var_10)) >= ((9223372036854775805 ? var_0 : 0))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_1] [i_1 - 1] [i_5] [i_3] [i_5] [i_5] [i_0] &= 9223372036854775805;
                            arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] = (((((((1 ? 23997 : -10079)) <= (var_2 < 32435)))) != ((((min(var_6, 1))) ? ((min(0, 32443))) : -var_0))));
                        }
                        var_14 *= (((~10078) ? ((((9223372036854775805 ? 1060 : 0)))) : ((~(32767 | var_1)))));
                    }
                }
            }
        }
        var_15 = (((((((var_0 && (arr_6 [i_0] [i_0] [i_0 - 1] [i_0]))) ? ((-32444 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_0 + 2] [i_0] [i_0] [i_0 - 1]))) : var_3))) ? ((-(arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : ((((9223372036854775807 >> 1) && (((222928151461365926 ? 0 : 5101642389231538873))))))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_20 [1] = ((0 ? 31688 : -9223372036854775806));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_16 = -11862;
                    var_17 = (min(var_17, (((max(32443, ((var_4 ? 5459975031789248061 : 9174407839103950370)))) < 10078))));
                }
            }
        }
    }
    var_18 = ((var_2 != ((var_7 ? ((var_9 ? 3341516062898019037 : 32767)) : var_1))));
    var_19 = (min((((min(var_7, var_10)) ? (9223372036854775805 ^ 1) : var_7)), var_1));

    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_20 = (min(var_20, var_6));
        var_21 = ((max(var_8, -32467)));
        arr_28 [i_9] = (min((min(var_10, var_4)), var_2));
    }
    #pragma endscop
}
