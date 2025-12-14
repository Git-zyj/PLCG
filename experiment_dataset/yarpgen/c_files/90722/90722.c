/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (((((~10845) >= (!var_2))) ? (max((((-10817 ? 2147483640 : -65))), var_9)) : ((((-2009349572 ? var_6 : 2009349580))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((((6059243451480696791 ? var_5 : (((arr_2 [i_0]) ? (arr_3 [8]) : (arr_1 [i_0]))))) | (((((10845 ? -1 : var_13)) & 7387)))));
        arr_5 [i_0] = (min((2247665695003687503 || var_11), (((arr_3 [i_0]) - 1))));
    }
    #pragma endscop
}
