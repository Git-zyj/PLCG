/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_0 >= var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (min(0, 7859482823485104560));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [5] = (arr_0 [2]);
                                arr_13 [6] [i_1] = (var_7 & (arr_3 [i_0] [6] [i_0]));
                                var_17 = ((-(arr_5 [i_0] [i_0] [i_0] [10])));
                                arr_14 [i_0] [5] [5] [3] [1] = (min(((~(((arr_3 [i_0] [i_2] [i_0]) ^ (arr_3 [i_0] [i_0] [1]))))), (min((arr_1 [i_2] [i_0]), (arr_4 [i_1 - 3] [i_1 - 2] [i_1])))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = arr_2 [i_0] [i_0];
                    arr_16 [i_2] [2] [2] [i_2] = var_0;
                }
            }
        }
    }
    var_18 = 2047;
    #pragma endscop
}
