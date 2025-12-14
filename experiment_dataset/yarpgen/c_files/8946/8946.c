/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_5));
    var_12 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [14] [i_1] |= ((((max(5798048328183469170, 255))) || ((max(59023, (arr_3 [i_2]))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] |= (min(((+(((var_10 + 2147483647) << (1792 - 1792))))), var_5));
                    arr_8 [9] [i_0] [i_1] [10] = (arr_1 [i_0] [1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_3] [i_2] [6] [i_0] [10] = (~(var_7 / -4680));
                                var_13 = var_10;
                            }
                        }
                    }
                    var_14 = -45;
                }
            }
        }
    }
    var_15 &= (((min(124, 16383)) | (var_10 + 48781)));
    #pragma endscop
}
