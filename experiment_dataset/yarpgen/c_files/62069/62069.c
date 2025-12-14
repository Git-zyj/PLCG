/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_12 ^= (max(2396340021921936494, (max(2221354957066914762, 4294967279))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((65535 >= 2221354957066914762) >= (min(674856565, 16225389116642636848)))))));
                                arr_13 [i_3] [i_1 + 2] [i_2] [i_1 + 2] [i_3] [i_2] = (min(2221354957066914767, 0));
                            }
                        }
                    }
                }
                var_14 = ((((max((-7292321485782191739 < 2147483647), 133189492429913162))) && ((var_9 > (arr_2 [i_1 + 2])))));
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
