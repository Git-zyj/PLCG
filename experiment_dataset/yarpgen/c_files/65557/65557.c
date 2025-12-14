/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 6864880907135788599;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = var_7;
                arr_4 [i_0] = ((((((arr_0 [i_1] [i_1 + 2]) ? 6864880907135788599 : 59735))) ? (arr_0 [i_0] [i_1]) : ((144110790029344768 - (0 - 5800)))));
                var_12 = (max(var_12, (((arr_3 [i_0 - 2]) ? -14237515092694730299 : 0))));
            }
        }
    }
    #pragma endscop
}
