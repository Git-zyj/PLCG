/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 += (min(((4294967295 ? 219 : 3750834783524517220)), 3750834783524517220));
        var_20 = min((min((((1 ? 58361 : 65535))), -2681633527198277740)), ((max(((min(var_14, 17453))), (min((arr_0 [i_0]), (arr_1 [i_0])))))));
        var_21 = (max(((min(((max((arr_1 [i_0]), 181))), (((arr_0 [i_0]) ? var_7 : (arr_1 [i_0])))))), (max((min(1, (arr_0 [i_0]))), ((max(var_17, var_4)))))));
        var_22 = (max(var_22, (((((min(((min(1, 32740))), ((20 ? var_7 : (arr_0 [i_0])))))) ? ((0 ? ((74 ? 65535 : 1)) : 1)) : (min(((45 ? 1 : 7825)), 48070)))))));
    }
    var_23 = (max((((-29321 ? 1 : 65535))), ((1 ? -9223372036854775791 : 57391))));
    #pragma endscop
}
