/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79425
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) max((4224113405U), (4224113389U)))) ? (((((/* implicit */_Bool) 65535U)) ? (4224113389U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (short)10217))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_6)))))));
                arr_6 [i_0] &= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) var_2)), (70853877U))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned short) 4224113389U));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21614))) : (arr_9 [i_1] [i_1] [i_1 - 1])));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) arr_2 [i_1 - 1]);
                    }
                    for (int i_4 = 1; i_4 < 7; i_4 += 3) 
                    {
                        var_14 += ((/* implicit */int) (unsigned char)128);
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = -6972543299670021967LL;
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (8334072140913425665ULL))))));
                            var_16 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (short i_6 = 4; i_6 < 7; i_6 += 4) 
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44080)) ? (((/* implicit */int) (short)27293)) : (((/* implicit */int) (short)21614))));
                            arr_26 [i_1] = ((/* implicit */unsigned short) 16744448);
                        }
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)23613)) || (((/* implicit */_Bool) var_2))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) (short)-27297))) : (((/* implicit */int) (short)14747)))))));
                        arr_27 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (short)-10218);
                    }
                    arr_28 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_0] [i_1] [i_0] [i_0])) ? (((unsigned long long int) (unsigned short)21839)) : (((/* implicit */unsigned long long int) 4294901760U))));
                    var_19 = ((/* implicit */unsigned int) (unsigned char)255);
                }
                for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    var_20 *= ((/* implicit */short) min((((((((/* implicit */_Bool) var_3)) ? (4224113416U) : (((/* implicit */unsigned int) -1461708904)))) & (70853876U))), (((/* implicit */unsigned int) arr_10 [i_0] [i_1 + 2] [i_7 - 1] [i_0] [i_1 + 2] [i_1 + 2]))));
                    var_21 = ((/* implicit */short) 4999866612982855143LL);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_39 [i_0] [i_8] [i_1] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) -913163067)), (((unsigned long long int) 70853871U)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)240)), (arr_33 [i_0] [i_1] [i_8 + 2] [i_8]))))));
                                arr_40 [i_0] [i_0] [i_0] [i_8 - 1] [(unsigned short)10] &= ((/* implicit */int) (unsigned short)44080);
                                arr_41 [i_1] [i_9] [i_0] [i_7] [i_0] [i_1] = ((/* implicit */_Bool) max((((unsigned int) arr_20 [i_7 + 1] [i_1] [i_1] [i_1] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4224113405U)) || (arr_20 [i_7 - 1] [i_1] [i_1] [i_7] [i_1]))))));
                                arr_42 [i_0] [i_1] [i_1] [i_7] [i_1] [i_1] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)250)), (2181431069507584ULL)));
                                var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_21 [i_8 + 1] [i_8 + 2] [i_0]), (((/* implicit */int) (short)8))))) ? (arr_21 [i_8 + 2] [i_8 + 2] [i_0]) : (((/* implicit */int) ((arr_21 [i_8 + 2] [i_8 + 2] [i_0]) == (((/* implicit */int) arr_11 [i_1 - 1] [i_7 - 1] [i_0] [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    var_23 = max((((((/* implicit */_Bool) 4294901769U)) ? (((/* implicit */unsigned long long int) arr_38 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1 - 1])) : (126705829213468958ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 1]))) % (var_1))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        arr_45 [i_10] = ((((/* implicit */_Bool) ((unsigned char) 536838144ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536838170ULL)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)58))))) : (9099321384315223740ULL));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1436)) : (((/* implicit */int) (_Bool)0)))))));
                    arr_51 [i_10] [i_10] [i_10] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (18446744073709551612ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_13 = 2; i_13 < 14; i_13 += 2) 
    {
        arr_55 [i_13] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (short)2410)) ? (((/* implicit */int) arr_53 [i_13])) : (((/* implicit */int) (signed char)-28)))));
        arr_56 [i_13] = ((/* implicit */unsigned int) 9099321384315223733ULL);
    }
}
