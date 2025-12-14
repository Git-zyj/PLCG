/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (i_0 % 2 == zero) ? (((max((((var_8 + 2147483647) >> (((arr_0 [i_0]) - 16643860967030002285)))), (arr_2 [i_0] [i_0] [i_1 + 2]))))) : (((max((((var_8 + 2147483647) >> (((((arr_0 [i_0]) - 16643860967030002285)) - 15405522193913725759)))), (arr_2 [i_0] [i_0] [i_1 + 2])))));
                var_13 -= (~var_5);
                var_14 = var_4;
            }
        }
    }
    var_15 = var_2;
    var_16 = var_1;
    #pragma endscop
}
