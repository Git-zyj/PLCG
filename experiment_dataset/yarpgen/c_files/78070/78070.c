/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = ((var_11 && (((var_6 ? var_3 : (arr_2 [i_0] [i_1] [i_2]))))));
                    var_15 = (min(var_15, ((((((~var_9) ? (arr_2 [i_0] [i_0] [i_0]) : ((max(var_4, var_0)))))) ? (((var_10 ? 16401 : var_5))) : (((arr_4 [i_0] [i_1]) ? var_10 : (arr_4 [i_0] [i_1])))))));
                }
            }
        }
    }
    var_16 = (max(var_16, (3740688512585848447 + 15)));

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = (((var_5 ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3]))));
        var_18 = ((((max((!var_1), (max(17697421517924129789, 17697421517924129774))))) ? (((((var_13 ? var_3 : var_6))) ? (min(var_1, 5692832737381511467)) : (~var_1))) : (((var_2 ? 22 : (arr_7 [i_3]))))));
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        var_19 -= (~var_6);
        var_20 = (((arr_9 [i_4 - 4]) | (min(((7302634868020076745 << (5692832737381511443 - 5692832737381511414))), (((var_8 ? var_1 : var_5)))))));
        var_21 = ((-var_1 ? (var_12 >= var_4) : (min((~-1), (~var_5)))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_13 [i_5] = ((40614 ? -5179374492780156086 : -1698741267));
        var_22 = (min((arr_10 [i_5] [i_5]), var_6));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_23 = 255;
                    var_24 = var_0;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_25 = var_6;
                    var_26 = (min(var_26, ((((!var_0) ? (((~(arr_7 [i_5])))) : ((var_13 ? var_7 : var_6)))))));
                    var_27 ^= ((!((max(var_11, (~82))))));
                    var_28 ^= (((((~(arr_11 [i_5])))) ? var_13 : (arr_16 [i_5] [i_5] [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
