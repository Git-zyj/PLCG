/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59254
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
    var_11 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_6))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-6844))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) + ((-(((/* implicit */int) var_0))))))) : (27ULL)));
                                var_13 = ((/* implicit */long long int) min(((unsigned char)129), (((/* implicit */unsigned char) ((signed char) var_0)))));
                                arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24137)) ? (4465701845912095545LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    arr_22 [i_6] [i_7] = var_1;
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((signed char) 131040LL))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_7] [6LL] [i_7]))))))));
                                arr_30 [i_9] [i_9] [(short)6] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) == (((((((/* implicit */_Bool) var_0)) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_16 [i_5 - 2] [(short)9])))))));
                    var_16 &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 1])) / (((/* implicit */int) arr_0 [i_5 - 3] [i_5])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 3; i_11 < 8; i_11 += 2) 
                        {
                            arr_36 [i_11] = ((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_1))));
                            var_17 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) arr_16 [i_10] [i_10])) : (((/* implicit */int) (unsigned char)6)))) % (((arr_17 [i_5]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_1))))))));
                            var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) % (arr_2 [i_5])))))));
                        }
                        var_19 *= ((/* implicit */unsigned char) (signed char)-119);
                        arr_37 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */short) var_4);
                        arr_38 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */signed char) (unsigned char)218);
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_42 [i_5] [i_12] [i_12] [i_7] [i_5 - 3] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_5]), (var_0))))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_10] [10ULL]))) : (12196979524445262826ULL))))) % (((/* implicit */unsigned long long int) var_2))));
                            var_20 -= ((/* implicit */unsigned short) ((signed char) min(((~(((/* implicit */int) (unsigned char)48)))), (((/* implicit */int) min((arr_7 [i_6] [(signed char)19]), (arr_35 [i_5 - 2] [i_5] [i_5])))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6] [i_5 - 1] [(unsigned short)11] [i_5])) % (((/* implicit */int) arr_13 [i_7] [i_5 - 1] [i_5] [i_5]))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)116)) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_12])) ? (((/* implicit */int) arr_39 [i_5 + 2] [i_5 + 2] [i_7] [i_5 + 2] [i_12] [i_5 + 2])) : (((/* implicit */int) (signed char)-100))))))) : (arr_28 [i_6])));
                        }
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            arr_47 [i_5] [i_6] [i_6] [i_6] [(unsigned short)6] [i_10] [(_Bool)1] = ((/* implicit */signed char) var_4);
                            var_22 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (unsigned char)227)))));
                            arr_48 [i_5] [(_Bool)1] [(unsigned short)4] [i_6] [i_5] = ((/* implicit */short) (signed char)117);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */short) (~(((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_5] [i_5] [i_5] [i_5 - 3] [i_14])))))));
                            arr_51 [i_7] [i_6] [i_7] [i_10] [i_14] [i_6] = ((/* implicit */_Bool) ((signed char) var_10));
                        }
                    }
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) (unsigned short)3674)))))));
                        var_25 |= ((/* implicit */unsigned short) arr_6 [i_5] [i_5]);
                        arr_54 [(signed char)5] [i_6] [(unsigned char)3] [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? ((((_Bool)0) ? (338781030U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)0] [i_5] [(unsigned char)13] [i_7] [i_15]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5 - 3] [i_6] [i_6] [i_15]))))))))) ? ((-(var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6]))) : (max((arr_40 [i_5] [(short)3] [(signed char)3] [i_5]), (((/* implicit */unsigned int) var_6)))))))));
                        arr_55 [i_5] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */long long int) var_4);
                        arr_56 [i_15] [i_15] [i_15] [(short)2] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_7] [i_5] [i_7] [i_6])) * (((/* implicit */int) (_Bool)1))))) ? (((var_2) + (((/* implicit */long long int) max((1167365283U), (((/* implicit */unsigned int) arr_8 [i_5] [i_6] [i_7] [i_7]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-22235)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1]))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)3)))))))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)41399)))), ((~(((/* implicit */int) (signed char)-100)))))));
}
