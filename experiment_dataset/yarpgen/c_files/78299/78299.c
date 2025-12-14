/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((!(((var_7 ? var_11 : var_8)))))), (2147483647 % 1400104822619495406)));
    var_13 = ((((min(((var_5 ? var_1 : var_2)), ((min(var_0, var_4)))))) || ((!(!var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = var_3;
                var_15 = var_9;
            }
        }
    }
    var_16 = ((~((~((var_6 ? var_2 : var_11))))));
    var_17 = (min(var_17, (((~(((((var_4 ? var_0 : var_1))) ? var_11 : -var_3)))))));
    #pragma endscop
}
