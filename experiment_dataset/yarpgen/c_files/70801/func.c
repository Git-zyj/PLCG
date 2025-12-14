/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70801
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
    var_13 = ((/* implicit */long long int) 262143U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((4294705163U) >> (((1175493796U) - (1175493796U)))))));
                            var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)73))))) : (262129U))), (((/* implicit */unsigned int) ((short) arr_3 [i_1 + 1] [i_1 + 2])))));
                            var_16 &= ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)16895)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29390))) : (6999711334002216987LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24226))) : (3119473499U)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 4; i_4 < 8; i_4 += 1) 
                {
                    arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)0))))) | (((/* implicit */int) (unsigned short)39460))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_6 [i_0] [i_5]);
                                arr_19 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (signed char)-69);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_26 [i_9] [i_8] [i_7]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_9] [i_1])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_7] [i_8] [i_9])))))));
                                var_19 = ((/* implicit */unsigned char) arr_8 [i_8] [i_1]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((-8702024999775722845LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 2426568700U)) ? (((/* implicit */int) (unsigned short)48408)) : (((/* implicit */int) arr_9 [i_0] [i_0]))))))))));
                }
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)24226)) : (((/* implicit */int) (unsigned char)252))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2])))))) >= (max((((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_1] [i_0] [i_0])) ? (arr_26 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (4294705163U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24226)) ? (-131072LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) / (arr_15 [i_0] [(signed char)8])));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)24224)) && (((/* implicit */_Bool) (short)26469))))) >> (((((((/* implicit */_Bool) (short)992)) ? (262143U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (262119U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)4] [i_10] [i_10])) >> (((var_7) - (2009390529U)))))) ? (((/* implicit */int) arr_9 [i_1 - 3] [i_0])) : (((((/* implicit */_Bool) arr_9 [i_1] [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)27468)))))) : (min((((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) arr_8 [i_0] [i_1])) >> (((4026531840U) - (4026531824U)))))))));
                }
                for (unsigned short i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11 + 1] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_11 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_11])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 68719476736LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_0] [i_0]))))))));
                    var_25 ^= ((/* implicit */unsigned short) min((min((-3659669471799193513LL), (((/* implicit */long long int) (signed char)47)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */int) (short)5014)) : (((/* implicit */int) (signed char)112))))) ? (arr_23 [i_1 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24227)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_31 [i_0] [i_11]))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 7; i_12 += 1) 
                {
                    for (short i_13 = 2; i_13 < 9; i_13 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-992)) >= (((/* implicit */int) (short)-15349))))), (arr_21 [i_0] [i_1] [i_12] [i_13])));
                            arr_38 [i_1] [i_1] [i_13] [i_13] [i_13] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 262147U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26043))) : (268435455U))), (min((((/* implicit */unsigned int) (short)-1000)), (var_8)))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1 - 2] [i_1] [i_1 - 2] [i_0])) ? (arr_33 [i_1 - 3] [i_1] [i_1 + 2] [i_0]) : (arr_33 [i_1 + 1] [i_1] [i_1 - 2] [i_1])))) ? (arr_21 [i_1] [i_1] [i_0] [i_0]) : (min((max((arr_21 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) (signed char)45))))));
            }
        } 
    } 
}
