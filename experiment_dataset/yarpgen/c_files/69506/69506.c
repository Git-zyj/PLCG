/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((~(var_0 < var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((((max(var_4, 29)))) ? ((2692903240 ? 105 : 0)) : (min((min(var_4, 67)), (arr_2 [i_1]))));
                var_15 -= ((var_11 ? (((((min(-2800147789582022785, 8005626038700865240)) == var_8)))) : ((68 ? 3482736031108349658 : 2800147789582022798))));
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
