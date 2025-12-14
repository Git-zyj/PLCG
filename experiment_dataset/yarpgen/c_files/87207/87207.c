/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(-922778233948863099, -922778233948863099))) ? ((((var_7 || (!var_1))))) : var_1));
    var_12 = (min(var_12, (((var_6 ? var_4 : (((!((max(922778233948863106, 922778233948863095)))))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 -= ((((max(((var_8 ? var_2 : 12)), -922778233948863099))) ? ((((922778233948863099 ? var_10 : (arr_1 [i_0] [i_0]))))) : ((((((arr_0 [i_0]) != (arr_0 [i_0])))) % (((arr_1 [i_0] [i_0]) ? (arr_0 [8]) : (arr_1 [i_0] [i_0])))))));
        var_14 = (((((arr_0 [i_0]) != var_3)) ? ((-3924 | (arr_1 [i_0] [i_0]))) : var_7));
        arr_2 [i_0] = (arr_1 [2] [2]);
    }
    var_15 &= 922778233948863106;
    #pragma endscop
}
