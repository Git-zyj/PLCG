/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 10131;
    var_14 = (max(var_12, ((10161878538605708384 ? 268435200 : -20643))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 -= ((1542348259 ? 15330 : (-2147483647 - 1)));
                arr_6 [i_0] [1] = (min((((!((max(50207, 45745)))))), (min(((15329 ? -20637 : 141388137)), 1542348260))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [12] [i_0] = (!916255785040711328);
                                var_16 = ((((((((2305843009213693951 ? -1948846585 : 6718707991560656631))) ? (2 % 155563289) : -0))) ? ((max((max(53, 24)), (min(58, 53))))) : (!-278162955676864145)));
                                arr_14 [i_0] [i_1 - 3] [i_2] [8] [1] [5] [8] = (4 * -32759);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
