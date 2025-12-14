/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 <= ((min(((31421 ? var_0 : 234881024)), ((max(var_11, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_21 = (min(var_21, var_14));
                                var_22 = ((1235941126 >> (4126637638403832966 - 4126637638403832938)));
                            }
                            var_23 = (((((((var_0 ? (arr_0 [i_0]) : (arr_9 [i_3] [i_1] [i_2] [i_2] [i_2])))) && var_12)) ? (((((820559319 / 13) > (2147483647 > 5423223496726121331))))) : ((min(154, 13596133369160569701)))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_15 [6] |= (((((2042322630687686467 ? 10852703148871066421 : -304520472))) ? (arr_9 [i_5] [i_1] [i_1] [i_0] [i_0]) : (((min(var_15, 110))))));
                    var_24 = ((((((arr_9 [i_0] [i_0] [i_1] [i_1] [i_5]) ? var_3 : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_5])))) ? ((((arr_8 [i_1] [i_5]) ? (arr_8 [i_0] [i_0]) : -819443193))) : (((arr_9 [i_0] [i_0] [i_0] [i_1] [i_5]) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_17))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            {
                var_25 = (arr_18 [i_6] [i_6]);
                var_26 += (min(((~(arr_20 [18] [i_7]))), var_15));

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    arr_23 [i_6] = (max((min(var_7, -118)), (((var_14 || ((min(0, -534651927))))))));
                    var_27 = (min(var_9, ((((((~(arr_21 [i_6] [i_6] [i_6])))) && (3950861852342814863 & 114))))));
                    var_28 = (min(var_28, (((-((-(arr_20 [18] [18]))))))));
                    var_29 = (((arr_18 [i_7] [i_6]) ? (arr_18 [i_7 - 1] [i_6]) : (min((arr_18 [i_7] [i_6]), (arr_18 [i_7] [i_6])))));
                    var_30 = (max(1262768153, -2147483637));
                }
                var_31 = ((var_5 ? (((1670077422 ? var_3 : 0))) : (min((arr_22 [i_6] [i_6] [i_6] [i_7]), (max(var_8, var_16))))));
                arr_24 [i_6] [i_7 + 1] [i_6] = (max((arr_20 [i_6] [i_6]), (93 == var_7)));
            }
        }
    }
    var_32 |= var_19;
    #pragma endscop
}
