/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -14007;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((((((arr_2 [i_0]) ? (arr_2 [i_1 - 3]) : (((var_0 <= (arr_4 [i_0] [i_1 - 1] [i_2])))))))))));
                    arr_8 [i_2] [i_1] [i_2] [i_1 - 2] = ((var_0 && ((((arr_3 [i_0] [i_0]) & (arr_3 [i_1] [i_1 + 1]))))));
                    arr_9 [i_2] [i_2] = ((arr_4 [5] [9] [5]) < (((-9223372036854775807 - 1) ? 32411 : (-2147483647 - 1))));
                    var_19 += (arr_3 [i_1 + 1] [13]);
                }
            }
        }
    }
    #pragma endscop
}
