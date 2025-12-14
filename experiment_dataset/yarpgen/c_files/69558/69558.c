/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max((var_1 ^ -7861261034266156274), -3742881952552421914)));
    var_12 = max(((~((var_6 ? var_2 : var_5)))), (((251 >> (-32516 + 32543)))));
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((((((((arr_7 [i_0] [9]) != var_9)))) == (arr_4 [i_0])))) ^ (((-2493156947569097859 == (arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [i_3] = (max(180, 8229));
                                arr_16 [i_0] [i_1] [i_4] [i_4] [i_0] [i_0] = ((49 ? -6071506317654105233 : -2821265864769980873));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = var_3;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_14 = ((-5430518434189246426 ? 4294967295 : (-32767 - 1)));
                    arr_20 [i_0] [i_1] [i_5] = (max((max(((1290771539 ? 5 : -8735132547916472600)), (((6071506317654105251 ? (-32767 - 1) : 1))))), 3004195745));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_15 = var_4;
                    var_16 = ((((~(arr_3 [i_6] [i_1])))) & (~2513159137527452619));
                    arr_23 [i_0] [i_0] [i_0] = (min((max(5, (arr_7 [i_0] [i_6]))), -32751));

                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        arr_26 [i_0] [i_6] = ((-((((((arr_3 [i_1] [10]) ? (arr_22 [7] [i_1]) : (arr_4 [i_7])))) ? (1 ^ 4) : (arr_24 [20] [i_1] [5] [0] [0])))));
                        arr_27 [i_0] [i_0] = (((arr_13 [14] [i_0] [i_7 - 3] [i_7 + 2] [i_7 - 3] [i_7] [i_7]) ? 16383 : (~954252614)));
                    }
                    arr_28 [i_1] = (~((((arr_2 [i_0]) || (arr_24 [i_0] [i_0] [i_0] [i_1] [i_0])))));
                }
                var_17 = ((((((arr_24 [i_0] [i_0] [i_1] [i_1] [i_1]) ? var_5 : (arr_24 [1] [i_1] [i_0] [i_0] [i_0])))) ? (arr_18 [i_1]) : ((3496931026635204637 ^ (var_2 == var_7)))));
            }
        }
    }
    #pragma endscop
}
