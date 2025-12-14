/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] |= ((~(((~4959660796398870346) ^ (max((arr_3 [i_1 - 1] [i_1]), 4959660796398870346))))));
                var_10 = (~1);
                var_11 *= (+(((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [1]) - 651318568)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((((((arr_15 [i_5] [i_5]) ? (4905226778314853214 / -1691921888) : (2575297594 >= -4905226778314853221))) + 9223372036854775807)) << ((((+(((arr_9 [i_4 - 1]) ? (arr_11 [i_2]) : (arr_14 [i_6 + 4] [i_6 + 4] [i_6]))))) - 11)))))));
                                arr_22 [i_2] [i_3] [i_4] [i_3] [i_6 - 2] = (((arr_20 [i_6 - 1] [i_3]) ? 1 : ((max(1, 31)))));
                            }
                        }
                    }
                }
                var_13 = (1719669687 ? (((((max((arr_8 [i_2] [i_3]), -530860430))) ? (((arr_9 [i_2 - 1]) ? 3355992029 : 1)) : (((-(arr_10 [1]))))))) : (4959660796398870346 ^ 66));
            }
        }
    }
    #pragma endscop
}
