/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 *= ((max(var_13, (-18531 == 6057171856230199949))));
                arr_6 [i_0] [i_0] = (((1804649636 < -4098392166488918640) ? (arr_2 [i_1] [i_0]) : (((arr_0 [i_1] [i_0 + 1]) & var_11))));
                var_19 += (((var_11 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0 + 3] [i_0 + 3] [i_1]))));
                arr_7 [i_1] = (-(-5942443648030035784 - var_3));
            }
        }
    }
    var_20 = (~4098392166488918640);
    #pragma endscop
}
