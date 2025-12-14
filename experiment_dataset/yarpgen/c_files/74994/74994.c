/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [8] [i_4] &= (((((((max(var_4, -1881526289))) ? ((max(1881526288, 1881526288))) : (arr_4 [i_4] [i_0] [i_1 + 3])))) + ((12096175096824304140 ^ (((-1881526289 ? 1881526288 : (arr_3 [i_2]))))))));
                                arr_16 [6] [i_1 - 2] [i_2] [i_3 - 2] [i_1] = 1881526288;
                            }
                        }
                    }
                    var_11 = (((((1881526286 ? 1881526286 : ((-98 ? 1881526288 : 4503049871556608))))) ? (((2814649499 / (((1881526288 ? -1881526287 : var_10)))))) : (max(17287226616925041257, -11451099))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_12 = (((arr_19 [i_5] [i_5]) ? -36 : (((arr_17 [3]) ? (arr_20 [i_5]) : var_3))));
        arr_21 [12] = (-1881526296 ? (arr_19 [i_5] [i_5]) : (var_9 == 36));
        var_13 += ((-37 ? -39 : 17287226616925041257));
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        var_14 = (max(var_14, (((((((-11451106 ? 1847605146 : 1159517456784510358)) > (((1881526289 ? var_9 : var_2))))) && 4294967295)))));
        arr_25 [i_6] [i_6] = ((((min(var_9, ((max((arr_18 [i_6]), 19)))))) < 1125882726973440));
    }
    #pragma endscop
}
