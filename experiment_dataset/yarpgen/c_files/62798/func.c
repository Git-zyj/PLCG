/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62798
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
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) var_6)), ((+(var_4))))) : (((/* implicit */unsigned int) (((+(var_7))) / (((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 2147482624)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) | (((/* implicit */long long int) ((var_1) & (((/* implicit */int) (signed char)1))))))), (((/* implicit */long long int) 713875756))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) 34360932U)), ((+(0LL)))))) ? (((((/* implicit */int) max(((signed char)0), ((signed char)127)))) * (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_3 - 1] [i_2] [10] [(unsigned short)2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [1LL])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_2), (arr_7 [i_3])))) : (((((/* implicit */int) arr_12 [i_2])) >> (((((/* implicit */int) var_5)) - (35183))))))) == (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_4 [i_1 + 1]))))));
                        var_14 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_2 + 3] [3] [i_4 - 1])) : (var_1))), (((/* implicit */int) arr_5 [i_2 + 3])))) > (((/* implicit */int) ((unsigned short) -3455545479620462218LL)))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_20 [(unsigned short)10] [i_5 - 1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) ((_Bool) ((((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (unsigned short)2666)) - (2659))))) * (((/* implicit */int) arr_10 [i_2 + 1] [i_3 + 2] [i_5 + 2])))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -120454658)) : (27151490U)))) ? (((/* implicit */int) (signed char)-1)) : ((+(((/* implicit */int) (unsigned short)0))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            arr_24 [i_1] [i_5] [i_1] [i_2] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_5 + 1])) ? (((arr_9 [i_1] [i_1 + 1] [i_1] [15]) - (((/* implicit */int) arr_14 [i_1 - 1] [i_2] [i_3] [i_5 + 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_5] [i_7 + 1])))))));
                            arr_25 [i_1 - 1] [i_1] [(unsigned short)16] [9LL] [i_2] = ((/* implicit */_Bool) ((unsigned int) -1LL));
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)57196)) >= (((/* implicit */int) (short)32765)))) ? (((((/* implicit */int) arr_4 [i_7])) >> (((((/* implicit */int) (unsigned short)8191)) - (8178))))) : (((/* implicit */int) arr_8 [i_2] [i_3] [i_2]))));
                        }
                        arr_26 [i_5 + 1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) arr_13 [i_1] [(unsigned short)11] [15] [(unsigned short)11] [(unsigned short)11] [i_1])), ((unsigned short)4)))))) >= (((((/* implicit */long long int) 3613443900U)) + (max((6677793957703252047LL), (((/* implicit */long long int) (unsigned char)24))))))));
                        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)62875)), (-2679274366492759293LL)))) ? (2147483647) : (((/* implicit */int) (short)32759))))));
                    }
                    var_18 *= ((/* implicit */_Bool) (short)-11643);
                    var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) arr_7 [i_2 + 1]))))) ? (((arr_11 [i_3 + 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_2]))))) : (((/* implicit */long long int) ((var_1) & (var_1)))))), (((/* implicit */long long int) min(((unsigned short)58893), ((unsigned short)10695))))));
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                }
            } 
        } 
        arr_27 [i_1] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) -6677793957703252047LL)))) ? (arr_0 [i_1 - 1]) : ((-(-9007881197902272106LL))))), ((+(arr_17 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
        arr_28 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) arr_11 [i_1]);
    }
    for (long long int i_8 = 1; i_8 < 16; i_8 += 3) /* same iter space */
    {
        arr_32 [16] = ((/* implicit */unsigned int) var_7);
        arr_33 [i_8] = ((/* implicit */_Bool) ((1265022569U) * (((/* implicit */unsigned int) 1998195661))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        arr_36 [i_9] |= ((/* implicit */unsigned short) min((min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)4717)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)6144)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 124576529)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24892))) : (-7267456936308077513LL)))) ? (((/* implicit */int) var_9)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_3)))))));
        arr_37 [i_9] [i_9] = ((max((((/* implicit */unsigned int) max((var_6), (var_5)))), (((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */unsigned int) var_8)) : (2188298210U))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_23 [i_9] [10LL] [i_9] [i_9] [i_9])) : (((/* implicit */int) (_Bool)1))))) ? (arr_16 [i_9]) : ((-(((/* implicit */int) (unsigned short)17486))))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    arr_42 [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned short) arr_5 [i_11]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-5415))) ^ (2476211391U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_9])) ? (arr_34 [i_10]) : (((/* implicit */int) arr_30 [i_11])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 14; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_13])) ? (((/* implicit */int) ((var_3) >= (((/* implicit */int) var_0))))) : (((/* implicit */int) max((arr_5 [i_9]), (arr_5 [12U]))))));
                                arr_49 [i_12] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)17497))))), (max((1499132897U), (((/* implicit */unsigned int) (unsigned short)10707))))))) || (((/* implicit */_Bool) (unsigned char)128)));
                                arr_50 [i_9] [i_10] [i_11] [i_11] [i_13] [i_9] [i_13] = ((unsigned short) -124576508);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_51 [i_9] = ((/* implicit */int) 12391950309552752625ULL);
    }
    for (int i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((((/* implicit */int) var_0)) != (239708136))), (((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) var_5))))))), ((-(((/* implicit */int) arr_1 [(unsigned short)2]))))));
        arr_55 [i_14] &= ((/* implicit */_Bool) (signed char)-103);
    }
}
