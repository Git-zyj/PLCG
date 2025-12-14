/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = min((max((arr_6 [7] [i_2] [i_3]), ((var_1 - (arr_3 [i_4] [i_3] [i_0]))))), 4257986602921021306);
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] &= min(5443882904398459195, -5443882904398459184);
                            }
                        }
                    }
                }
                var_11 = (min(var_11, ((((((arr_1 [i_1]) << (((arr_7 [i_0] [i_1] [4] [i_0]) - 5786348393020046354))))) ? (min((arr_7 [i_1] [i_1] [i_1] [i_0]), var_4)) : (arr_1 [i_0])))));
                arr_14 [i_0] [i_0] [8] &= (+(((arr_2 [i_1]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
                var_12 = (((max(((var_8 >> (5443882904398459195 - 5443882904398459144))), (arr_6 [i_1] [i_0] [i_0]))) == ((var_8 ? (((((arr_0 [i_1]) >= -7117554658590975092)))) : (max(-5443882904398459199, 7955605017287460540))))));
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
