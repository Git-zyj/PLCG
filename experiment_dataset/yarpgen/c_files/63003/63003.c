/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 &= (max((min(((var_2 ? -1585147613040217083 : var_8)), 28715)), var_3));
                        var_20 = (max(var_20, ((min((arr_9 [i_0] [i_0] [i_0 - 2] [i_0]), (((arr_3 [i_0] [16] [i_3]) ? -1585147613040217083 : (((arr_6 [i_3] [i_0]) ? (arr_1 [i_0]) : 3707200847585992304)))))))));
                        var_21 = ((-3042488927486704836 ? (-27491 != var_18) : (((((((arr_6 [2] [i_1]) > 4507))) > ((((arr_2 [i_2] [i_2]) < (arr_10 [i_1] [i_1])))))))));
                    }
                }
            }
        }
        var_22 = 4592238010404898023;
    }
    var_23 = -1585147613040217068;
    #pragma endscop
}
