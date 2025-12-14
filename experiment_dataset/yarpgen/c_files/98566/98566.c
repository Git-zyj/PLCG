/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 += 65000;
                            var_16 += arr_2 [i_0] [i_0];
                            var_17 = (min(var_17, 10744));
                        }
                    }
                }
                arr_8 [i_1] [i_1] [i_0] = 35807;
                var_18 *= 0;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = 44596;
                                arr_18 [i_0] [i_1] [i_4] [i_4] [i_6] = max(10, 6589);
                                arr_19 [0] [i_4] [i_4] [i_4] [0] = (((((-(arr_14 [7] [i_4] [i_4] [i_4] [10])))) ? 49766 : (arr_16 [i_4] [i_1] [i_4] [1])));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] = 57212;
                                arr_21 [9] [i_4] = 0;
                            }
                        }
                    }
                }
                arr_22 [i_1] = 18264;
            }
        }
    }
    var_19 = 1410;
    var_20 = (min(-49159, ((~((var_6 ? 64126 : 3))))));
    var_21 = ((6160 ? var_11 : 61363));
    #pragma endscop
}
