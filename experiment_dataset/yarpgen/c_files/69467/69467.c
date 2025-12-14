/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_1 [i_0]) << (((arr_1 [i_0]) - 34))))));
        var_19 = (((((arr_1 [i_0]) > (arr_0 [i_0]))) ? (((arr_1 [i_0]) * (arr_0 [i_0]))) : (((arr_0 [i_0]) - (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = ((211 ? 12 : 1));
        arr_7 [i_1] = (i_1 % 2 == zero) ? ((((((arr_4 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) >> (((((arr_3 [i_1] [i_1]) * (arr_5 [i_1]))) - 2159118234))))) : ((((((((arr_4 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) + 9223372036854775807)) >> (((((((arr_3 [i_1] [i_1]) * (arr_5 [i_1]))) - 2159118234)) - 1725503356)))));
        var_20 -= ((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))) >> (((arr_3 [i_1] [18]) - 37928)));
    }
    var_21 = (min(var_21, (((((var_10 | (var_7 >= var_5))) < (((45542 % 213) ? (var_0 != var_9) : (155 != 47))))))));
    #pragma endscop
}
