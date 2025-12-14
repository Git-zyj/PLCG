/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((-((max((max(var_3, var_5)), var_10)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] = var_9;
            arr_7 [i_0] = ((((((arr_3 [i_1 - 1] [i_1] [i_1 + 2]) ? (arr_3 [i_1 + 2] [i_1 + 2] [8]) : (arr_3 [i_1 - 1] [i_0] [i_0])))) ? -6982569038506975812 : (((65535 ? -29 : 14)))));
        }
        arr_8 [i_0] = var_5;
        arr_9 [i_0] = ((((((17 == (((arr_3 [i_0] [i_0] [7]) ? var_0 : var_10)))))) == ((65521 ? 3894349070441378882 : (((var_6 ? var_0 : (arr_2 [i_0 + 1]))))))));
        var_12 = ((!(arr_5 [i_0])));
        arr_10 [i_0] = (((((15884 ? -11552 : 49651))) ? (max((arr_4 [i_0 + 2] [i_0 - 1] [i_0]), var_9)) : (((-(arr_4 [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
