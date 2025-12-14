/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((min(var_0, var_4))) ? (-1025556444 ^ 5596186641167481206) : (~1025556444))) != 127));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min((((((var_3 + (arr_0 [i_0]))) != var_2))), ((~(max((arr_1 [i_0] [i_0]), 15634876117904666844))))));
        var_11 = arr_0 [1];
        var_12 = (max((min(((max(-38, var_8))), -15811114058097852898)), 13));
    }
    var_13 = ((-(min(var_4, var_1))));

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = (((((((min((arr_4 [i_1]), var_3)) + 2147483647)) >> (var_0 - 1416060508))) < (arr_4 [i_1])));
        var_14 -= ((-((((arr_4 [12]) != (arr_4 [1]))))));
        arr_6 [2] [2] &= ((~(((arr_4 [6]) - ((var_6 ? var_2 : (arr_4 [6])))))));
        var_15 = (min((arr_4 [i_1]), 6430535798786626445));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_3] = (min((((arr_9 [i_1] [i_2] [i_3]) ? 38 : (((arr_4 [i_1]) ^ var_3)))), ((min((((var_8 && (arr_7 [i_1] [i_2])))), var_1)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_16 += (max((((((min(var_5, (arr_13 [i_4] [i_2] [i_3])))) ? -498988956 : var_1))), ((((((arr_15 [i_5] [i_5] [20] [i_3] [i_4] [i_5]) ? (arr_13 [i_1] [i_5] [i_5]) : var_7))) ^ var_5))));
                                arr_16 [i_5 + 1] [i_1] [i_3] [i_1] [i_1] = ((+((min(((((arr_8 [i_1] [i_2] [i_1]) <= (arr_4 [i_1])))), (arr_7 [i_5] [i_3]))))));
                                arr_17 [i_4] [i_1] [i_1] [i_4] [i_1] = ((var_2 >> (var_4 - 1014721817638097235)));
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = ((((max((((var_5 >= (arr_15 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3])))), ((-(arr_13 [20] [i_1] [i_3])))))) ? (((arr_12 [i_1] [i_1] [i_3] [i_3] [i_1]) ^ (min((arr_13 [i_1] [i_1] [i_1]), var_5)))) : ((((((var_3 ? var_2 : var_0))) + (min(var_2, 3)))))));
                    var_17 = (((max((max(59758, 6430535798786626445)), (((-(arr_10 [i_1] [i_1] [i_3])))))) ^ var_9));
                }
            }
        }
    }
    var_18 += var_6;
    #pragma endscop
}
