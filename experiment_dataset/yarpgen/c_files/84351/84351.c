/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_11, -1454085182831055912)) - var_5)) | ((-67 ? (min(var_6, -1222252686357888323)) : ((max(-571609087, -102)))))));
    var_17 = (min(var_17, (((((max(-8192, var_14)))) > (var_0 + var_1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_3 [i_0] [i_0]);
        var_19 = 45721;
        var_20 = (min((((arr_0 [i_0]) + ((-(arr_1 [i_0] [1]))))), ((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0]))))));
    }
    var_21 = 8191;
    var_22 = (max(var_6, var_11));
    #pragma endscop
}
