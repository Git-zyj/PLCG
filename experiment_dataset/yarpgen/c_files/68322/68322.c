/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((4294967291 ? (arr_2 [i_0]) : 20));
        var_17 -= max(var_7, (min((arr_2 [i_0]), -9223372036854775795)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 *= ((min(var_1, (arr_5 [3] [i_1] [i_1]))));
                    var_19 = ((43307 ^ (arr_3 [i_1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_20 = (16777215 << ((((arr_10 [i_3]) > var_7))));
        var_21 = ((-(min((min(126, 7725950683102648407)), (((0 ? (arr_9 [i_3]) : 3747277337)))))));
    }
    var_22 -= var_3;
    #pragma endscop
}
