/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (min((((((arr_5 [i_0 - 1]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1]))))), ((0 ? 2044 : (max((arr_0 [i_0 - 1] [i_0 - 1]), 0))))));
            arr_7 [i_0] [i_1] = ((((min((arr_3 [i_0 + 1] [i_1]), (((arr_4 [i_0 + 1] [i_1] [i_0]) ? 262136 : -6))))) ? ((((arr_2 [i_0 - 1]) * (((!(arr_3 [i_0] [i_1]))))))) : ((65507 ? 504 : 3))));
            var_12 = (max(var_12, ((max((!262136), (((~(arr_0 [i_1] [i_1])))))))));
            var_13 = ((((0 - (arr_0 [i_0] [i_1])))));
        }
        arr_8 [i_0] = (max((arr_4 [i_0] [i_0] [i_0]), 2016));
        arr_9 [i_0] = ((244 ? ((~(((arr_0 [i_0] [i_0]) & (arr_4 [i_0] [i_0] [i_0]))))) : ((((!(!12)))))));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_14 += ((!(arr_10 [i_2])));
        var_15 = (((((17 ? 247 : 12))) ? (min(((min((arr_11 [i_2 - 2]), (arr_1 [i_2])))), (max(4294967283, 112)))) : 28));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_15 [i_2] [i_2] = 32740;
            arr_16 [i_2] [i_2] [i_2] = (((-(arr_3 [i_2] [i_2]))));
        }
        var_16 = ((~((4294966792 ? (-32767 - 1) : (-127 - 1)))));
        var_17 = (((((-((~(arr_13 [i_2])))))) ? ((max(29, (arr_12 [i_2 - 2] [i_2 - 2])))) : (arr_13 [i_2 - 1])));
    }
    var_18 = var_5;
    var_19 *= (var_8 - var_1);
    #pragma endscop
}
