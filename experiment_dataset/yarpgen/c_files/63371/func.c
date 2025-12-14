/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63371
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
    var_17 |= ((/* implicit */int) var_10);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) || ((!(((/* implicit */_Bool) 2488683467U))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1121266233)) ? (-710170620) : (-710170620)));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) ((int) var_5));
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7)) ? (12249743943776533064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102)))));
        arr_6 [i_0] = ((/* implicit */unsigned char) 710170620);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_12) ? (710170620) : (((/* implicit */int) var_15))))) < (max((1125899906842623ULL), (((/* implicit */unsigned long long int) arr_8 [i_2]))))));
        var_23 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 1806283805U))) >> (((((/* implicit */int) var_5)) + (119)))))), (((arr_3 [i_2]) | (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        var_24 = ((((((/* implicit */_Bool) arr_11 [i_3 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))) >= (((/* implicit */int) var_12)));
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) var_7);
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) 370218632);
                            var_27 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) -710170620)) ^ (9223372036854775807LL)))));
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_17 [i_6 - 1] [i_4 - 1] [i_5] [i_5 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))))))));
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */signed char) max((1840240151U), (((/* implicit */unsigned int) (signed char)123))));
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_31 [i_3] [i_4] = ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9552))) & (var_9))) <= (((var_4) - (arr_3 [i_8])))))) | (((/* implicit */int) var_16)));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1347635732) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (max((((/* implicit */unsigned int) -710170620)), (var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((18445618173802709001ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_3 + 2])) != (var_9))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -84222711)) ? (1125899906842620ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((arr_4 [i_3] [i_4 - 1]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 1] [i_5 - 3] [i_4 - 1])))))));
                        }
                        for (int i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            arr_34 [i_3] [i_4] [i_5] [i_6] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
                            arr_35 [i_3] [(unsigned short)20] [(unsigned char)9] [10] [i_3] [i_3] = ((/* implicit */signed char) (unsigned char)3);
                            var_30 = ((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1]);
                        }
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            arr_38 [i_3 + 1] [i_4] [i_5] [i_6] [i_10] |= ((/* implicit */_Bool) var_6);
                            arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_14 [i_4 - 1]))))), (arr_16 [i_3])));
                            var_31 = ((/* implicit */signed char) arr_19 [i_3] [i_4] [i_5] [i_6] [i_10] [i_6]);
                            arr_40 [(_Bool)1] [i_4] [i_5] [i_6] [i_10] = ((/* implicit */_Bool) var_1);
                            arr_41 [i_3] [i_4] [i_5] [i_6 + 1] [i_10] |= (~(((((/* implicit */_Bool) 4630929785554492595LL)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)(-127 - 1))))));
                        }
                    }
                } 
            } 
            arr_42 [i_4 - 1] = ((/* implicit */int) max(((signed char)70), ((signed char)-110)));
        }
        for (signed char i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */int) (signed char)68)) >> (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_27 [i_11 + 2] [i_11] [i_3] [i_11] [i_11]))))))));
            var_33 ^= var_1;
            arr_45 [i_3] [i_3] = ((/* implicit */int) arr_0 [i_3]);
            var_34 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_4)) : (arr_11 [i_3])))) ? (((/* implicit */int) min((var_5), ((signed char)-105)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) != (((/* implicit */int) var_5)))))))), (((arr_36 [i_3 - 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123)))))));
            arr_46 [i_3] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_11))))) == (18446744073709551615ULL)));
        }
        arr_47 [(unsigned short)5] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) 1785878335U)))));
    }
    /* LoopSeq 2 */
    for (signed char i_12 = 3; i_12 < 12; i_12 += 4) 
    {
        var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_2)), (var_3)));
        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((var_4), (((/* implicit */unsigned int) (unsigned short)8191)))) : (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_14)) / ((-(((/* implicit */int) var_5)))))))));
    }
    for (signed char i_13 = 3; i_13 < 15; i_13 += 4) 
    {
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_8 [i_13]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) arr_2 [i_13 - 3])) : ((-(18446744073709551590ULL))))), (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_13 [i_13] [i_13])))), ((~(11235479572046988336ULL))))))))));
        arr_53 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((234396177), (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */int) (signed char)-63)) / (var_1))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)-16))))));
    }
}
