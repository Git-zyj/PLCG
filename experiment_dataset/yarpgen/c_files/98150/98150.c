/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((13386 <= 10114) ? ((248 ? 91 : 12742)) : (((var_4 <= (arr_0 [i_0]))))));
        arr_3 [i_0] = ((var_4 ? ((var_9 ? (arr_0 [11]) : var_5)) : ((var_6 / (arr_0 [i_0])))));
    }
    var_12 = (1155086367 + 25589);
    #pragma endscop
}
