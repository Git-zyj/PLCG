/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((((arr_3 [1] [10] [i_1]) ? 1 : 64314)))) ? ((max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1])))) : ((max((-111 != 64294), 1233)))));
                arr_6 [9] [1] = (max(((max(1242, 1))), ((~(arr_3 [i_0] [i_0] [12])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = 49;
                            var_12 -= -1;
                        }
                    }
                }
            }
        }
    }
    var_13 *= var_0;
    var_14 = (max((max(1, 1222)), 1));
    #pragma endscop
}
