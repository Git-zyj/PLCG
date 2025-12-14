/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_11, ((((((arr_0 [i_0]) != 65535)) || ((((arr_11 [i_0] [i_1] [i_0]) >> (((arr_9 [i_0] [i_0] [21]) - 38379))))))))));
                            arr_12 [i_0] [i_1] [i_1] = ((((~(arr_9 [i_3] [0] [i_0])))) ? (max((min((arr_0 [i_0]), 1920)), 4294965375)) : (max(((2855805655 ? 0 : (arr_7 [i_1] [i_2] [i_1]))), ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0])))))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] |= (arr_2 [i_1] [i_1]);
            }
        }
    }
    var_16 ^= var_10;
    #pragma endscop
}
