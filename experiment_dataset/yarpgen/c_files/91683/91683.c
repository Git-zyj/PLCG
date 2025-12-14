/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] = (((max((((arr_2 [i_0] [i_0]) <= 1358607391)), (min((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_0]))))) ? (((((-1358607392 ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))))) : (((arr_1 [i_0] [i_0]) ? (((72 ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) : (((arr_1 [i_0] [i_1]) ? 93 : (arr_0 [i_0])))))));
            arr_6 [i_0] = min((((arr_0 [i_1]) ? (arr_3 [i_0] [i_0]) : (((!(arr_2 [i_0] [i_0])))))), (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_1]) : 1)))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_20 = ((((((arr_8 [i_2]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_2])))) ? (min(((1524758185 ? (arr_3 [i_0] [i_2]) : (arr_4 [i_0] [i_2]))), (((arr_8 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_8 [i_0]))))) : (min(0, ((((arr_4 [i_0] [i_0]) > (arr_2 [i_0] [i_0]))))))));
            var_21 = ((-((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (max((arr_3 [i_2] [i_2]), (arr_4 [i_0] [i_2]))) : ((0 + (arr_8 [i_0])))))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_12 [i_0] [i_0] [i_0] = (-((1 ? (arr_11 [i_0] [i_3]) : (arr_10 [i_3]))));
            var_22 ^= (min(((((((arr_1 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_0 [i_0]))) <= (max((arr_1 [i_3] [i_3]), (arr_0 [i_0])))))), ((((((arr_7 [i_0]) ? 162 : (arr_0 [i_3])))) ? (((((arr_0 [i_0]) + 9223372036854775807)) >> (arr_8 [i_3]))) : ((((arr_10 [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))))))));
            var_23 += (((min((arr_1 [i_0] [i_0]), (((arr_3 [i_0] [i_0]) + (arr_3 [i_0] [i_3]))))) != (arr_3 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_3] [i_3] = -5487;
                        var_24 = (min(var_24, (arr_0 [i_5])));
                        arr_18 [i_3] [i_3] [i_0] |= (min((((arr_3 [i_5 + 3] [i_5 - 1]) ? (((224 ? (-127 - 1) : (arr_9 [i_4] [i_4] [i_4])))) : (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_5]) : (arr_2 [i_4] [i_3]))))), 31561));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_25 = (((((((-1 + 2147483647) >> (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) + 61)))))) ? ((((((arr_4 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))) - (arr_7 [i_6]))) : ((max((((arr_14 [i_0] [i_0]) ? (arr_14 [i_0] [i_0]) : -1)), (((arr_2 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_13 [i_0] [i_0]))))))));
            arr_21 [i_0] [i_0] [i_0] |= (((((((((arr_11 [i_6] [i_6]) <= (arr_8 [i_0])))) % ((max(511, (arr_9 [i_0] [i_0] [i_0]))))))) ? ((~((max((arr_10 [i_0]), 38))))) : (((((arr_8 [i_0]) ? (arr_13 [i_6] [i_0]) : (arr_9 [i_0] [i_6] [i_0])))))));
        }
        arr_22 [i_0] = (min((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < -78))));
    }
    var_26 = ((var_8 ? (((((var_16 >> (var_15 - 2116718563)))) ? ((min(var_2, var_17))) : var_0)) : var_16));
    #pragma endscop
}
