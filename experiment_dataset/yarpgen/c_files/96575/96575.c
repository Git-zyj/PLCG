/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(var_11 - var_9))) && ((max(3782769336791481737, 1097341569)))));
    var_18 = 524287;
    var_19 = ((0 ? 249 : 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (max(((((arr_2 [i_0 + 1]) <= (arr_2 [i_0 - 1])))), (((arr_2 [i_0 + 1]) ? 1 : 9223372036854775805))))));
                var_21 = -526277443228237364;
            }
        }
    }
    #pragma endscop
}
