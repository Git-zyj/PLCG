/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = (((123 / 18446744073709551615) < (((max(var_2, var_6))))));
                    var_11 = (max(var_11, (4 ^ 0)));
                }
            }
        }
    }
    var_12 *= (min(((max((var_1 == -2147483630), (var_4 > var_1)))), 18446744073709551611));
    var_13 = (max(var_13, ((min((((1 == var_2) + ((17 ? 1012165467 : var_0)))), ((min(var_9, (min(var_9, var_7))))))))));
    #pragma endscop
}
