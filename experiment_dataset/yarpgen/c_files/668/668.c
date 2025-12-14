/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_4) ? ((((var_5 <= var_3) > (1790574924 ^ -1790574904)))) : 1));
    var_13 = (min(var_13, (((596052765217122800 ? var_6 : (((!(((-5770958401099047788 ? var_1 : var_2)))))))))));
    var_14 = max((max(var_6, (~var_5))), var_4);

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 += ((-((((arr_2 [i_0] [0]) ? var_7 : (arr_1 [i_0] [13]))))));
        arr_3 [i_0] = (max((+-1790574903), (!1)));
        var_16 = (((3980740156 > var_1) ? (max(var_7, (arr_2 [i_0] [i_0]))) : (((arr_0 [i_0]) ? ((var_10 ? var_11 : 596052765217122796)) : 3))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_4 [i_1] [i_1]);
        arr_7 [i_1] = ((!((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
        arr_8 [i_1] [i_1] = ((~(((!var_6) ? ((var_6 ? 0 : -122)) : var_7))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_18 += arr_12 [i_2] [i_2] [i_3 - 1];
            arr_14 [i_3 + 2] [i_2] = ((!(((0 ? 20436 : (arr_9 [i_2]))))));
            arr_15 [i_2] = ((var_8 ? (arr_2 [i_3 + 2] [i_3 + 3]) : (arr_2 [i_3 + 1] [i_3 - 2])));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_22 [i_2] [i_4] [i_5] [5] [0] = ((-(1790574892 + 0)));
                        var_19 += ((!((((!var_11) ? ((var_2 / (arr_19 [i_2] [12] [i_2]))) : (!1))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                {
                    arr_27 [i_2] [0] [i_8 - 1] = ((~((-1 ? -315438752 : 1))));
                    arr_28 [5] [i_7] [10] = ((!(+-1790574904)));
                    arr_29 [9] [i_7] [i_8 + 1] [i_7] = ((((((min((arr_10 [17]), 1)) - var_5))) ? -11 : (arr_11 [11])));
                }
            }
        }
        var_20 += (arr_21 [16] [i_2] [16] [11]);
    }
    #pragma endscop
}
