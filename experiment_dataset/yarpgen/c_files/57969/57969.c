/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_0] = (((((arr_7 [i_1] [i_2] [i_1] [i_1]) ? var_16 : ((((arr_7 [i_1] [i_2] [i_1] [i_1]) ? var_12 : (arr_2 [i_1] [9] [i_1]))))))) ? ((1397352877 ? 835833342281378065 : 17610910731428173538)) : (((~var_18) - var_10)));
                        var_19 *= ((((((((arr_0 [i_0]) | var_3))) ? (arr_4 [i_2] [i_2] [i_0]) : (((17610910731428173551 ? var_10 : 1397352877))))) - (((((3458764513820540928 ? (arr_0 [1]) : 49117)) - (((var_5 | (arr_8 [i_3] [i_2] [i_1 + 1] [i_1] [i_0])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_20 = (((((4 ? ((57370 ? (arr_12 [0] [i_0] [0] [i_0]) : var_16)) : (arr_7 [i_1] [i_5] [i_4] [i_1])))) ? ((((var_6 ^ (arr_1 [i_0]))) - ((var_8 ? 46256 : (arr_14 [i_5] [i_1] [i_2] [i_1] [i_0]))))) : (((((min(var_3, -281537260))) ? (((arr_12 [i_5] [i_2] [i_2] [8]) ? (arr_13 [i_5] [i_4] [i_1] [i_1] [i_0]) : 252)) : ((max(var_6, var_5))))))));
                                arr_15 [i_1] [i_4] [2] [8] [i_1] = (16418 | 24576);
                                var_21 = ((22971 ? 49999 : 2211329265693185324));
                                var_22 = ((((((8879523606456338620 | var_15) ? ((24576 ? 6 : 1)) : ((((arr_4 [i_5] [i_4] [i_0]) != var_12)))))) ? (((((arr_7 [i_1] [i_2] [i_1] [i_1]) ? var_18 : (arr_12 [i_5] [i_2] [i_1] [i_0]))) - 3632941036)) : (((((((arr_7 [i_1] [i_2] [i_1] [i_1]) | (arr_5 [i_4] [i_2])))) ? (max(2897614434, -1556893491)) : var_4)))));
                            }
                        }
                    }
                }
                var_23 = ((((min((((54006 ? (arr_2 [i_1] [i_0] [i_1]) : (arr_7 [i_1] [i_1] [i_1 - 3] [i_1])))), (min(var_14, var_16))))) ? ((((25165 != (arr_14 [i_1] [i_1 + 4] [i_1 - 1] [0] [i_1 + 4]))))) : ((+((65320 ? (arr_8 [i_1] [i_0] [i_1] [i_0] [i_0]) : (arr_0 [i_0])))))));
            }
        }
    }
    var_24 = (((((((min(var_17, 46))) ? ((var_4 ? 4739800598259381896 : var_10)) : 1))) ? ((((~var_6) ? var_12 : var_3))) : (((129024 != 7225275087199854266) ? (max(var_16, var_0)) : 129024))));
    #pragma endscop
}
