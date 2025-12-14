/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 -= ((min(((max(-32752, 32752)), 18446744073709551615))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = ((((((((arr_8 [i_4]) > 2127778952)) ? (~var_0) : var_3))) ? ((((-32752 >= (~0))))) : ((var_5 ? (arr_0 [i_0 + 2] [i_1 + 1]) : var_4))));
                                var_13 = ((-32752 ? (max((!var_8), ((0 ? 1444 : 32739)))) : ((0 ? 75 : 25765))));
                                var_14 = (min(((((-(arr_5 [i_0] [i_1 - 3]))))), 32751));
                                var_15 &= 75;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 *= (((arr_1 [i_1] [i_1]) ? ((~(1650164425 & -121))) : ((min(25765, 588994277)))));
                                var_17 = ((-((-((-1 ? -70 : (arr_5 [1] [13])))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_18 = ((((((981400787 && (arr_6 [i_7] [i_7]))))) != (((arr_16 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7]) ? (~532676608) : (((var_5 % (arr_2 [i_7]))))))));
        var_19 = (max(116, (max((arr_18 [i_7 + 1]), -588994277))));
    }
    var_20 = (((((~(min(var_3, var_8))))) >= (min(370035978, (((252 ? var_0 : var_10)))))));
    #pragma endscop
}
