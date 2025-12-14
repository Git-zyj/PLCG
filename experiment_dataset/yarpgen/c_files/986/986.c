/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = (((((1 >> (max(0, var_1))))) ? (((min(1, 31)))) : ((var_4 ? (arr_1 [i_2]) : -6441855507627508938))));
                            arr_14 [i_2] [12] [i_1] [i_2] |= (!0);
                        }
                    }
                }
                var_15 = (max(var_15, 4593));
            }
        }
    }
    var_16 = min(-8736870960711474958, -1571310261167642954);
    var_17 |= (min(8736870960711474969, (max(var_13, 6441855507627508920))));
    #pragma endscop
}
