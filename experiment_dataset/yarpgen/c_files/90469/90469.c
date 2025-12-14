/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (var_0 > var_11);
    var_14 = 9223372036854775807;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] = (((((74 ? 246 : 192))) ? (((min((-9223372036854775807 - 1), (arr_0 [2]))) / ((67 ? 7 : -2769977377772817543)))) : (((((var_2 ? 74 : (arr_3 [0]))))))));
            var_15 = (min(((144 ? ((1376194292155380743 ? 81 : 0)) : var_5)), (arr_1 [i_0] [i_1])));
            arr_6 [i_0] [3] [8] = 1376194292155380764;
            arr_7 [1] [i_0] [i_1] = ((((min((~0), var_9))) ? var_4 : (-7440576043850715184 || var_2)));
        }
        arr_8 [i_0] [i_0] = (min(3222121099549322651, 3757782941));
        var_16 = (min((max((min(24576, var_10)), ((0 ? 255 : (-9223372036854775807 - 1))))), ((var_5 - ((var_6 ? var_2 : var_1))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_0] = min(var_8, ((43906 % (arr_3 [i_2]))));
                    arr_14 [i_0] [9] [i_0] [4] = -0;
                }
            }
        }
    }
    #pragma endscop
}
