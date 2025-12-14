/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min((((var_5 ? var_4 : var_5))), ((((((var_14 ? var_1 : 254))) ? ((max(var_9, var_8))) : ((min(2166, 17)))))))))));
    var_16 = var_1;
    var_17 ^= ((((max((~var_0), var_3))) <= (max((!var_12), (min(4243210850990298540, 1))))));
    var_18 *= (max((((((max(var_12, var_4))) ? (~var_8) : (!-13)))), (min(27952, (((var_9 ? 53325 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 -= ((-(arr_2 [i_0] [i_1])));
                var_20 = (((var_12 & (!var_11))));
            }
        }
    }
    #pragma endscop
}
