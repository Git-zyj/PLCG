/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = 21832;
                arr_4 [i_1] [i_1] = ((1433882025 << ((((((max(99, (arr_2 [i_0] [i_0] [i_0])))) - ((max((arr_2 [i_0] [16] [i_0]), var_0))))) - 256))));
            }
        }
    }
    var_17 = (-91 * 10);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                var_18 ^= (max((max(var_12, (min((arr_5 [i_3]), 44389)))), (max((((arr_8 [i_2] [1]) - 2743543122538514877)), ((min(64, (arr_9 [i_2] [i_3]))))))));
                arr_10 [i_3] |= ((-(arr_7 [i_2])));
            }
        }
    }
    #pragma endscop
}
