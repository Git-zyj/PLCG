/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (65535 < 1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 27006;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = (max((min(1320388746, -12574)), ((2974578549 / (arr_1 [i_0 - 2] [i_3 + 1])))));
                            arr_11 [18] [i_0] [18] [i_1] [10] = (min((min((arr_2 [i_0 - 2]), var_11)), 1));
                            var_20 = ((((130 << (arr_7 [i_0 + 1] [1] [i_2]))) | ((min((arr_7 [i_0 + 1] [i_1] [i_0 - 3]), (arr_7 [i_0 - 2] [i_1] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 ^= 0;
    var_22 = ((2974578536 ? var_8 : (!10990080239333952207)));
    #pragma endscop
}
