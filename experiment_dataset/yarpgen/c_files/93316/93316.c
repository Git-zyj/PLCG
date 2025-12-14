/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0] [i_0]) && var_10)) ? (((((!(arr_0 [i_0]))) || ((!(arr_2 [i_0] [i_0])))))) : 1));
        var_12 = 773173370376634063;
    }
    var_13 = 17673570703332917532;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            {
                var_14 = var_6;
                var_15 ^= ((234 ? ((var_6 ? (arr_8 [i_1] [i_2 - 2]) : 8069664771166752205)) : (arr_7 [i_1] [i_2])));
            }
        }
    }
    var_16 = (max(var_16, (((!(((22452 ? var_3 : (!var_8)))))))));
    #pragma endscop
}
