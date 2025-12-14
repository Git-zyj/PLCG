/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((max(((-5273 % ((~(arr_0 [i_0]))))), (((((var_2 ? -5273 : (arr_1 [0] [0]))) - var_0))))))));
                var_11 = ((5266 ? (min((arr_0 [i_0 + 2]), var_0)) : (((var_6 ? (var_8 | var_1) : (min(-5273, var_9)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_1] [i_3] = ((min(var_7, var_5)));
                            var_12 &= (((((min(5274, -5279)))) / ((~(-5275 && var_9)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_14 [i_1] = (~var_9);
                            var_13 = (var_1 + -5291);
                        }
                    }
                }
            }
        }
    }
    var_14 = 5272;
    var_15 ^= var_3;
    #pragma endscop
}
