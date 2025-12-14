/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6479
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_1 - 3] [i_1])))))));
                                arr_10 [i_0] [i_0] [6U] [i_1] = var_8;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_17 [i_6] [i_1] [(short)0] [i_1] [i_0] = ((/* implicit */_Bool) ((int) ((unsigned char) var_8)));
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_1 - 3] [i_1] [i_1] [i_1 + 1] [i_2 + 2]), (((/* implicit */unsigned long long int) ((int) var_1)))))) ? (((/* implicit */int) ((signed char) min((arr_6 [(_Bool)1] [(_Bool)1] [i_5] [i_0]), ((_Bool)0))))) : (max((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0] [i_5] [i_6] [i_6])))), (((/* implicit */int) arr_11 [i_6] [i_0] [i_5] [i_2] [i_1] [i_0]))))));
                                arr_18 [i_0] [i_0] [i_1] [(_Bool)1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)255));
                                arr_19 [i_1] [i_0] [i_6] &= ((/* implicit */signed char) arr_0 [i_1] [i_0]);
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_28 [i_9] [i_9] [i_1] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) ((_Bool) (unsigned char)129))) : (((/* implicit */int) (unsigned char)126))))) ? (1269660354) : (((/* implicit */int) (_Bool)1))));
                                arr_29 [i_0] [i_1] [3U] [i_9] = ((/* implicit */short) 7493202171932855448LL);
                                arr_30 [i_9] [(short)9] [2U] [i_1] [i_7] [7LL] [i_7] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((_Bool) var_1))))), (min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)-7)))), (((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 18; i_10 += 1) 
                    {
                        for (short i_11 = 2; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_11] [i_1])) ? (((/* implicit */int) ((unsigned char) arr_8 [i_10 - 1] [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 - 1]))) : (((/* implicit */int) (unsigned char)125))));
                                arr_35 [i_11] [i_1] [i_0] [(_Bool)1] [8LL] [i_1] [i_0] = ((/* implicit */signed char) ((short) (short)14313));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(3419188785U))))));
                                arr_36 [i_0] [7] [i_1] [i_0] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) min((max((((/* implicit */unsigned short) arr_27 [i_11] [i_10] [i_1] [i_1] [i_0])), ((unsigned short)45901))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)104)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_11]))))))))));
                                arr_37 [i_11] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                    arr_38 [(short)1] [i_1] [i_1] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_23 [i_7] [i_0] [i_0])) ? (((/* implicit */int) (short)14313)) : (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)11] [i_1])))), (max((((/* implicit */int) var_10)), (290771476))))), (((/* implicit */int) (!(((/* implicit */_Bool) 12946835693275690192ULL)))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_6))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_32 [i_1 - 2] [i_13] [i_13]))) ? (((/* implicit */unsigned long long int) var_2)) : (arr_12 [i_13]))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (var_12))))), ((+(((/* implicit */int) var_1)))))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((~(-5768299132548171774LL))) != (((/* implicit */long long int) (-(((unsigned int) var_4))))))))));
                    }
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_6))), (((unsigned char) arr_44 [i_1]))))), (((((/* implicit */_Bool) min((arr_4 [(unsigned char)10] [i_1] [6U]), (((/* implicit */unsigned short) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_12]))) : ((+(((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)17]))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(arr_41 [i_14] [i_12] [i_1] [i_0]))))));
                        arr_46 [i_0] [8ULL] [i_14] &= ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_24 [i_1] [i_1 + 1])));
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        arr_49 [i_0] [i_1] [i_1] [16LL] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 + 1] [i_1]))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_42 [i_0] [i_1 - 2] [i_1 - 2]))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                        arr_50 [i_1] [i_1] [i_1] [i_1] = min(((~(5615147713080764425LL))), (((/* implicit */long long int) (unsigned char)127)));
                    }
                    var_23 -= ((/* implicit */_Bool) min((((/* implicit */int) arr_34 [i_0] [(unsigned char)17] [i_1 - 3] [(unsigned char)0] [i_12] [i_12])), ((((!(((/* implicit */_Bool) arr_13 [i_12] [i_1 - 2] [i_1 - 2] [(unsigned short)13])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_47 [i_0])))) : (((/* implicit */int) (_Bool)0))))));
                    var_24 &= ((/* implicit */long long int) (signed char)-41);
                    arr_51 [i_1] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -542092981345118490LL)) ? (arr_43 [i_0] [10U] [i_1] [i_12]) : (arr_22 [i_0] [i_0] [i_1] [i_1 - 3] [12ULL] [i_12])))) ? (arr_41 [i_0] [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))));
                }
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_27 [i_0] [i_1 - 2] [i_16] [i_1 + 1] [i_16])))))))))));
                    arr_55 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_33 [i_16] [i_16] [i_1] [i_1] [2U] [i_0] [i_0])), (var_7)))) ? (arr_43 [i_16] [i_1] [i_1] [11]) : ((+(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_47 [i_1]))))) ? (((((/* implicit */_Bool) var_12)) ? (5632322470133127369LL) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        for (long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                        {
                            {
                                arr_61 [i_0] [i_0] [i_0] [i_16] [i_17] [i_0] &= ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_1] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) arr_56 [i_0] [i_16])) : (var_7)))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_17] [i_18]))))), (min((var_6), (((/* implicit */unsigned int) var_4))))))));
                                arr_62 [i_1] [i_18] = ((/* implicit */long long int) ((max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)127)) ? (arr_39 [(short)0] [12ULL] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
                            }
                        } 
                    } 
                    var_26 = ((min((arr_16 [i_0]), (arr_16 [i_16]))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_1 + 1])))));
                }
                arr_63 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) (short)-14313));
            }
        } 
    } 
    var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */int) var_8)) * (((/* implicit */int) ((short) min((((/* implicit */int) var_8)), (var_5)))))))));
}
