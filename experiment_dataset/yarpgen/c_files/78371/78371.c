/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [0] [2] = (((arr_0 [i_0] [i_0]) || (arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((arr_0 [1] [i_0]) < (arr_0 [15] [1]));
        var_17 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [7] [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (max(var_18, (((((((min((arr_0 [0] [11]), (arr_0 [i_1] [4]))))) ^ (min((arr_6 [i_1]), (arr_5 [0])))))))));
        var_19 = ((((min((arr_1 [i_1] [6]), (arr_1 [1] [i_1])))) < (!259351094)));
        var_20 = ((-(((!(arr_5 [8]))))));
    }
    var_21 = ((1 < (((var_1 || var_5) ? (max(var_6, var_9)) : var_10))));
    var_22 = (max(((var_11 ^ (var_8 & var_15))), var_4));
    var_23 = (max(var_23, ((max(((max(-111, (min(303435857, -2114153177))))), (((((0 ? 44 : 60224))) & var_16)))))));
    var_24 = ((((((((var_1 ? var_13 : var_11))) ? (var_3 > var_7) : var_6))) || (((var_0 & (var_16 - var_8))))));
    #pragma endscop
}
