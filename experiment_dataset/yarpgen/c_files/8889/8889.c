/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!((min(var_1, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = 1250462838;
                arr_5 [i_0] [3] = (((((arr_3 [i_1 + 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])))) ? (max((((var_14 <= (arr_1 [9])))), var_4)) : (((max(65528, var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_18 = (var_4 != 4294967295);
                arr_12 [i_3] [i_3] = (min((((var_8 | var_0) ? (max(var_13, var_11)) : (arr_0 [i_2] [i_3]))), (!-4059798420625765740)));
            }
        }
    }
    #pragma endscop
}
