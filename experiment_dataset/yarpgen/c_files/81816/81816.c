/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((10400785833030066259 ? (1 / var_15) : -var_17)) + (~65535))))));
    var_21 *= 12;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = ((((((arr_0 [i_0]) ? ((var_14 ^ (arr_1 [i_0] [i_0]))) : (~0)))) ? (arr_0 [i_0]) : var_9));
        var_23 = ((!((((arr_2 [i_0 - 2]) - 7)))));
        arr_3 [i_0] [i_0] = ((min((arr_2 [i_0 - 1]), (((65523 >> (816875168 - 816875145)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_24 = 9;
        var_25 = ((((((max((arr_5 [i_1]), (arr_6 [i_1] [i_1])))) || (((var_4 ? 32761 : var_15))))) ? ((((((65517 % (arr_4 [i_1] [i_1])))) >= (arr_6 [i_1] [i_1])))) : (((!((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : var_6))))))));
    }
    #pragma endscop
}
