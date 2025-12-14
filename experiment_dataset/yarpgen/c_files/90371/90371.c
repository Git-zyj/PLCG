/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_8 <= var_0);
    var_11 = ((((((((1 ? var_1 : var_8))) ? (var_1 < -74) : var_5))) != ((0 << (var_6 + 6217583993111116581)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = ((arr_1 [i_0]) / (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_13 -= -1;
        var_14 = ((arr_2 [i_0]) >= ((((min(3913690337, (arr_0 [i_0] [i_0]))) >= ((((arr_1 [i_0]) ? 1 : (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_15 &= -35;
        var_16 = (arr_4 [i_1]);
        var_17 = 1;
        arr_6 [i_1] = (((arr_0 [i_1] [i_1]) ? (((!(arr_2 [i_1])))) : ((((min(1, (arr_0 [i_1] [i_1])))) ? (((!(arr_1 [i_1])))) : (((1 >= (arr_0 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
