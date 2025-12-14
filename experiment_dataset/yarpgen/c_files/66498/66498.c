/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = ((!(((~(arr_3 [i_1 + 1]))))));
                                var_12 = (min((((arr_7 [i_1 + 2] [i_1 + 1]) ? (arr_7 [i_1 + 2] [i_1 + 4]) : (arr_7 [i_1 - 1] [i_1 - 2]))), ((((-725014301 ? (arr_6 [i_3]) : 274877906688)) % (min(9, (arr_8 [i_0] [i_1] [i_1] [i_1] [i_3] [11])))))));
                                var_13 += ((min(549755813824, 1)));
                                var_14 ^= -725014292;
                            }
                        }
                    }
                    var_15 *= (arr_13 [i_0] [i_0] [i_1] [i_2]);
                    arr_14 [i_2] [i_1] [i_0] |= (((max(2197949513728, (arr_2 [i_1 + 4] [i_1 - 1]))) >= (((min((arr_0 [i_1 - 1] [i_2 + 2]), (36020000925941760 < -16542)))))));
                }
            }
        }
    }
    #pragma endscop
}
