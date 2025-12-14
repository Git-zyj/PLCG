/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((var_16 > ((7632360961437480140 ? 5419270656522735770 : 7632360961437480155))));
                arr_8 [i_0 - 2] [i_0 - 2] [i_0] = 22713;
                var_20 = ((!((min(var_6, (arr_0 [i_0]))))));
                var_21 = ((((-7632360961437480153 / ((1044031991518983697 ? 7632360961437480140 : -368567008133528123)))) > (min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
                var_22 = (max(var_22, (!var_4)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] = (min(((((arr_11 [i_2 - 1] [i_2]) | (arr_11 [i_2 + 3] [i_2])))), (((arr_11 [i_2 + 2] [i_2]) ? var_18 : 7632360961437480140))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_23 = ((arr_19 [i_5 + 1] [i_2] [i_2] [i_2 + 1]) ? (arr_20 [i_2] [i_2] [i_4]) : (((((-1766103055007331949 ? (arr_19 [i_5] [i_3] [i_2] [i_5 - 1]) : (arr_20 [i_2] [i_2] [i_6])))) ? var_14 : -var_13)));
                                var_24 = (min(var_24, (7632360961437480145 / -4311920703653057904)));
                                var_25 = (max(var_25, var_15));
                                arr_24 [i_2] [i_2] [i_4] [i_4] [i_2] = ((~((4311920703653057903 ? (arr_21 [i_2 + 4] [i_2 + 1] [i_2 + 4]) : (arr_21 [i_2 - 1] [i_2 + 1] [i_2 + 2])))));
                            }
                            var_26 = (arr_18 [i_2] [i_3] [i_4] [i_2]);
                            arr_25 [i_4] [i_2 - 1] [i_2] = ((-(~0)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                arr_31 [i_7] = (~(arr_18 [i_7] [i_7] [i_8] [i_8]));
                arr_32 [i_7] [i_7] [i_7] = ((((((((arr_30 [i_7] [i_7]) ? (arr_19 [i_8] [i_7] [i_7] [i_7]) : (arr_30 [i_7] [i_7])))) == -7632360961437480143)) ? (min((min(-3298535266076582004, 18741)), (!0))) : (((min((arr_16 [i_7] [i_7] [i_7] [i_7]), ((((arr_11 [i_7] [i_7]) == (arr_12 [i_7] [i_8]))))))))));
                var_27 = (((arr_0 [i_7]) | (((arr_0 [i_7]) ? (arr_0 [i_8]) : (arr_0 [i_7])))));
                var_28 = (arr_16 [i_8] [i_8] [i_7] [i_8]);
            }
        }
    }
    #pragma endscop
}
