/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (~((-6562407353278459497 ? (var_14 - -6562407353278459503) : var_4)));
                    var_21 = ((max(var_15, (arr_0 [i_1 - 2]))) / ((7127229480736829166 ? -6562407353278459497 : -7127229480736829166)));
                    arr_6 [2] [i_1 - 3] [i_1 - 2] [i_2] = (((-(max((arr_3 [i_0] [8] [i_2]), (arr_5 [i_2] [i_1] [3]))))) | (-665115053501371852 > -8998799088630866770));
                }
            }
        }
    }
    var_22 = (~var_18);

    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] &= var_18;
        arr_12 [i_3 + 2] = (879811646034550477 ? -6562407353278459485 : -6562407353278459500);
        var_23 ^= (var_4 < -348772034452079596);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_24 = var_14;
                    arr_18 [i_3 + 2] = arr_15 [i_5];
                    var_25 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
