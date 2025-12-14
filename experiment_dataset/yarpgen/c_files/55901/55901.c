/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [16] [i_0] = ((((((61470 <= (arr_4 [i_0] [i_0] [i_0] [i_0]))) ? ((((arr_5 [i_1]) >> (-358178840837194179 + 358178840837194186)))) : ((63139 ? 549350919814415779 : 17592271630918970867))))) ? (arr_4 [i_0] [i_1] [i_2] [i_2]) : (((((arr_1 [i_0] [i_0]) > var_6)) ? var_4 : 250)));
                    arr_7 [15] [12] [12] = ((1228086470 || (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 = 22643;
                                var_11 = (((arr_5 [i_3]) | -54));
                                arr_15 [i_0] [i_1] [i_2] [16] [i_4] [i_3] = ((0 < ((min(15, -var_9)))));
                                arr_16 [i_4 + 2] [i_3 + 1] [i_3] [13] [i_0] = ((((((max(1, -21041))) ? ((84 ? 1125899906842623 : (arr_3 [i_0] [19]))) : (((min(6, (arr_4 [i_0] [18] [18] [i_4 + 2]))))))) <= (-2147483647 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_1;
    #pragma endscop
}
