/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= -3583337809999518250;
        arr_5 [i_0] = ((!(arr_2 [i_0])));
        arr_6 [i_0] &= (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_7 [i_0] [i_0] = ((((((arr_2 [i_0]) / (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])));
        arr_8 [i_0] = (arr_3 [i_0]);
    }
    var_15 = ((var_8 ? (~-13) : ((((min(7586169902654021274, 1226981260)))))));
    #pragma endscop
}
