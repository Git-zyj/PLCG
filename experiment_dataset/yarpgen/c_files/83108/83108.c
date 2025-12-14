/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 1] [i_0] [i_2] [i_0] [i_0 - 3] = -14629;
                                var_17 -= 20107;
                                var_18 = ((~(((arr_3 [i_0 - 3]) >> (((arr_3 [i_0 - 2]) - 23))))));
                                var_19 = -121;
                                var_20 = (1837715893 ? 1837715883 : (((+(((arr_5 [i_1] [i_2] [i_3] [i_0]) - -15878))))));
                            }
                        }
                    }
                    var_21 = (((((-32767 - 1) ? 8042 : 16576))) ^ (max(65515, ((1837715883 ? (arr_3 [i_1]) : 94675412)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_2] [6] [i_5] [i_6] [i_0] = (arr_10 [i_0]);
                                arr_20 [18] [i_0] [i_2] [i_6] [i_0] = ((2100064087 || ((min(2, 21550)))));
                                var_22 = (min(var_22, 2457251412));
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] = -15901;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
