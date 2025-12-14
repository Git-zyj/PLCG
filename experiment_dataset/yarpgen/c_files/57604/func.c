/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57604
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (arr_1 [i_0] [i_0])))) * (arr_3 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-(arr_1 [i_1] [i_0])))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [(unsigned char)9]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)142))))) : ((-(((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [(unsigned char)5])) ^ (14218493529136971513ULL)))))));
                    var_16 = ((/* implicit */long long int) ((unsigned char) ((long long int) (-(arr_1 [i_1] [i_2])))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)17))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) << (((min((arr_10 [i_4 - 1] [i_4 + 1] [i_4]), (arr_10 [i_4 + 1] [i_4 - 1] [i_4]))) - (4396243789558173049ULL)))));
                        var_19 = (((-(arr_2 [i_4 + 1] [i_1] [(unsigned char)6]))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20933))));
                        var_20 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_12 [i_4 - 2] [i_1] [i_3] [i_4])), (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_4])))))));
                        var_21 ^= max((((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)32767), (((/* implicit */short) var_4))))), (((((/* implicit */int) var_13)) >> (((((/* implicit */int) (unsigned char)244)) - (239)))))))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) arr_8 [i_5] [i_6]);
                            var_23 = ((/* implicit */unsigned short) (~(((unsigned long long int) (short)32767))));
                            /* LoopSeq 2 */
                            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                            {
                                var_24 = ((/* implicit */long long int) ((short) (+((-9223372036854775807LL - 1LL)))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_6]))) : (arr_11 [i_7] [i_6] [i_5] [i_1] [i_0])))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)0)))) : ((-(((/* implicit */int) (unsigned short)20933))))))) ? (arr_7 [i_0] [i_1] [i_0] [i_6]) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) - (arr_2 [i_5] [i_6] [i_5])))));
                                var_26 = max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_7 [i_0] [i_1] [i_6] [i_7]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 4198395585929979456LL)) ? (((/* implicit */int) (short)11574)) : (((/* implicit */int) (unsigned short)32768)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1))))) : (((long long int) var_7)))));
                            }
                            for (unsigned short i_8 = 3; i_8 < 8; i_8 += 1) 
                            {
                                arr_23 [i_5] [i_5] [i_5] [(unsigned char)5] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_8] [i_8 + 2] [i_6] [i_8 + 4] [(unsigned short)2]))) : (min((((/* implicit */long long int) (short)-11114)), ((-9223372036854775807LL - 1LL))))))));
                                var_27 = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) arr_10 [i_8] [i_5] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5]))) : (1539273230747431142LL))))), (((/* implicit */long long int) ((short) -4115167583348014319LL)))));
                            }
                            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) max(((short)2097), (arr_17 [i_6] [i_6] [i_5] [8ULL] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)255))))) : ((-(arr_4 [i_0] [i_1] [i_0] [i_6])))))));
                            var_29 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_30 = (unsigned char)59;
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
    {
        var_31 *= ((/* implicit */short) (-((-(((/* implicit */int) arr_25 [i_9]))))));
        var_32 *= ((/* implicit */short) (+(((long long int) ((((/* implicit */_Bool) (unsigned char)139)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9]))))))));
    }
    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
    {
        arr_29 [i_10] = ((/* implicit */unsigned long long int) ((long long int) min((arr_25 [i_10]), (arr_25 [i_10]))));
        var_33 = ((/* implicit */long long int) (((((~(var_12))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_6)))))) | (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_26 [i_10])) ^ (((/* implicit */int) (unsigned char)0)))))))));
        var_34 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (short)15))) : (-1LL)))), (max((14344713434800231460ULL), (((/* implicit */unsigned long long int) (unsigned char)133)))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767)))))));
    }
    for (long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */short) (-((~((-(((/* implicit */int) arr_26 [i_11]))))))));
        var_36 = ((((/* implicit */_Bool) 920982371176122720LL)) ? (-254172013789895585LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11114)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) : (-920982371176122693LL))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 3; i_12 < 24; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                {
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_13] [i_13])))))));
                    var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_13))))) ? (max((min((((/* implicit */long long int) var_10)), (arr_33 [i_11]))), ((+(0LL))))) : (((((/* implicit */_Bool) ((arr_33 [i_11]) / (arr_33 [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_25 [i_11]), (arr_24 [i_11] [i_12]))))) : (min((((/* implicit */long long int) var_4)), (arr_36 [i_11] [i_12 - 2])))))));
                }
            } 
        } 
    }
}
