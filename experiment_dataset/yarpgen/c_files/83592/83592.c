/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(33, var_0)) >= (((33 ? 7168 : -23))))) || -22));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2 - 3] [i_0] = var_1;
                    var_14 += ((95 >= (arr_8 [i_2 - 2] [i_2 - 3] [i_2 + 2])));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_3] [i_0] [i_4 - 1] [i_3 + 1] [i_0 + 2] = (((arr_7 [i_1 + 1]) & -6727922067809859994));
                            var_15 = (max(var_15, 21));
                        }
                    }
                }
                arr_16 [i_1 + 1] [i_1 - 2] [i_1] = (((((~(arr_3 [i_0 + 4] [i_1 - 1] [i_0 + 3])))) ? (arr_5 [i_0] [i_0] [i_0 + 1]) : (arr_14 [i_0])));
            }
        }
    }
    #pragma endscop
}
