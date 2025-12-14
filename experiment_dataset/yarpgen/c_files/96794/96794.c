/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((!(arr_2 [i_1]))) && ((6620275009019611178 && (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((((max((min((arr_8 [i_0] [13] [i_0] [i_3]), (arr_10 [3] [i_1] [i_2]))), 11826469064689940430))) && ((((arr_1 [i_3 + 1]) ? 11826469064689940430 : (arr_1 [i_3 + 1])))))))));
                            arr_14 [i_3] = 6620275009019611204;
                            arr_15 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] = (max(64254, (((arr_8 [i_2 - 1] [i_1] [i_2] [10]) / (arr_8 [i_2 - 1] [i_1] [i_2 + 1] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((111 ? (((64254 ? 4 : 12))) : (max(var_6, 11826469064689940442))))) ? var_15 : (!11826469064689940467)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_27 [i_4] = 3726158610;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_18 = ((((max(((max(52, (arr_20 [i_4] [i_5])))), ((1282 ? var_7 : 1))))) ? (min((arr_18 [6]), ((17456260421357135134 ? 238 : (arr_21 [i_4]))))) : (((((((arr_19 [i_4]) ^ 7872))) ? (arr_32 [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 2] [i_5 + 2] [i_6]) : ((~(arr_17 [i_5 + 1]))))))));
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_8] = var_2;
                                var_19 = (max(var_19, (((((((3175567093 > (arr_16 [i_5 + 1]))))) >= (((arr_30 [i_7] [i_7] [i_7] [i_5 + 3] [i_7] [i_5]) & (arr_16 [i_5 + 1]))))))));
                                var_20 = max((((((65535 >> (((arr_12 [5] [i_7] [i_7]) - 6866044190455917049)))) < ((247 ? -18542 : 23811))))), (max((((21 > (arr_22 [i_7] [i_6])))), (((arr_5 [17]) ? (arr_25 [i_4] [13] [i_4]) : (arr_10 [i_6] [i_6] [i_6]))))));
                            }
                        }
                    }
                }
                arr_34 [i_4] [5] = 2901514527;
                arr_35 [i_4] [i_4] = (((var_7 == 2) > (max((((arr_32 [i_4] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [16]) & var_8)), ((1282 ? 12800 : 4390))))));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
