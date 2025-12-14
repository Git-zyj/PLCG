/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 += ((((min(15160673807338299982, (arr_4 [i_1] [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : (((((1 ? 0 : 0))) ? (((15754137915267845198 ? (arr_1 [i_0] [i_0]) : var_7))) : 65535))));
                arr_6 [i_0] [i_1] [i_1] = ((((((arr_4 [6] [i_0 + 2] [i_1 - 1]) ? 1235402383 : var_9))) ? ((~(arr_0 [i_0]))) : (max((((arr_2 [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_4 [i_1] [i_0] [i_0]))), (((arr_5 [1] [i_1]) ? (arr_5 [9] [i_1]) : (arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [1] [i_1] = ((4096 ? 0 : -108));
                            arr_14 [i_1] [i_1] [i_1] [i_1] = ((((min((((arr_0 [i_0]) << (var_15 + 1095877276))), (arr_12 [i_0] [i_0])))) ? (arr_4 [i_1] [i_1] [10]) : (min((((arr_11 [i_0] [i_0] [i_0] [i_3] [i_1] [i_0]) ? 0 : (arr_1 [i_2] [9]))), ((((arr_7 [11] [11] [i_3]) ? var_13 : (arr_3 [1] [1]))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_20 = (max(var_20, ((min(15754137915267845198, 0)))));
                    var_21 = (max(273804165120, ((((arr_12 [i_1 + 1] [i_1 + 1]) ? (arr_12 [i_1 - 1] [i_4]) : (arr_16 [i_1] [i_1] [2] [1]))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_21 [11] [i_1] [4] = ((((max(((62633 ? (arr_19 [i_0]) : 39)), 2134752554))) ? (min((arr_4 [i_0] [i_1] [i_5]), ((4129326233103996696 ? (arr_11 [i_0] [3] [i_0] [i_0] [5] [i_5]) : (arr_2 [i_5]))))) : (((arr_7 [i_0] [i_1 + 1] [i_5]) ? (arr_15 [i_0] [i_1] [i_1] [i_5]) : (arr_18 [i_0 - 3] [i_1] [i_1 + 1])))));
                    var_22 = (~(max((max((arr_11 [i_0] [4] [7] [i_1] [i_1] [i_0]), 69829340)), (arr_16 [i_1] [i_0 - 3] [i_5] [i_5]))));
                    arr_22 [i_1] [i_5] = (min((arr_12 [i_0] [6]), ((((((arr_18 [i_0] [i_1] [i_5]) ? 557660955 : (arr_20 [i_0] [i_1] [i_1])))) ? (arr_19 [i_0 - 2]) : (((var_16 ? (arr_2 [i_1]) : (arr_0 [i_0]))))))));
                    var_23 = (max(var_23, ((((((((min((arr_1 [i_0] [i_5]), (arr_7 [11] [0] [i_5])))) ? (arr_19 [9]) : (~24903)))) ? ((~(1235402383 ^ -397142093049633622))) : (((max((arr_12 [i_0 + 1] [i_1]), 10106)))))))));
                }
            }
        }
    }
    var_24 = (min(((((max(var_1, -557660956))) ? var_11 : var_0)), (-69829341 && 20033)));
    #pragma endscop
}
