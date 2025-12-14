/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_6 | 32) ? var_4 : (~var_2))) > var_14));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((8 ? 8391 : var_15))));
                arr_5 [i_0] [i_0] [i_0] = (min((arr_3 [i_0 - 1] [i_0 - 1] [i_0]), ((~(arr_1 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_18 [i_2 - 2] [i_6] [8] [i_2] [i_2 - 2] = (arr_8 [2]);
                                arr_19 [i_6] = (min((((!(arr_14 [i_2] [i_2 - 2] [i_3 + 1] [i_5 + 2])))), ((53 * (~14176)))));
                            }
                        }
                    }
                }
                arr_20 [i_2 + 1] [i_3 - 1] = -4;
            }
        }
    }
    var_21 = var_3;
    var_22 = (max(var_22, ((((var_14 + 2147483647) << (var_11 - 6169694446880944732))))));
    #pragma endscop
}
