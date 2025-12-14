/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 *= 837173406;
                    var_21 = (min(var_21, (((~((-(!15132216709361993377))))))));
                    var_22 = ((((var_11 ? (arr_6 [i_0] [i_0] [i_2]) : var_18)) % ((-(18446744073709551615 != -486015945)))));
                }
            }
        }
    }
    #pragma endscop
}
