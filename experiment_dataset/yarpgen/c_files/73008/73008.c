/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((-(8571208691395513147 - 3781381834925866265)));
                    var_16 += ((((max(3781381834925866271, 3781381834925866265))) && 8719427523510361942));
                    var_17 ^= (((13 - 1) % (((((1492402143 ? 4621257662794262835 : -792598601883659186))) ? ((min(339694561657131731, -29721))) : ((8458555875771403095 ? 8719427523510361946 : 11209))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_3] [i_2] [i_1] [i_0 - 1] [4] = 16333714737144202448;
                                arr_13 [i_4 + 1] [1] [i_3] [i_2 - 1] [3] [i_1] [i_0 + 2] |= ((-(!1897714280)));
                                var_18 -= (max((min(2575741428, 0)), (1 / 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= var_13;
    var_20 |= ((0 ? 9223372036854775807 : 1));
    #pragma endscop
}
