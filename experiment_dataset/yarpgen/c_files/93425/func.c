/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93425
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)58325)))) << (((((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_7)))) + (13659)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)30976))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (2566622552543386217LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_5 [i_2] [i_0]))) - (((/* implicit */int) ((unsigned char) -2566622552543386205LL)))))) : (max((((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1))))))));
                            var_13 = ((/* implicit */short) var_0);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */short) var_11)), ((short)-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)-17)))))) : (min((2668417964U), (((/* implicit */unsigned int) (unsigned short)65529))))))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (unsigned char)167))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)4032)), (11180684127595325693ULL))) : (((/* implicit */unsigned long long int) ((837531274) % (((/* implicit */int) (short)9228))))))))))));
                    }
                    var_15 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))));
                    arr_20 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) 5843603845215391227ULL);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2566622552543386214LL)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) > (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)5)), (93749427569803941ULL)))) ? (var_8) : (var_9)))));
                }
            }
        } 
    } 
    var_17 = (-(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) + (93749427569803941ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
    var_18 = ((/* implicit */unsigned char) 2566622552543386205LL);
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            {
                arr_26 [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (~(var_4)));
                                arr_36 [i_6] = ((/* implicit */int) ((short) ((arr_17 [i_9 - 1] [i_10] [i_10] [i_9 - 1] [i_10]) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_6] [i_6] [i_8] [i_9]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 3) 
                {
                    var_20 = ((/* implicit */short) ((unsigned long long int) var_12));
                    var_21 = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                            arr_47 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_6] [i_7] [i_11] [i_12]))));
                            arr_48 [i_6] [i_12] [i_6] [(short)4] [(short)4] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)1)))) % (arr_33 [i_7] [i_11 - 2] [i_11 - 2] [i_6] [i_11 - 2] [i_11 - 2])));
                        }
                        for (unsigned short i_14 = 2; i_14 < 11; i_14 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))));
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((long long int) -2566622552543386211LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102)))));
                            arr_53 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_8);
                            var_25 = var_8;
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_57 [i_6] [i_6] [i_12] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_31 [i_11 - 1] [i_11 - 1] [i_11] [i_12] [12] [i_15])))));
                            arr_58 [i_15] [i_12] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)14))))) : ((-(2566622552543386217LL)))));
                            var_26 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_55 [i_12] [i_12] [i_6] [i_12] [i_12] [i_7] [(short)6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) & (((((/* implicit */int) (signed char)17)) * (((/* implicit */int) var_2))))));
                            arr_59 [i_15] [i_6] [i_11] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 + 1] [i_15 + 1] [i_11 + 1]))));
                        }
                        var_27 = ((/* implicit */long long int) (-(((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_6] [i_7] [i_11] [i_12] [i_7])))))));
                        var_28 = ((/* implicit */unsigned int) (unsigned short)4985);
                        arr_60 [i_6] [i_11] [i_7] [i_6] = ((/* implicit */short) 11ULL);
                    }
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_6] [i_7] [i_11] [i_11] [i_16] [i_16] [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_55 [i_16] [i_16] [i_11 - 2] [i_11] [i_11] [i_11 - 1] [i_6])) >= (((/* implicit */int) arr_0 [i_11 + 1] [i_16])))))) : ((~(arr_33 [i_11 - 2] [i_11] [i_6] [i_6] [i_11 - 1] [i_11])))));
                        arr_63 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_11] [i_11 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_11] [i_11 + 1])) ? (((/* implicit */int) arr_5 [i_11] [i_11 + 1])) : (((/* implicit */int) arr_38 [i_6])))) : (((((/* implicit */_Bool) arr_38 [i_6])) ? (((/* implicit */int) arr_5 [i_11] [i_11 - 1])) : (((/* implicit */int) var_2))))));
                    }
                    for (unsigned short i_17 = 4; i_17 < 12; i_17 += 4) 
                    {
                        var_30 = (~(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)65528)))));
                        var_31 |= ((/* implicit */unsigned char) var_9);
                        arr_66 [i_6] [i_7] [i_6] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_29 [i_6] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) 8057350643819608081LL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5843603845215391242ULL)) && (((/* implicit */_Bool) (short)3)))))) : (max((18352994646139747675ULL), (((/* implicit */unsigned long long int) arr_33 [i_11] [i_11] [(unsigned char)0] [i_6] [i_11] [(unsigned char)0]))))));
                    }
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_0))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) min((var_33), (var_4)));
}
