/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (((((485501020 >> ((((22028 ? 10601787721205759580 : var_9)) - 10601787721205759552))))) - ((((min((arr_0 [i_0]), var_11))) ? ((1592037792336209542 % (arr_2 [i_0] [i_0]))) : (((-335670090 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = (((((arr_2 [i_0] [i_0]) ? ((7844956352503792040 ? 8191 : (arr_1 [i_0]))) : var_12)) >= ((((((((arr_1 [1]) * 32470))) > (var_9 * var_2)))))));
        var_17 = (min(((((arr_0 [i_0]) & 7168))), (((arr_0 [i_0]) ? var_7 : (arr_2 [i_0] [i_0])))));
        var_18 = ((((1910561588 ? 10601787721205759580 : 16854706281373342073)) * (((((((arr_2 [i_0] [i_0]) - 0))) ? ((8 ? 1 : 2147483647)) : ((min(226, var_7))))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [16] = (((((var_4 ? var_14 : 48))) ? ((var_2 ? (arr_6 [i_1 + 1]) : (-2147483647 - 1))) : ((max(1, 2852)))));
        arr_8 [i_1] [i_1] |= ((((((arr_4 [i_1] [i_1 + 2]) ? var_12 : 0))) ? (var_9 | var_4) : (var_4 ^ 1)));
        var_19 = (min(var_19, ((((11787667235819991646 ^ -1343674648) ? 0 : (((-171030929 + 2147483647) >> 0)))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_20 = (max(var_20, (((((var_15 ? (min(var_13, 0)) : (arr_12 [i_2] [i_2] [i_3 + 1]))) > ((((((var_10 ? 0 : 0))) < (((arr_11 [i_3] [i_2]) ? var_4 : 239113989205288190))))))))));
                var_21 = (((((var_2 ? (1152919305583591424 < var_4) : (13146576092678298160 && var_10)))) ? (((((arr_13 [i_3 + 2] [i_3 + 2]) && (arr_13 [i_3 + 2] [i_3 + 2]))))) : (((max(var_9, var_1)) * 1))));
                var_22 = ((16188400523509440501 ? -1 : 2110174857));
            }
        }
    }
    #pragma endscop
}
