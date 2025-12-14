/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = var_14;
    var_17 *= (((min(((var_2 ? 18446744073709551604 : -6930)), -18088)) ^ (((-8311 ? ((min(var_7, var_5))) : 48976)))));
    var_18 = (min(((-((var_5 ? -1494350702 : 16581)))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 -= ((((((min(var_11, (arr_1 [i_0] [i_1]))))) + 3234631002)));
                var_20 += (((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [15]))))) != 1060336294));
            }
        }
    }
    #pragma endscop
}
