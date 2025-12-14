/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((var_4 >= var_5), var_9));
    var_15 = ((~(min(-var_2, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_16 = (min((arr_0 [i_0]), ((((((arr_1 [i_0]) - var_0))) ? ((min(2778688206, (arr_4 [i_0])))) : (((arr_4 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : var_6))))));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1 + 1] [i_2 + 1] [1] [i_2 - 1] = var_10;
                        arr_9 [i_0] [i_0] = ((1910751829 * (min(((min(var_10, var_5))), (arr_0 [i_2])))));
                        var_17 = (min((((((min(var_0, 1))) ? (((arr_5 [9] [i_1] [i_2] [i_3 - 2]) - 84)) : (var_8 != 4294967274)))), (((arr_3 [i_2] [i_0]) % (arr_3 [i_3 - 1] [5])))));
                        var_18 = var_5;
                        var_19 = (((((arr_3 [i_0] [8]) + (((!(arr_1 [i_0])))))) == 171));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        var_20 += ((((arr_5 [7] [i_1 + 3] [3] [i_1]) - (arr_10 [i_2] [i_2]))));
                        arr_14 [i_4 + 1] [i_4] [i_4] [i_0] = (arr_3 [0] [i_1]);
                        arr_15 [i_4] [i_1] [i_2 - 1] [i_2] [i_2] [i_1] = (var_0 - var_1);
                    }
                    var_21 = ((var_1 ? (((((arr_7 [i_0] [i_1] [i_2] [i_1]) ^ -5674)) ^ (arr_13 [i_0] [3]))) : ((min(49634, 4294967274)))));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 ^= (((((134217724 ? 0 : -9223372036854775793))) ? 22 : var_3));
                        var_23 = (min(((min(1, (arr_3 [i_1 + 2] [i_2 + 1])))), (min((arr_10 [i_1] [5]), -var_3))));
                        var_24 ^= (+((1 ? (~972630923) : 121)));
                        arr_18 [i_2] [i_1] [i_2] [i_1] = (arr_17 [6] [i_1 + 2] [i_2] [i_2] [i_2 - 2] [i_2 - 2]);
                    }
                }
                var_25 ^= (arr_6 [i_0] [i_0] [i_1 + 3] [i_1]);

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    var_26 ^= (((min(6866038675045807882, 6866038675045807868)) * ((((!(arr_1 [i_0])))))));
                    var_27 += ((min((((arr_5 [i_6] [i_0] [i_0] [i_0]) ? (arr_6 [i_1] [i_1] [i_1 + 1] [i_1]) : (arr_16 [i_0] [i_1 - 1] [i_1 - 1]))), (1 ^ 3904471057234561858))));
                }
                var_28 = ((-(min((32736 * var_3), (arr_2 [i_0] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
