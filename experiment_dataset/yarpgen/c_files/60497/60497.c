/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(var_8, var_17));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [14]);
        var_19 = ((12465308081648372669 & (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = min((((arr_4 [i_1] [i_1]) ? (arr_0 [19]) : (arr_3 [i_1] [i_1]))), ((((arr_4 [i_1] [i_1]) <= (min(9223372036854775793, (arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] = ((((max((arr_1 [i_1] [i_1]), (((arr_4 [i_1] [i_1]) ? var_3 : (arr_4 [i_1] [i_1])))))) ? var_4 : (max((var_17 <= 2296338333), (max((arr_3 [i_1] [i_1]), (arr_1 [i_1] [i_1])))))));
    }
    var_21 += var_8;
    var_22 = (!161849758);
    #pragma endscop
}
