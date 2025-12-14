/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69842
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
    var_18 *= ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : ((-2147483647 - 1)))), (((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_16))))))));
    var_19 = ((/* implicit */unsigned int) 17102433516809492886ULL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7994)) ? (((/* implicit */int) var_13)) : (464075720)))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_14 [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((unsigned int) var_16)), (((/* implicit */unsigned int) ((arr_7 [i_0]) ? (1442971244) : (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12050))) : (1145599158U)))) : (var_2)))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (_Bool)0))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (2815666660U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((var_9), (var_5)))))) : (max((((/* implicit */unsigned long long int) ((_Bool) var_10))), (var_2)))));
                            var_23 = max((((/* implicit */int) ((signed char) var_12))), (((int) ((unsigned long long int) (unsigned char)254))));
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-118)))))))));
                            arr_20 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0]))))) ? (((((/* implicit */_Bool) 3035709709U)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                        for (signed char i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            var_25 = (+(((((/* implicit */int) ((unsigned short) var_1))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [(unsigned char)6] [i_2])) : (((/* implicit */int) var_16)))))));
                            var_26 = ((/* implicit */unsigned int) ((unsigned char) (-(arr_2 [i_0]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_3]);
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))));
                        }
                    }
                    for (short i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (-(max((var_2), (((/* implicit */unsigned long long int) var_0))))));
                        arr_30 [i_1] [i_0] [i_2] [i_8] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) arr_10 [i_0] [i_1] [i_0] [i_8]))), (max(((+(var_12))), (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */int) var_16)))))))));
                        var_29 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((((var_15) + (2147483647))) << (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_7)))))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_30 += ((/* implicit */_Bool) (signed char)-1);
                            var_31 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_4))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_28 [i_0] [i_1] [i_2] [i_8] [i_9])), (var_1)))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_39 [i_0] [i_0] [i_10] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-15), (var_1))))) : (((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) var_16)) - (10827))))))));
                            arr_40 [i_0] [i_1] [i_2] [i_0] [i_1] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_10)) << (((var_2) - (6635694286860150121ULL)))))))) ^ (((var_7) ? (max((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2] [i_8])), (var_5))) : (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3324944726U)))))));
                            var_32 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_33 [i_0 + 1] [i_8 - 3] [i_1] [i_0] [i_0] [i_2] [i_2])))));
                        }
                    }
                    for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */int) var_5);
                            var_33 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((var_15) == (var_6)))))), ((-(((/* implicit */int) var_16))))));
                        }
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) var_9))))), (((/* implicit */int) ((signed char) max((var_14), (((/* implicit */unsigned int) var_7))))))));
                            arr_51 [i_0] [i_1] [i_1] [i_1] [i_11] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_33 [i_2] [i_2] [i_2] [i_0 - 1] [i_2] [i_11 + 2] [i_2]), (((/* implicit */unsigned short) var_17))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((((/* implicit */_Bool) 1024997155U)) ? (6204235521306218411LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= ((~(var_8))))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 11515082102562288620ULL)) || (((/* implicit */_Bool) (signed char)-84))))) > (((/* implicit */int) ((unsigned short) 4294967295U)))));
                            var_36 = ((/* implicit */unsigned int) var_12);
                            var_37 = ((/* implicit */unsigned short) var_6);
                        }
                        var_38 ^= ((/* implicit */unsigned long long int) (unsigned char)255);
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_15] [i_15] = ((/* implicit */_Bool) var_5);
                            var_39 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)53485)) ? (((unsigned long long int) -580789541)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)24557)))))), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)0)), (4294967295U)))) - (max((((/* implicit */unsigned long long int) arr_5 [i_11] [i_15])), (arr_52 [i_2] [i_2] [i_15] [i_11 + 1])))))));
                            var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((var_14) >> (((((/* implicit */int) (signed char)-27)) + (50)))))))));
                            var_41 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_53 [i_0] [i_11] [i_2] [i_11 + 1] [i_1])), (arr_15 [10ULL] [10ULL] [i_2] [i_1] [i_2])))), (arr_44 [i_11 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 2418209469U))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 1) 
                    {
                        for (int i_17 = 2; i_17 < 19; i_17 += 3) 
                        {
                            {
                                arr_62 [i_0 + 1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51774)) + (arr_61 [i_16 - 2] [i_17 - 1] [i_17] [i_17 - 1] [i_17]))))));
                                var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) ((1977754132452001361LL) + (((/* implicit */long long int) arr_25 [i_16 - 2] [i_16 - 1] [i_16 + 1] [i_16 + 1])))))));
                                var_43 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                                arr_63 [i_0] [i_16] = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) * (max((arr_34 [i_0] [10U] [i_0] [i_0]), (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))))))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_45 = ((/* implicit */unsigned int) ((unsigned char) var_12));
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)61531)) : (min((714465562), (((/* implicit */int) var_3))))))) ? (1616964473656877383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114)))));
    }
    for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 2) 
    {
        var_47 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_67 [i_19 + 1])), (var_9)))), (5329586293536497483ULL)));
        var_48 = ((/* implicit */signed char) (+(((unsigned long long int) var_15))));
        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((_Bool) ((max((((/* implicit */int) arr_67 [i_19])), (arr_66 [i_19]))) - (((/* implicit */int) ((signed char) var_16)))))))));
    }
    var_50 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (max((max((((/* implicit */unsigned int) var_10)), (var_14))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))));
}
