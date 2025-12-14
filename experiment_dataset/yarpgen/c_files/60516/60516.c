/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_16 += (max(var_8, (max(4, (max(var_8, 18446744073709551611))))));
                var_17 = (min((max(18446744073709551608, (((var_12 ? 254 : var_3))))), (((!((max(var_8, var_13))))))));
                var_18 = (-9223372036854775807 - 1);
            }
        }
    }
    var_19 = (min(((max(((min(var_11, var_4))), (max(var_6, var_8))))), (min((18446744073709551608 & -789821524771518365), (var_0 & 0)))));
    #pragma endscop
}
