/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = ((10937163500082468943 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_12 = (min(var_12, (((((((1252433640 * 10145797694756202216) / (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? 6485996786780315104 : var_4)) : ((min(var_2, 34))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = (((arr_3 [i_1]) ? (((1252433641 ? var_4 : var_0))) : var_3));
        arr_5 [i_1] [i_1] = -610521155;
    }
    var_14 = (max((max(0, 3684284975)), var_3));
    #pragma endscop
}
