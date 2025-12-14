/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77280
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */int) (short)16990)) | (((/* implicit */int) (short)-16990))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16961)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (2718152315U)))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                            arr_14 [i_2] = ((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0] [i_2])));
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (var_4)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1]);
                            var_15 *= ((/* implicit */signed char) arr_2 [i_0]);
                            var_16 = ((/* implicit */int) var_3);
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_17 = (+(((/* implicit */int) (signed char)-1)));
                            var_18 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [7]);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_26 [i_1] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_1]))));
                            arr_27 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_8);
                            var_19 = ((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1]);
                        }
                        for (signed char i_8 = 3; i_8 < 12; i_8 += 4) 
                        {
                            arr_32 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3] [(_Bool)1] [i_2] = ((/* implicit */long long int) (unsigned short)45764);
                            var_20 &= ((/* implicit */signed char) arr_20 [i_2] [i_1] [4ULL] [i_2] [(signed char)4]);
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 1; i_10 < 11; i_10 += 1) 
                        {
                            var_21 ^= ((/* implicit */short) (-(min((var_10), (((/* implicit */unsigned long long int) var_0))))));
                            arr_38 [i_0] [i_1] [i_0] [11] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) >= (((/* implicit */int) min(((unsigned short)19751), (((/* implicit */unsigned short) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))) : (min((arr_35 [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_6))))));
                            arr_39 [i_0 - 1] [i_0 - 1] [i_2] [i_9] [i_10] = ((/* implicit */int) var_1);
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) arr_19 [i_0] [i_0 - 1] [i_2]);
                            var_23 = ((/* implicit */int) arr_0 [2]);
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            arr_46 [i_0] [i_1] [i_2] [i_12] [i_12] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) var_1)) : (var_7)));
                            arr_47 [i_0 - 1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)16949)) ? (67108862) : (((/* implicit */int) (short)-16962))));
                            var_24 -= ((var_0) / (var_7));
                            var_25 *= ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)19765))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 1; i_13 < 12; i_13 += 1) 
                        {
                            var_26 &= var_9;
                            var_27 *= ((/* implicit */unsigned char) var_6);
                            var_28 = ((/* implicit */unsigned long long int) arr_5 [i_9]);
                            var_29 = ((/* implicit */unsigned char) var_9);
                        }
                        var_30 = ((/* implicit */int) (unsigned short)19771);
                        var_31 += min((var_0), (((/* implicit */int) var_6)));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 10; i_14 += 3) 
                    {
                        arr_54 [i_2] = ((/* implicit */unsigned long long int) ((var_5) || (((/* implicit */_Bool) (unsigned short)45764))));
                        var_32 ^= ((/* implicit */unsigned long long int) arr_30 [i_1]);
                        var_33 = ((/* implicit */unsigned short) (-(arr_51 [i_0 - 1] [i_0] [i_0] [i_2] [i_0 + 1] [i_14 - 1])));
                    }
                    var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (min((((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) var_11))))), (((((/* implicit */int) var_1)) + (((/* implicit */int) var_9))))))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((var_5) ? (((arr_43 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : ((+(var_0))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 3; i_15 < 18; i_15 += 1) 
    {
        for (unsigned int i_16 = 4; i_16 < 17; i_16 += 1) 
        {
            {
                arr_60 [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16957)))))) ? ((-(((/* implicit */int) arr_58 [i_15] [i_15])))) : (var_0)))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)16990)) * (((/* implicit */int) (short)16975)))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    var_36 = ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        for (int i_19 = 1; i_19 < 20; i_19 += 2) 
                        {
                            {
                                arr_69 [i_18] [i_16] [(unsigned short)11] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (arr_59 [i_16 + 3] [i_19 + 1]) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_3)) : ((~((+(((/* implicit */int) var_6))))))));
                                arr_70 [i_16] = ((/* implicit */unsigned long long int) arr_63 [i_15] [i_16 + 3] [i_16 + 3] [i_19 - 1]);
                                var_37 *= ((/* implicit */_Bool) (unsigned short)45764);
                                var_38 = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_63 [i_15 + 2] [i_15] [i_16 + 3] [i_16 + 3]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-16990)) : (((/* implicit */int) (short)-16961))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16967)) ? (((/* implicit */int) (short)-16976)) : (((/* implicit */int) (short)16990))))) : (min((((/* implicit */long long int) var_7)), (var_11)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_40 *= ((/* implicit */_Bool) var_11);
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_16])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-75))))) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-16975)))) : (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)-16990))))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
                        {
                            var_42 = ((/* implicit */signed char) ((((arr_77 [i_15 + 2] [i_15 + 1] [i_16 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_15 + 2] [i_15 + 3] [i_16 + 2]))) : (arr_62 [i_15 + 1] [i_15 + 3]))) + (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_15 + 1] [i_15 + 1] [i_16 + 4])))));
                            var_43 -= ((/* implicit */signed char) var_10);
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 21; i_23 += 1) 
                        {
                            var_44 = ((/* implicit */short) (~(((/* implicit */int) (short)16981))));
                            var_45 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)));
                            var_46 -= ((/* implicit */short) var_8);
                        }
                        arr_82 [i_15 - 1] [i_16] [i_17] [i_16] [i_15 - 1] = ((/* implicit */int) arr_58 [i_16] [i_20]);
                    }
                    for (short i_24 = 2; i_24 < 20; i_24 += 2) 
                    {
                        arr_86 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = var_6;
                        var_47 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((+(var_0))) : (((/* implicit */int) var_9))));
                    }
                }
                var_48 = ((/* implicit */signed char) (short)16994);
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned short) (-(var_11)));
    var_50 &= ((/* implicit */_Bool) (short)-16984);
}
