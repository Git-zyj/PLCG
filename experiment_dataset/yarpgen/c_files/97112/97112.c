/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((54 ? (-734748855364512041 ^ 148) : (var_7 | 54)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((255 << ((((max(117, 15911))) - 15889))))) ? 1796566649 : ((max(53630, 9223372036854775807)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = ((((max(20, (arr_0 [i_0])))) ? (arr_3 [i_0 + 3] [i_0 + 3]) : (!9)));
                            var_12 = 190;
                        }
                    }
                }
            }
        }
    }
    var_13 = var_1;
    #pragma endscop
}
