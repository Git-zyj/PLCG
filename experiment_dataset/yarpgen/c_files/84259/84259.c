/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (0 << 0)));
    var_14 = (min(var_14, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_0 + 2]);
                arr_4 [14] [i_0] = (min(((min((arr_3 [i_0 + 2] [i_1]), (arr_3 [i_0 + 2] [i_0 + 2])))), ((8036682683441595562 >> (1687660902 - 1687660856)))));
            }
        }
    }
    #pragma endscop
}
