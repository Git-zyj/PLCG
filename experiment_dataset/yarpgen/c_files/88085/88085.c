/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = ((var_5 ^ var_11) || ((((max(1, var_11))) && ((min(var_11, var_7))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!1);
        arr_3 [i_0] [17] = ((!(((~(9 + 23784))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((max(var_11, var_5))) * (min(552079479, 0))));
                    arr_10 [15] [i_2] [i_2] [i_0] = ((var_9 < (((((max(1, 37))) / ((max(32767, 24975))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_0] [8] [8] = 48;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [3] [i_0] [i_0] [3] [i_5] = (max(((var_5 ^ (14976617166638854655 != -1304134835))), var_10));
                                arr_22 [i_3] [i_3] [3] [i_5] = max((min((arr_7 [i_5 - 2] [i_6 + 1] [13] [13]), 0)), -26);
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_5] = (!4294967295);
                                arr_24 [i_0] [i_0] [i_4] [i_5] [18] &= var_8;
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [i_0] = (min(((((max(35215, 19))) ? (min(var_1, var_10)) : (arr_19 [i_0] [i_0] [13] [i_0] [18] [i_4]))), (arr_14 [i_0] [i_0])));
                    arr_26 [i_0] [i_3] [i_3] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
