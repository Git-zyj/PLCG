/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62844
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
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_10 = 1785109662U;
                                arr_14 [i_1] [i_3] [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7059585695898118566ULL))));
                                var_11 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18771)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0]))) : (arr_0 [i_0])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) != (17913630452808847854ULL))))))));
                                var_12 += ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-((+(2509857632U))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        var_14 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) arr_7 [i_1] [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 2] [i_1]))))), (max((11387158377811433049ULL), (((/* implicit */unsigned long long int) 3301471496U))))));
                        arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)221);
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((8757576709555857378ULL), (0ULL)));
                        arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */signed char) var_6);
                        arr_21 [i_0] [i_0] = (!(((/* implicit */_Bool) ((short) (signed char)0))));
                        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_2 - 1] [i_0] [i_0 - 4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)2047))))) : (var_3)));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) 2509857634U));
                            arr_26 [i_0] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0]))))) ? ((-(((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_0] [i_7] [i_0] [i_1] [i_1] [i_0])))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 9689167364153694232ULL))))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16319506139912326175ULL)));
                            var_19 = ((/* implicit */unsigned short) max(((-(533113620900703761ULL))), (var_7)));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_20 &= ((/* implicit */signed char) (-(3U)));
                            arr_33 [i_10] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((var_3) & (var_1)))))) ? (min((13247567559265554755ULL), (((/* implicit */unsigned long long int) var_0)))) : (((unsigned long long int) var_4))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            arr_40 [i_12] [i_11] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (2380389916U))), (((/* implicit */unsigned int) (short)-10747))));
                            var_21 = ((/* implicit */signed char) min(((short)-12358), ((short)-10738)));
                        }
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (unsigned short)12516)) ? (12797397273089297887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (33553408ULL))))))));
                            var_23 = ((/* implicit */int) ((signed char) max((7673573759240949133ULL), (((/* implicit */unsigned long long int) 2849098151U)))));
                            arr_43 [i_1] [i_11] [i_2] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (short)10761)), (141977740497778157LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1320247231924114617ULL)) || (((/* implicit */_Bool) arr_4 [i_0 - 2])))))));
                        }
                        for (unsigned char i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
                        {
                            var_24 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_8)))))), (max((1428588799U), (((/* implicit */unsigned int) 1239584321))))));
                            var_25 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) min((var_8), (((/* implicit */short) (signed char)127))))), (var_3))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 993495799U)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_3))) : (1100778338U)))));
                            var_26 *= ((/* implicit */unsigned long long int) arr_45 [i_14] [i_11] [i_1] [i_1] [i_0]);
                        }
                        for (unsigned char i_15 = 1; i_15 < 11; i_15 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)8113)))) : (max((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (14567738700808463650ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
                            arr_50 [i_15 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (-1239584321)))))));
                            arr_51 [i_0] [i_11] [2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) 3194188958U)), (2637912323220422298LL)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_16 = 1; i_16 < 13; i_16 += 4) 
                        {
                            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_1] [i_0 + 3] [i_0 - 1] [i_0] [i_1])) : (((/* implicit */int) arr_24 [i_1] [i_0 - 1] [(unsigned short)2] [i_0 + 3] [i_1]))));
                            arr_55 [i_0] [2] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_8);
                        }
                        var_29 |= ((/* implicit */signed char) min((min((-3240769061983810518LL), (((/* implicit */long long int) -1849820947)))), (((/* implicit */long long int) (~(arr_18 [i_2 + 1] [i_2 - 1] [i_0 + 3]))))));
                    }
                    for (short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) ((((1991232540U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) ? (1125899906842622ULL) : (269283299118091593ULL)));
                        arr_60 [i_17] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) max((var_9), (((/* implicit */short) (signed char)8))))), ((-(((/* implicit */int) var_0))))));
                    }
                    for (signed char i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        var_31 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(var_2))))))), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)228)), (var_6)))), (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                        arr_64 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+((-(arr_46 [i_18] [i_2] [i_0 - 2] [i_1] [i_0] [i_0 - 2] [i_0 - 2])))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_1))))));
}
