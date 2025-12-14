/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((!var_12), var_10))) ? var_4 : (((!(122 % 127))))));
    var_14 = (min(124, var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_0]);
                    var_16 += var_9;
                    var_17 = (max((max(275425469, 4019541827)), (min(3092800156, (((34834 != (arr_3 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_18 = (((((34832 ? 15405569283762575256 : 30722))) + ((((max(2410240374, 1)) + -54111)))));
    #pragma endscop
}
