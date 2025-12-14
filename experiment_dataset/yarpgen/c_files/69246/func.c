/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69246
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) min((var_15), (var_14)))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)124)) << (((/* implicit */int) (!(((/* implicit */_Bool) 1233506927)))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) var_5))))))) ? (min((((var_10) - (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) min((var_12), ((-(-1233506928))))))));
                    var_23 -= (+(((14403029568538982725ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (unsigned char)131))))) >= (((3) | (min((-32), (((/* implicit */int) (unsigned char)131))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            var_25 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) % (var_11));
                            var_26 = var_8;
                            var_27 = ((/* implicit */long long int) (~((-(var_16)))));
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_28 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_0] [i_1] [1U] [i_3])) | (((/* implicit */int) var_14)))) / (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])) & (var_19)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [7]))))) : (var_16)))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (((((~(var_9))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) & (((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3])))))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_5] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned short)65518)) : (((((/* implicit */_Bool) var_1)) ? (((0) % (-1233506927))) : (((/* implicit */int) (unsigned short)17))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) ((14583145495487671041ULL) % (((/* implicit */unsigned long long int) var_16)))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)91)) != (((/* implicit */int) (signed char)0))));
                            var_32 -= ((/* implicit */short) var_8);
                            var_33 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_12))))) != (((/* implicit */int) var_15)))))));
                        }
                        arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (1873528123) : ((-(((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_0]))))))) + (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) - (var_8)))));
                        var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 2972532608U)) && (((/* implicit */_Bool) var_7)))))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 18; i_9 += 3) 
                        {
                            arr_28 [i_9] [i_8] [i_8] [i_1] = ((/* implicit */signed char) var_18);
                            var_35 += ((/* implicit */short) ((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)175)) ? (arr_4 [i_0] [i_7] [i_0]) : (((/* implicit */int) var_15))));
                            arr_31 [i_10] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */signed char) (unsigned short)47272);
                            var_37 = ((((/* implicit */int) arr_9 [i_0] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_1])));
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_7] [i_8] [i_10]))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_39 = var_1;
                            var_40 *= ((/* implicit */unsigned short) var_16);
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))));
                            var_42 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) -1233506928)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11] [i_1] [i_1] [i_1] [i_11]))) : (var_10))) : (((arr_30 [i_11] [i_11] [i_11] [i_11] [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8]))))));
                        }
                        var_43 = ((/* implicit */signed char) var_1);
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_18)) - (823)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_38 [i_0] [i_1] [i_1] [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)131)) >> (((-1873528123) + (1873528143)))));
                        arr_39 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) var_5)) <= (var_7)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7])) : (((/* implicit */int) var_6)))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_45 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) (unsigned short)17)))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_35 [i_7]))))))));
                        arr_43 [i_1] [i_1] [i_7] [i_13] [i_1] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_7] [i_13] [i_13])))) - ((-(((/* implicit */int) var_1))))))), (((max((((/* implicit */unsigned long long int) var_6)), (4ULL))) ^ (((/* implicit */unsigned long long int) ((-7219117087316300509LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
                        var_46 ^= ((/* implicit */short) ((((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (unsigned char)208))))) ^ (var_0))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3))))) + (((/* implicit */int) var_2)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_47 = ((/* implicit */signed char) var_11);
                        var_48 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_47 [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((-97934304), (((/* implicit */int) (signed char)4))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_3)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                    arr_48 [i_0] [i_1] [i_7] = ((/* implicit */short) (-((+((-(var_19)))))));
                }
            }
        } 
    } 
    var_49 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_5))) + (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)48033)) : (((/* implicit */int) (_Bool)0)))))));
    var_50 = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */_Bool) -1233506927)) || (((/* implicit */_Bool) (short)3))))))) & ((+((~(((/* implicit */int) var_4))))))));
}
