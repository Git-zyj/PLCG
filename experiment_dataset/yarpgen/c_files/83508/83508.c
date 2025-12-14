/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((var_9 ? ((-(var_9 && var_8))) : 7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(248, -72));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((((((-2 ? 49 : -9)) != var_1)) ? (min(-1425021424889566099, (arr_1 [i_2 - 1] [i_0]))) : ((((!(((var_5 ? -3 : var_8)))))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_0]);
                    arr_10 [8] |= (((arr_1 [i_1 - 2] [i_1 - 1]) ? var_3 : ((((arr_7 [i_2 - 1] [10] [i_2 - 1]) ? (arr_7 [i_2 - 1] [1] [i_2 - 1]) : var_5)))));
                }
            }
        }
    }
    #pragma endscop
}
