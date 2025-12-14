/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(-1242101622, 14356951304990988206))) ? ((((max(1242101621, -1242101635)) | (~var_0)))) : ((2147483647 ? (1242101621 + 57344) : var_5))));
    var_11 = var_3;
    var_12 = 2339384045;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (+(max(0, (((arr_5 [i_0] [i_0 - 2] [3]) ? var_1 : 0)))));
            var_13 = arr_5 [i_0] [i_0 + 1] [4];
            var_14 = (((((arr_6 [i_1 + 1]) + 1242101644))) ? (~35447) : (1 + 0));
            var_15 = ((~(max(55478, (arr_1 [i_1 + 1])))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_16 = (((arr_8 [i_0] [10] [i_2]) ? ((var_2 ? (arr_1 [i_0 + 1]) : var_2)) : (arr_3 [i_0] [i_0 + 1])));
            arr_10 [i_2] [i_2] = min(1242101622, ((~(arr_9 [i_0 + 1]))));
        }
        var_17 = var_8;
    }
    var_18 = 24576;
    #pragma endscop
}
