/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((+(((((((arr_3 [i_0] [i_1] [i_1]) + (arr_4 [i_0] [i_0 + 3])))) || -var_7)))));
                arr_6 [i_0] [i_0] [i_0] = ((-(arr_4 [i_0] [i_0])));
            }
        }
    }
    var_19 = var_2;
    var_20 = (max((((((-10409 + 2147483647) << (113 - 113))) << (((((~var_2) + 18)) - 16)))), var_10));
    #pragma endscop
}
