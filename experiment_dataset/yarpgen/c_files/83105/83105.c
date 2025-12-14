/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_5 ? ((max(var_5, var_2))) : (var_2 < var_9))), (min(((-123 ? var_0 : 58681)), ((var_6 ? var_11 : 58681))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, (((!(((((((arr_1 [4]) + var_0))) ? (var_8 / 1341981741) : (((var_14 ? var_13 : var_6)))))))))));
        var_17 &= ((min(-104, ((var_14 ? -21 : 6854)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 *= ((((max(var_5, (var_12 * -8)))) ? ((max(-1560992298, var_8))) : (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        var_19 += (((((((var_9 ? var_14 : var_14))) ? (!var_0) : var_4)) | (min(((var_14 ? var_9 : (arr_4 [i_1]))), (arr_4 [i_1])))));
    }
    var_20 = (max(var_20, ((max(((((var_10 ? var_7 : var_5)))), ((0 ? 2647301183 : 14)))))));
    #pragma endscop
}
