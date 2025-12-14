/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (max(40914, (max(-2023393678, (arr_2 [i_0 - 3] [i_1])))));
                    var_21 = (((40914 * var_16) / (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                }
            }
        }
        var_22 += (max(((-114 ? 60427 : 16262)), ((~((~(arr_1 [i_0] [i_0])))))));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_23 += (((((24622 / (arr_6 [i_3 + 2])))) - var_12));
        var_24 = (min((((+((min((arr_6 [i_3]), (arr_6 [i_3]))))))), (((arr_7 [i_3] [i_3]) ^ var_13))));
        arr_8 [2] = (max(((min((max(40914, (arr_6 [i_3]))), var_4))), (((((126 ? -2023393663 : (arr_6 [i_3])))) & (max((arr_7 [i_3] [i_3]), (arr_6 [i_3])))))));
        arr_9 [i_3] |= var_19;
        var_25 = (max((arr_6 [i_3 - 3]), (min(((min(var_6, -114))), var_18))));
    }
    var_26 = ((27771 ? ((37763 ? (5108 + var_17) : (((2023393663 >> (var_5 + 415890642)))))) : var_18));
    #pragma endscop
}
