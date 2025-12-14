/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (max((max(((var_17 ? 14663841676076394946 : 1767)), 1)), 1));
                arr_5 [i_1] = ((max(4294967295, 1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = ((((max(-1771, 1))) ? -7096142672795917920 : 7852));
                                arr_18 [i_2] = ((-7096142672795917923 ? 8477263932940066767 : 1));
                            }
                        }
                    }
                    var_21 ^= ((268402688 ? ((20 ? 2774267810 : 2251799813685247)) : (((min(var_5, 31))))));
                    var_22 = (((16 + 31457280) / (max(18446744073709551615, -1778))));
                }
            }
        }
    }
    #pragma endscop
}
