/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_18, var_9));
    var_20 = (min(((3905650429 ? 1 : 210)), var_14));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 47987;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
            var_21 *= (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])));
        }
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_2] = ((var_4 ? ((max((((-127 - 1) ? 5 : 253)), ((~(arr_1 [i_0])))))) : (min(var_7, (arr_4 [i_0])))));
            var_22 += max(((min((arr_6 [i_2 - 4] [i_2 - 3] [i_2 - 2]), (arr_6 [i_2 + 2] [i_2 - 1] [i_2 - 2])))), (((arr_7 [i_2 + 1] [i_2 + 2]) ? (arr_3 [i_2 - 4] [i_2 - 2] [i_2 - 2]) : (arr_6 [i_2 - 4] [i_2 + 2] [i_2 - 3]))));
            arr_9 [i_2] [i_2] = (((((arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 2]) * ((((!(arr_6 [i_0] [i_2] [i_2 - 1]))))))) != ((0 ? (arr_3 [i_2 - 3] [i_2 - 3] [i_2 + 2]) : 2655706214))));
        }
    }
    #pragma endscop
}
