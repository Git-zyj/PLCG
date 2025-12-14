/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0 + 1] [i_0]) && var_7));
        arr_2 [i_0 + 2] [i_0] = ((32767 > (((var_6 ? (arr_0 [i_0] [i_0 - 2]) : var_8)))));
        arr_3 [i_0 - 2] [i_0 - 2] = (((arr_1 [i_0 + 2] [i_0 + 1]) && (arr_0 [i_0] [i_0 - 2])));
        var_11 = 65520;
    }
    var_12 = ((var_3 & (max((3314706725472077359 | 2561685968433059186), (3314706725472077359 & 4294934551)))));
    var_13 = (min((max(221, var_6)), var_2));
    var_14 = ((((max((max(8878537342980570435, 3984349201)), (!32751)))) || (((var_7 ? (!65523) : var_2)))));
    #pragma endscop
}
