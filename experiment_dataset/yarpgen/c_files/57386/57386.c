/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 158));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 += (max(((-(arr_6 [i_0 - 4] [i_0] [i_1 + 1] [i_1 + 1]))), (((!(((arr_4 [i_0] [i_0] [i_0]) >= var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 4] [i_1] [i_3] [i_2] [i_1] [i_4] = ((-(min((min(7422667401826611359, 1457082652)), (arr_1 [i_4])))));
                                var_18 = (((((max((arr_6 [i_0 - 2] [i_0] [i_0] [4]), var_1)))) <= (((~50450) & ((97 ? (arr_2 [i_0] [i_0 - 3]) : (arr_9 [3] [i_2] [i_2] [i_4])))))));
                            }
                        }
                    }
                    arr_13 [i_0] = ((~((max((arr_11 [i_0 - 1] [i_1 + 2] [i_1] [i_2] [i_2]), (arr_8 [4] [i_1] [i_1 - 1] [i_1] [i_1 + 3] [12]))))));
                    arr_14 [i_2] [i_2] [i_2] [i_2] = 1599456506;
                    var_19 = (min(var_19, (((((((((-(arr_1 [i_1 + 3])))) ? (arr_5 [i_0 - 1] [i_0] [i_1 + 3]) : 27533))) ? (arr_10 [7] [i_1 + 3] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1]) : (max(var_6, var_4)))))));
                }
            }
        }
    }
    var_20 -= var_0;
    #pragma endscop
}
