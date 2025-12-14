/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_11 - var_3) + (2790 + -2786))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = ((!(((-(arr_0 [i_0 + 3]))))));
                arr_4 [i_0] = 269859019;
                var_22 = (max(var_22, (((var_14 + ((((arr_0 [i_1 - 1]) <= var_2))))))));
                var_23 ^= (arr_3 [i_0] [i_1 - 1] [i_1]);
            }
        }
    }
    var_24 = (!var_11);
    var_25 = 1;
    var_26 -= var_19;
    #pragma endscop
}
