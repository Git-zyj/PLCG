/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!15) >= (((min(var_0, var_7))))));
    var_14 ^= (~(((min(11002128160020841002, 12984668228477669091)) >> (((5462075845231882524 ^ 4285370489954658151) - 8121539115687204412)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = (min((max((((arr_0 [i_0]) % (arr_0 [i_0]))), ((min(var_12, (arr_0 [i_0])))))), ((140735340871680 ? var_11 : var_3))));
        var_16 = (min(12984668228477669091, (~var_6)));
        arr_2 [i_0] = ((((min(-56, 1))) ? (((((12181135813075530732 ? 0 : 32767))) ? var_7 : (((-60 ? (arr_0 [i_0]) : -6))))) : (((((((arr_1 [i_0]) > -60)))) + (((arr_1 [i_0]) ? 1325570431 : (-32767 - 1)))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((~15271069920860968670) || (((3179 + (-2147483647 - 1))))));
        arr_8 [i_1] = (!(((((max(-52, 2147483627))) ? ((var_6 << (((arr_4 [i_1]) - 237)))) : (arr_0 [i_1])))));
        var_17 += ((((((max(var_3, (arr_4 [i_1]))) << (-17267 + 17267)))) ? (((((5462075845231882524 ? var_7 : var_5)) >> (((max(var_6, (arr_5 [i_1]))) - 1237038284))))) : (((~(arr_0 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (((max((!2147483627), -32765)) << ((((~(max(-60, var_8)))) + 658508641))));
        var_18 = (min((((!((max(var_0, var_9)))))), (((-52 / 4283869204) ? (((((arr_10 [i_2] [i_2]) >= (arr_11 [2] [i_2]))))) : (226 ^ 2659265716)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_3] = ((!(((2736908398 ? (var_2 == var_3) : 0)))));
                        var_19 -= (max((min((-2147483627 < 12720586859245560737), (max(-23, var_9)))), (11703 > 36400)));
                        arr_22 [i_2] [0] [i_4] [i_4] [i_5 + 1] &= (max(((max(-84, 3734007535935473788))), (min((min(1, (arr_19 [i_2] [i_3] [i_4] [i_2]))), ((max((arr_13 [i_2] [2] [i_2]), 161)))))));
                    }
                }
            }
        }
    }
    var_20 = ((-(((var_2 ^ var_3) ? (max(var_3, var_7)) : -var_10))));
    #pragma endscop
}
