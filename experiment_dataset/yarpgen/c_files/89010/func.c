/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89010
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
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((signed char) 9223372036854775807LL))) ? (var_3) : (((/* implicit */int) ((unsigned char) var_5)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */int) ((max((var_13), (var_9))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) (_Bool)1)) : (445664097))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (-445664070) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) 445664081))) : (((var_3) | (((/* implicit */int) (unsigned short)49218)))))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_14)) : (var_5))))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)32768)))))));
                            arr_13 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) -445664090))));
                                arr_21 [i_4] [i_1] [1] [i_5] [i_0] [17LL] [i_4 + 1] = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (445664070) : (((/* implicit */int) arr_18 [2LL] [i_1] [i_4] [i_4] [i_1])))) >= (((/* implicit */int) (unsigned short)30584))))), (((((/* implicit */_Bool) -445664081)) ? (((((/* implicit */_Bool) (unsigned short)13541)) ? (-445664078) : (838945651))) : (min((-445664098), (((/* implicit */int) (_Bool)1))))))));
                                var_20 = ((/* implicit */long long int) var_3);
                                arr_22 [i_6] [i_5 - 2] [i_4] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) 61498343U)), (16962307253084049382ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_5 - 1])), (var_1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 3) 
                            {
                                var_21 = ((4233468960U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49218))));
                                arr_31 [i_9] [i_9] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_14))));
                                var_22 = ((/* implicit */unsigned char) ((4107763362508903639ULL) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (min((4233468953U), (2427817216U))))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [i_0] [i_1] [(signed char)16] [i_0 - 2] [i_9] [14] [i_9]))))) ? (((/* implicit */long long int) -209548)) : (((((/* implicit */_Bool) 1240165161)) ? (-1LL) : (((/* implicit */long long int) 61498345U))))));
                            }
                            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                            {
                                arr_35 [i_0] [i_1] [i_7] = ((/* implicit */int) ((signed char) min((var_2), (1867150106U))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)224)) && (((((/* implicit */int) (unsigned short)5686)) <= (((/* implicit */int) (short)10257)))))) ? (max((((unsigned long long int) -445664128)), (((/* implicit */unsigned long long int) 1867150105U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))))));
                                arr_36 [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)35)), (1240165161)));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_20 [(unsigned short)11] [(unsigned short)11] [i_7] [i_7] [(short)3] [i_10]))));
                            }
                            for (short i_11 = 1; i_11 < 17; i_11 += 2) 
                            {
                                arr_41 [i_11] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)227)), (67108863U)));
                                arr_42 [i_7] [i_1] [i_0] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) -2122055400)) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)17990)) : (((/* implicit */int) (unsigned short)0))))), (max((((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_8] [i_11])), (4233468940U)))))));
                                arr_43 [i_1 - 1] [4] [(unsigned char)16] [i_1] [i_11] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned int) arr_24 [i_8 - 1] [(signed char)14] [(unsigned short)0] [i_8 - 1])) : (1867150100U))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)232)), (var_8))))));
                                var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1721250035)) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) ((short) var_13))), (max((arr_12 [i_0] [i_7] [i_8] [i_11]), (((/* implicit */int) (unsigned char)237))))))));
                                var_27 = ((/* implicit */unsigned char) ((4233468958U) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)109), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))))))));
                            }
                            for (long long int i_12 = 3; i_12 < 16; i_12 += 3) 
                            {
                                arr_46 [i_12] = ((/* implicit */long long int) -896891832);
                                arr_47 [i_0] [i_12] [i_7] = ((/* implicit */unsigned int) (_Bool)1);
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */int) var_7)), (-7))), (((((/* implicit */_Bool) 89823437400514721ULL)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)7))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) ((1867150106U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))) > (((/* implicit */int) (unsigned char)99)))))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_6)) == (-410798657))))) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))))))));
                            }
                            arr_48 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) (_Bool)1))), (((((/* implicit */_Bool) var_8)) ? (3344856478U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [2LL] [i_8 - 1]))) : (((unsigned int) ((unsigned int) var_1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((((var_11) + (2147483647))) << (((((((((/* implicit */_Bool) (short)-12658)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))) & (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_12))))))) - (168U))));
    var_31 |= ((/* implicit */unsigned char) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))), (min((((/* implicit */int) ((9007199254740991ULL) > (((/* implicit */unsigned long long int) -8))))), (472011641)))));
}
