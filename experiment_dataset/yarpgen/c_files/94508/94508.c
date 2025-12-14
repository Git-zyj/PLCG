/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((var_8 && var_2) ? 48 : (max(232, var_2))))) && var_4));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1 + 3] [6] = ((((((arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [0] [i_0]) >> (198 - 177)))) ? 1 : ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [6] [i_0]) ? (arr_5 [i_1] [i_2]) : 240))) ? 1236984413 : (max(3057982883, (arr_9 [i_0] [i_1 - 1] [i_1] [i_3] [7])))))));
                        arr_11 [1] [9] [i_1] = (arr_2 [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_12 = ((((+(((arr_13 [0] [2] [i_2] [i_1] [i_0]) + var_2)))) != (((((arr_6 [i_1] [i_1] [i_2] [i_4] [i_1 + 1]) != (arr_6 [i_1] [i_1] [1] [9] [i_1 + 1])))))));
                        arr_14 [i_1] [i_1] [i_2] = ((((!(arr_9 [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))) ? (((~(1 != var_9)))) : (((((((arr_8 [13] [i_1 - 1] [i_2] [i_4] [i_1] [i_4]) && (arr_5 [i_0] [i_2]))))) * (max((arr_7 [4] [4] [i_1] [i_4]), 1))))));
                        arr_15 [i_1] [10] [10] [i_4] = (((((var_1 ? (~240) : (arr_9 [i_0] [i_1] [i_1] [i_4] [i_1 + 1])))) ? (((var_2 >> (-3134659472546909118 - 1594307618)))) : (min((arr_0 [i_1 + 3]), var_5))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_13 = (((((((!var_0) && var_7)))) + (arr_9 [i_0] [i_0] [i_1] [i_2] [i_1])));
                        var_14 &= (((((!(arr_9 [i_5] [i_0] [i_5] [i_1] [i_0])))) != (!-7836736075515383883)));
                        var_15 += 19;
                    }
                    var_16 ^= 24;
                    var_17 = (min(var_17, (arr_2 [0])));
                    var_18 = ((((2952516428 >> (var_3 * var_7))) * (((!(arr_18 [4] [i_2] [4] [i_2] [i_2]))))));
                    arr_19 [i_1] [i_1] [i_2] = (((((((1236984413 * (arr_18 [i_0] [i_0] [i_0] [i_0] [0]))) / (max(var_2, var_0))))) ? (((((3134659472546909119 || (arr_5 [i_2] [i_1])))) + (arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 2]))) : var_9));
                }
            }
        }
        var_19 = (((+-290573667503717148) ? (((arr_1 [1] [1]) * var_4)) : 962717509));
    }
    var_20 = var_7;
    #pragma endscop
}
