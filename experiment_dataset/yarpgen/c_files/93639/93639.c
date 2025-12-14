/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((~var_5), var_15));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((min(((max(-23394, 11317))), ((266712088 ? 262143 : 210)))), (max((arr_1 [1] [i_0]), (arr_1 [1] [1]))));
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? 65535 : (max((((!(arr_0 [i_0])))), (min((arr_2 [i_0] [i_0]), -266712100))))));
        arr_5 [i_0] = ((~(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_17 = ((!(!266712116)));
            var_18 = 1;
            var_19 = (max(var_19, ((((((-(arr_2 [i_1] [i_2])))) ? ((-(arr_0 [i_1]))) : (((!((max(1, 266712099)))))))))));
            var_20 = ((((-(max((arr_10 [8] [i_2] [8]), (arr_8 [i_2] [i_2]))))) < ((548932044 ? (-127 - 1) : (arr_11 [2] [i_2 - 2] [i_2 - 1])))));
        }
        for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] = ((((arr_6 [i_3 + 1]) ? -2873808720613257137 : (arr_6 [i_3 + 1]))));
            arr_16 [i_1] [i_3 - 1] = (!((max((arr_8 [i_3 - 1] [i_3 + 1]), (arr_9 [i_3 - 2] [i_3 + 1] [i_3 - 2])))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_19 [i_1] [1] [i_4] = ((!(arr_18 [i_4 - 2] [i_4 + 1] [i_4 - 2])));
            var_21 = (arr_17 [i_4 - 2] [i_4 - 2]);
        }
        var_22 = ((!((max(-266712088, ((var_6 ? (arr_0 [i_1]) : 388565088)))))));
    }
    var_23 = (((((max(var_10, 11493649016481158282))))) * (16383 / var_8));
    #pragma endscop
}
