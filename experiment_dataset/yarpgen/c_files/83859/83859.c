/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = 3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [15] [i_1] [i_2] [i_3 + 3] = (((((-(((arr_0 [i_3]) ? -1 : (arr_8 [i_3] [i_2] [i_2] [i_1] [i_0])))))) || ((((arr_4 [i_0] [15] [i_0]) ? (arr_4 [i_1] [i_2] [i_1]) : (arr_4 [i_0] [i_3 + 1] [i_2]))))));
                            arr_11 [i_0] [i_0] [i_0] [8] = (max(1, 18446744073709551613));
                        }
                    }
                }
                var_11 *= -3;
            }
        }
    }
    var_12 = var_2;
    var_13 = 0;
    #pragma endscop
}
