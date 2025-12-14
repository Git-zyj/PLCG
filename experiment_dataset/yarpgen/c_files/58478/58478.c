/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [17] [i_1] [0] [i_1] = ((7 && ((max((2505427938901322559 && 1445545151337910381), (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    var_12 = (((arr_1 [i_2]) > ((((!(arr_0 [i_0]))) ? -5937 : ((((arr_1 [18]) > (arr_4 [i_1] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_13 = (max(var_13, (((((min(((var_9 ? var_5 : var_11)), (var_7 == var_5)))) ? (24 + 3444338693144006706) : ((var_10 ^ ((min(27523, 18))))))))));
    var_14 = var_0;
    var_15 = ((!((((min(var_5, 1464340917))) || 2967953512))));
    #pragma endscop
}
