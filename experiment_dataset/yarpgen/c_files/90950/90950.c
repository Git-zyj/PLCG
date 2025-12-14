/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 += (~(((((32767 ? (arr_4 [i_0]) : (arr_4 [2])))) ? ((-(arr_3 [i_2] [i_1] [i_0]))) : (!18446744073709551615))));
                    var_11 += -5299;
                }
            }
        }
    }
    var_12 *= 10155636068010029532;
    #pragma endscop
}
