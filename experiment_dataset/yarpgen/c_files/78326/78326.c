/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((min(var_7, ((((arr_1 [1]) ? (arr_1 [12]) : (arr_1 [12]))))))) ? -87 : (arr_0 [i_0]))))));
                var_15 = 3979609276;
                var_16 += ((((((((var_4 ? var_9 : 27))) ? ((((arr_2 [i_1] [i_1 + 1] [i_1]) && -960544050694951731))) : var_10))) ? (((-83 && 80) ? (((825048263 ? var_10 : (arr_3 [i_0] [3] [i_1 + 1])))) : (arr_0 [i_0]))) : ((((((10 ? 0 : (arr_0 [i_1 + 1]))) > (arr_3 [i_1 + 1] [i_1 + 1] [i_0])))))));
                arr_4 [i_0] [i_0] = ((((6144 ? -3106543012011580245 : 3979609276)) > ((((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]) * (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
