/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max((max(2305843009213693951, var_9)), (var_2 * var_6))), (((var_14 ? ((max(var_10, var_1))) : var_7)))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(10612254243103233517, (max(10612254243103233531, 50514))));
        var_17 = ((((((((arr_1 [10]) || (arr_1 [i_0 + 1])))) == (arr_0 [i_0 - 4]))) ? (max((arr_0 [i_0 + 1]), (arr_1 [i_0 - 3]))) : ((((arr_0 [i_0 - 3]) == (arr_0 [i_0 - 1]))))));
        var_18 = (((((((arr_1 [i_0 - 2]) != 10612254243103233510)))) * var_13));
        var_19 = ((-(((~var_14) ? (arr_0 [4]) : (var_13 || 155)))));
    }
    var_20 = ((75 ? 14 : 10612254243103233526));
    var_21 = 1;
    #pragma endscop
}
