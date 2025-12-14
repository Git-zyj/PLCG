/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_3));
                var_17 |= (+-14077357981919943065);
                arr_6 [i_0] = ((((var_0 ? var_11 : var_1)) > var_5));
                arr_7 [i_1 - 1] = ((18446744073709551615 ? 1447583020 : 5456));
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
