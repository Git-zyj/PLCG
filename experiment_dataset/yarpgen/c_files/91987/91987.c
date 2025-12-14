/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((!((min((!7438622156722605230), (max(var_9, var_11)))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_14 += (~(max((~var_5), ((max(8545, (arr_1 [i_0 - 3] [i_0 + 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 = ((+((~(min((arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 + 1]), 7307490761471117657))))));
                        arr_8 [i_0 - 3] [i_1] [i_2] [i_2] [i_3] [i_3] = (min((min(((min((arr_2 [i_3]), (arr_2 [i_1])))), (min((arr_4 [i_0 - 4]), (arr_1 [i_2] [i_1]))))), ((min((!var_8), (max(var_6, var_10)))))));
                    }
                }
            }
        }
        var_16 *= min((!-1141311363375406904), (~1385135592));
        arr_9 [i_0 - 4] = (max(((min(((~(arr_6 [i_0 - 4] [i_0 - 3] [i_0 + 1] [i_0 - 2]))), (arr_2 [i_0 - 2])))), (max((((~(arr_1 [i_0 + 1] [i_0 - 2])))), ((-(arr_0 [i_0 + 1])))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = max((((!((max(-8550, 2745774562130630070)))))), (min((max((arr_10 [i_4]), var_7)), (((!(arr_1 [i_4] [i_4])))))));
        var_17 = ((!((max((((~(arr_3 [i_4] [i_4] [i_4])))), (~437400571))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_18 = (min(((~(min(108263295, 92)))), (max(1365109080, (max(2581879820, (arr_7 [i_7] [i_6 + 2] [i_5] [i_5] [i_5] [i_4])))))));
                        arr_22 [i_4] [i_5] [i_6 + 1] [i_7] [i_4] &= (min(((~((~(arr_15 [i_4]))))), (((!(~2581879798))))));
                        var_19 = (-((+(min((arr_2 [i_4]), (arr_20 [i_7] [i_6 - 1] [i_5] [i_4] [i_4]))))));
                    }
                    arr_23 [i_4] [i_4] [i_4] = (((-(max(3949203445, 2581879820)))));
                    arr_24 [i_5] [i_4] = ((~(max(((min(441217919908567475, (arr_14 [i_4])))), (~3183967199159981036)))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_20 = (max(((max((!1109936922), (~2514290236)))), (((-(arr_0 [i_8]))))));
        var_21 = ((min(-17163473826020731121, 25028)));
        arr_28 [i_8] = (((~(~var_11))));
    }
    var_22 += (max((min(-31332, var_12)), (~-var_2)));
    var_23 *= (max((!17806548935967870323), (max((min(var_2, var_7)), (max(var_4, var_6))))));
    #pragma endscop
}
