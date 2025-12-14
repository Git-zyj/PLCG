/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] = ((min(((var_2 ? (arr_1 [i_0]) : (arr_3 [i_0 - 1] [10]))), var_0)));
                var_13 = (min(1, ((685962704 ? 7053125001952778138 : -9815018428639451739))));
                var_14 -= (((((max(var_3, var_9)))) == (min((arr_4 [i_0] [i_0 - 1]), (arr_1 [i_0 - 1])))));
            }
        }
    }
    var_15 = (((var_8 - ((65535 ? 15 : 74)))) - (min((((-37 + 2147483647) >> (8631725645070099882 - 8631725645070099877))), (((-1014447800 + 2147483647) << (1 - 1))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_3] [3] [3] [i_3] [i_2] = ((~(var_2 < 250)));
                            arr_17 [i_2] [i_5] [i_3] = (((((arr_0 [i_3] [i_5]) * ((max((arr_1 [i_3 - 1]), var_9)))))) ? (max((arr_4 [i_4] [i_4]), var_10)) : 1433200054);
                            var_16 = ((((var_5 ? (((arr_1 [6]) ? var_0 : (arr_13 [i_3] [i_4] [i_3] [1]))) : (((max(var_8, var_2)))))) > ((((((max(3346587783, (arr_8 [i_3 + 1])))) && (arr_3 [i_2] [i_2])))))));
                            var_17 &= ((((((-(((arr_11 [i_2] [1] [4]) ? 64512 : -1433200055)))) + 2147483647)) << (var_12 - 596625342)));
                        }
                    }
                }
                var_18 &= (~-1433200055);
            }
        }
    }
    var_19 = 1433200048;
    #pragma endscop
}
