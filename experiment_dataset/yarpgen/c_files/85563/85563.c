/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = ((((14773 ^ (arr_2 [i_0]))) * (((((arr_2 [i_0]) == (arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_12 = (((arr_6 [i_0] [i_1 + 1] [i_1] [9]) || 9223372036854775807));
                        var_13 = ((((((~(arr_10 [i_0] [i_1] [i_1] [i_1] [i_0]))) + 2147483647)) << (((max(((min((arr_11 [i_0]), (arr_9 [i_0] [i_0] [i_1] [i_2] [1])))), (min(-5124126114684929536, 243)))) - 61))));
                        arr_12 [i_0] [i_1] [8] |= (((max((arr_9 [i_0] [i_3 - 2] [0] [i_1 - 2] [2]), (arr_2 [i_0]))) - var_2));
                        var_14 = (((max(37, -7720293310130255329)) | ((((((min((arr_1 [7]), 252))) || ((min((arr_1 [i_0]), -4058822100092413367)))))))));
                        var_15 = ((((((arr_4 [i_1 + 1] [i_1 + 2]) ? (arr_4 [i_1 + 1] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_1 + 2])))) ? -7720293310130255341 : ((((arr_4 [i_1 + 1] [i_1 + 2]) * (arr_4 [i_1 + 1] [i_1 + 2]))))));
                    }
                }
            }
        }
    }
    var_16 = ((((3959500831520675435 ? var_9 : (max(395793193, 235)))) * var_6));
    var_17 = var_7;
    #pragma endscop
}
