/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (max(var_2, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = ((-(arr_9 [i_4] [i_3 + 1] [i_2 + 1] [17] [i_1 - 1])));
                                var_14 = (max((((arr_8 [i_2] [i_4] [i_3 + 1] [i_2]) ? var_0 : 25938)), (arr_8 [i_2] [i_2] [i_3] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_15 = 1480709830676546092;
                                var_16 = (min(var_16, ((((((arr_10 [i_6] [i_5 + 1] [i_2] [i_2]) || (arr_10 [i_6 + 1] [i_5 + 1] [i_5] [i_5]))) ? (((arr_1 [i_6 + 2] [i_0]) ? (max(-1277750280, 4294967295)) : ((((arr_11 [i_6] [i_0] [i_1] [i_1] [i_0]) + var_0))))) : (arr_13 [16] [i_5] [i_2] [i_0] [i_0]))))));
                                var_17 = (max(var_17, ((((((min(3252873652650288439, (arr_11 [i_6] [i_5] [i_2] [i_1] [i_0]))))) ? ((((((arr_0 [i_5 - 1]) ? (arr_6 [i_2] [i_1 + 1]) : 4294967295))) ? var_6 : ((9 ^ (arr_11 [i_6] [9] [i_2 - 1] [i_1] [9]))))) : 45977)))));
                                arr_18 [i_0] [i_2] [i_0] [i_2] [i_0] [i_2] [i_0] = (max(((931126008 / (~var_1))), 58708));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
