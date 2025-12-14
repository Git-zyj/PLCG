/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((0 ? 6609276392311444418 : -6609276392311444429))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max(((((arr_7 [i_0] [i_1] [i_1]) - 1))), -6609276392311444433)))));
                    var_15 = ((arr_7 [i_0] [i_0] [i_0]) >= ((var_0 ? 6609276392311444418 : (((arr_4 [i_0] [i_0]) ? -6609276392311444423 : 1)))));
                    var_16 = 6609276392311444432;
                }
            }
        }
    }
    var_17 = ((0 ? var_9 : (((!(((var_10 ? var_7 : var_10))))))));
    #pragma endscop
}
