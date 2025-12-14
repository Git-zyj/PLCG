/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (+((~(((-32767 - 1) ? 0 : var_1)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (var_1 >> (((~13513937749872925042) - 4932806323836626563)));
        var_19 = (max(var_19, (!137438953456)));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1 - 3] = (max((max(var_11, 1780957087)), (((-(((arr_2 [i_1]) * 17555)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [i_2] [i_4 - 1] [i_3] [12] [i_2] [i_2] = ((((((arr_10 [i_4 - 1] [i_2] [i_1 - 3] [1]) ? 254 : (arr_10 [i_4 - 1] [i_2] [i_1 - 3] [13])))) > var_15));
                        var_20 = (max(var_20, ((((!(arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_1 + 1])))))));
                        var_21 = (((((((arr_5 [11] [5]) | (arr_7 [i_2] [i_3] [i_2]))) ^ (((~(arr_2 [i_1])))))) ^ var_15));
                        var_22 = ((((4294967295 / (arr_6 [i_4 - 1]))) >> (1800725776 - 1800725758)));
                    }
                }
            }
        }
        arr_13 [i_1] [1] = (arr_3 [i_1]);
        var_23 = (((((arr_7 [i_1 - 1] [i_1 - 3] [i_1 - 1]) >> (((arr_7 [i_1] [i_1 - 1] [i_1 + 1]) - 8528543456205413681))))) ? (((1 >> (var_13 - 97)))) : var_14);
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = ((((((arr_15 [i_5 + 2]) & (arr_14 [i_5] [i_5 - 2])))) ? ((((!(arr_15 [i_5 - 1]))))) : (((((arr_15 [i_5 + 3]) << (var_6 + 4089736799690766690))) << (((~var_12) + 127))))));
        arr_17 [i_5 + 3] [i_5] = (((((((((arr_15 [i_5]) ? var_9 : 1073741823)) <= (((-(arr_14 [i_5] [4])))))))) != ((min(270215977642229760, var_10)))));
        var_24 = (arr_14 [21] [i_5 + 4]);
        var_25 = var_1;
        var_26 = (arr_14 [i_5 + 2] [i_5 - 1]);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (((arr_14 [i_6 - 2] [i_6 + 1]) || var_1));
        var_27 = ((~(arr_18 [i_6 + 1])));
    }
    #pragma endscop
}
