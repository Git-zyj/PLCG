/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = (((((arr_0 [i_0 - 1]) % 3848528668175133091)) | ((((2773522721 ? (arr_0 [18]) : 75)) % (((~(arr_1 [0]))))))));
        var_12 = (((arr_0 [i_0 + 1]) == (arr_0 [i_0 + 2])));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        var_13 = ((((((((arr_0 [i_1]) ? 1521444563 : -1170772338)) | 2147483647))) || ((!(arr_0 [i_1 + 2])))));
        arr_5 [i_1] = ((!(((4988349949045662157 << (((arr_2 [i_1 - 3] [i_1 - 4]) - 4221471033)))))));
    }
    var_14 = ((((((~var_1) * 3))) ? 6 : var_9));
    var_15 = ((((!var_6) ? (1890750047 && 470020179) : (-54 < var_5))));
    var_16 = ((-((-(-78 | 1586905925)))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_17 = -13;
                    arr_14 [i_4] [i_2] [0] [0] = -16777200;
                    var_18 = -324056295;
                }
            }
        }
    }
    #pragma endscop
}
