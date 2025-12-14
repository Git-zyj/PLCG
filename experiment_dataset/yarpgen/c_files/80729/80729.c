/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? (var_4 == var_10) : var_0));
    var_13 = (((~((var_11 ? var_9 : 1569434746)))) & (!1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= 0;
                    var_15 = (max((min(((16813 ? 1 : (arr_4 [i_0] [i_1] [19]))), (arr_4 [i_0] [i_1] [i_2]))), ((max(((63 ? 15 : var_10)), 241)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_14 [i_6] [i_3] [i_3] [i_4] [i_3] = 16806;
                            var_16 = (max(-120, ((((-64 ? 48729 : 1)) + (arr_1 [i_6 + 2])))));
                            arr_15 [i_5] [i_5] [i_4 + 3] [i_5] [i_4] [i_5] = 12305902478889719107;
                        }
                    }
                }
                var_17 = (max(((max((arr_4 [14] [i_3] [i_3]), (0 | var_3)))), 4294967295));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_20 [i_8] [1] [1] [i_4] [i_8] = (max((((arr_6 [i_3]) ? ((-4920735016752305945 ? 1 : 14159512106774517354)) : (((99 % (arr_9 [0])))))), (~var_8)));
                            var_18 = (31 ^ 48723);
                        }
                    }
                }
                var_19 = (arr_16 [i_3] [i_3] [13] [i_3]);
            }
        }
    }
    #pragma endscop
}
