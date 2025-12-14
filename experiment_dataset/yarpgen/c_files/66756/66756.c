/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] = min(var_3, -2897433002738429019);
                            arr_15 [5] [i_3 - 3] [i_2] [i_3] [i_0] [i_1] = (arr_11 [2] [i_0] [i_2]);
                            var_13 = arr_2 [i_0];
                            arr_16 [i_0] [i_1] [i_2] [6] = arr_2 [i_0];
                        }
                    }
                }
                var_14 = (max((((!(arr_2 [i_0])))), (min((arr_9 [i_0] [i_1] [i_1]), (arr_7 [i_0] [3] [i_0] [2])))));
                var_15 -= ((((!((max(var_2, (arr_2 [14])))))) && ((max(194, -var_6)))));
                arr_17 [i_0] = (max((((arr_2 [i_0]) ^ var_7)), (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 15075))));
            }
        }
    }
    var_16 = (!var_5);
    #pragma endscop
}
