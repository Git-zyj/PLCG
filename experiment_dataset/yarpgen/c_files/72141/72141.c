/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((((max(14391, 4737))) ? ((var_9 ? 0 : var_0)) : (65535 <= 1))))));
    var_14 = (max(((var_3 ? var_5 : -var_7)), var_12));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0 - 1] = (max(((24 ? -1 : var_6)), (((var_5 < (arr_2 [i_0 + 1] [i_0 + 1]))))));
        arr_5 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        arr_6 [i_0 + 1] [i_0] = (max((((-(!-1183109924999975434)))), 18446744073709551612));
        arr_7 [i_0] = (min((var_4 + var_7), 0));
    }
    #pragma endscop
}
