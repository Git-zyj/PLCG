/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((((min(var_10, 19))) ? ((var_10 >> (236 - 230))) : var_2))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (((max(824939010, 30206)) < (((((arr_2 [i_2] [i_3 + 2]) < 1591845112))))));
                        var_17 += (((((217 != ((0 ? 39 : 3470028286))))) <= ((min((arr_3 [i_3 + 1] [i_3]), (arr_3 [i_3 - 1] [i_3 - 1]))))));
                        var_18 = (max(66, 4));
                        arr_9 [i_0] [i_0] [i_0] [i_3] = ((25076 ? ((~(arr_6 [i_3 - 2] [i_3 + 1] [i_3 + 2] [i_3] [i_3 - 2] [i_3]))) : (max((arr_0 [i_0]), ((max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_3]), 17)))))));
                        var_19 = (((arr_8 [i_0] [i_1] [i_3 - 3] [i_2] [i_0] [i_0]) - (min(18446744073709551615, (arr_7 [i_0] [i_1] [i_3 - 3] [i_3 - 2] [i_0])))));
                    }
                }
            }
        }
        var_20 *= (2586778905 - 224);
        var_21 = ((0 >> ((((var_7 - (((191 - (arr_2 [i_0] [i_0])))))) - 2666499360))));
        arr_10 [i_0] = var_5;
        var_22 ^= (((((((((arr_5 [i_0] [i_0]) ^ var_14))) ? (max(2742243100, 3470028293)) : (~-466680701)))) ? (((~(5 | 65521)))) : ((~((10785461241712507025 ? 1708188391 : -2))))));
    }
    var_23 += ((469762048 || ((((var_3 && 29) | (var_12 - 0))))));
    var_24 = 3260089440303366523;
    #pragma endscop
}
