/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min((min(234, var_11)), (max(var_2, var_11)))), ((max((var_5 >= var_10), (max(var_7, 49383)))))));
    var_13 &= (((min((1703355727 + 234), (min(-9096469917295704874, 22)))) != ((((var_10 == var_6) >> ((max(var_6, var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((((max(((((arr_8 [i_0] [i_1] [9]) > var_1))), (((arr_2 [6]) + (arr_3 [i_0] [8] [i_2])))))) || ((((((arr_1 [i_2] [i_1]) / var_7)) + (((arr_1 [5] [5]) + 29223))))))))));
                    arr_9 [i_0] [i_0] [i_1] = (max((min((2591611586 <= 34721), (min(2591611551, var_3)))), (min(((((arr_6 [0] [i_1] [0] [0]) - (arr_5 [i_0] [i_1] [i_2])))), (max(var_9, var_2))))));
                    var_15 = ((((max((max(13169, 2591611551)), (min(var_2, 1703355749))))) / (min(((min((arr_8 [7] [i_1] [i_2]), (arr_5 [3] [i_1] [i_2])))), (min(var_11, 2591611567))))));
                    var_16 = (max((max((2113927120 * 300), ((593844565 / (arr_7 [i_0] [i_1] [i_1] [i_2]))))), (min((232 - 2442748751), (((var_8 + (arr_8 [i_0] [i_1] [i_2]))))))));
                    var_17 = (min(var_17, (((((((((arr_4 [i_0] [i_0]) && 232))) | (var_2 / 255))) >> (((max(((max((arr_3 [i_0] [2] [i_1]), (arr_1 [i_2] [i_1])))), (max(-7821022332147323596, 2016)))) - 518097320)))))));
                }
            }
        }
    }
    #pragma endscop
}
