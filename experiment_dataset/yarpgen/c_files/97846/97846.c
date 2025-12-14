/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 193;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((((((var_13 <= (arr_5 [i_0] [i_0]))))) <= (min((arr_5 [i_0] [i_0]), 4032))));
                arr_6 [i_0] [i_0] [i_0] = ((((arr_5 [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_0 [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (-var_6 <= var_15)));
                var_19 = ((((var_13 != var_5) ? 30651 : 117)));
            }
        }
    }
    var_20 = ((((((65535 && 2) ? (var_2 || var_3) : (var_9 || 61505)))) % var_15));
    #pragma endscop
}
