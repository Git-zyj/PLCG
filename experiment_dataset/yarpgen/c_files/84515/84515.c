/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_10 += (~3331863721385445672);
            var_11 ^= ((2305843009213693952 ? ((((4658 ? 1 : 64695)))) : 31));
            var_12 = (((arr_3 [i_1 - 1]) ? ((var_1 ? (max(var_2, (arr_2 [i_1] [i_1]))) : var_4)) : ((max((var_4 >= 6737), (((arr_2 [i_1] [i_1]) | (arr_4 [i_0] [i_1 + 1] [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_13 ^= (!64670);
            var_14 = (min(-4658, (max((arr_4 [i_2] [i_2] [i_0]), var_0))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_15 [i_0] [i_0] [i_3] [i_4] = (~7071);
                arr_16 [i_0] [i_3] [i_4] = ((((((((var_3 ? 1 : 0))) ? (arr_10 [1]) : (arr_3 [i_3 - 1])))) ? (max((max(1, var_0)), (183 - 0))) : ((((arr_6 [i_3] [8]) ? (arr_10 [i_3 - 1]) : -4650)))));
            }
            arr_17 [i_0] [i_0] = (min(((((~(arr_11 [i_0] [i_0] [i_0]))) >> (((arr_6 [1] [i_0]) - 43)))), ((((arr_0 [i_0] [i_3 - 1]) > (arr_10 [9]))))));
            var_15 = (min(var_15, ((((((~1792) / (max(1, 3441031035773155778)))) != (arr_1 [i_3 - 1] [i_3]))))));
            var_16 = (1 * 0);
        }
        arr_18 [i_0] [i_0] = ((var_7 >> (arr_4 [i_0] [9] [9])));
    }
    var_17 = ((~(((((var_0 ? 18158513697557839872 : var_6))) ? 1 : ((9223372036854775807 ? 0 : 255))))));
    #pragma endscop
}
