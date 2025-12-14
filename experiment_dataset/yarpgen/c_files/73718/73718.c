/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((44 >> (((arr_3 [i_2 - 2] [i_2 - 2] [i_2 + 1]) + 7612726545126691263))))))));
                    arr_6 [8] [i_0] = 1770;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((min(((-((45 ? -29197 : 1)))), (var_1 && -65))))));
                                var_13 *= (((max(17883040542418323188, (arr_1 [i_2 - 1]))) ^ (((((((((arr_2 [i_0]) && var_3)))) == var_4))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_6] [i_6] [i_5] [i_2] [i_1] [i_0] [i_0] &= ((((200 - (-421549788 / var_9))) + ((+(((arr_11 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]) - (arr_7 [i_6] [i_5])))))));
                                arr_18 [i_5] [i_5] [i_2] [i_5] [i_6] [i_6] [i_2] &= (arr_5 [i_6] [i_5] [i_0]);
                                var_14 = ((((((arr_1 [i_2]) - 92))) ? ((min(var_9, (arr_5 [i_0] [i_1] [i_2])))) : ((var_8 ? 387120150 : var_6))));
                                arr_19 [i_6] [i_1] [i_2 - 2] [i_1] [i_0] = ((!((max((arr_16 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [1] [i_2 + 1]), (arr_3 [i_2] [i_2 - 1] [i_2 - 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
