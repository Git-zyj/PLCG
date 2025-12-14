/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 52201;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 - 1] = max(((255 ? -1878227282 : 14033059117390827320)), 57787);
        var_21 = -var_14;
        arr_4 [i_0] = (((((var_0 == 18446744073709551615) ? (max((arr_1 [i_0 - 2]), 14033059117390827320)) : (arr_0 [i_0 - 2]))) > ((max(((((arr_1 [i_0]) ? var_9 : (arr_0 [i_0])))), ((1 ? (arr_2 [i_0 + 1]) : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (!4413684956318724303);
        arr_8 [i_1] = (max(1, (arr_5 [i_1])));
        arr_9 [i_1] [i_1] = (((arr_6 [i_1]) ^ (4413684956318724296 / 979554001)));
    }
    #pragma endscop
}
