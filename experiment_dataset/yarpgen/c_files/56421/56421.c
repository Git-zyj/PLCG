/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((max(35, (arr_1 [i_1] [i_0])) < (((min(65535, 1)))))))));
                var_12 &= ((((max((((35 >> (((arr_2 [8] [i_1]) - 45572))))), (arr_3 [i_0])))) ? 224 : (~37836)));
            }
        }
    }
    var_13 = (min(35, 17));
    var_14 = ((((min(((var_5 ? 1 : var_6)), var_4))) && ((min(((var_4 ? var_4 : var_6)), var_4)))));
    #pragma endscop
}
