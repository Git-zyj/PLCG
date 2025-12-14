/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98465
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
    var_10 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((short) var_1))), (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL)));
        arr_3 [6ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1ULL)) || (((/* implicit */_Bool) (short)938))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned int) arr_4 [(unsigned short)10] [i_1])))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_4))));
            var_14 ^= ((/* implicit */unsigned char) arr_5 [10ULL]);
            var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) 1073217536U)))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_0])) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (18446744073709551614ULL))) - (18446744073709551609ULL)))));
                        arr_18 [i_0] [i_2] [i_2] [i_3] [i_3] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (arr_12 [i_0] [i_0] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_1)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_3] [i_4])))) : (((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_2] [i_0] [i_4]))))));
                        var_17 = ((/* implicit */short) var_8);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [22] [i_6 - 2] [i_5] [i_6]))) : (7ULL)));
                            var_19 += ((/* implicit */_Bool) var_4);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [(unsigned short)2] [i_5] [i_6 - 1] [i_7])) ? (((18446744073709551614ULL) - (var_8))) : (((((/* implicit */_Bool) var_0)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_8] [(_Bool)1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))), (var_6))))) : (18446744073709551613ULL)));
        /* LoopNest 3 */
        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 2; i_12 < 20; i_12 += 4) 
                        {
                            arr_42 [i_8] [i_9] [i_10] [i_11] [i_12] [i_9] [i_8] = ((/* implicit */short) var_9);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)51439), (((/* implicit */unsigned short) (unsigned char)238))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (arr_34 [i_9])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8] [i_12] [i_10] [i_11])) || (((/* implicit */_Bool) 1ULL))))))) : (((arr_14 [i_9 + 1] [i_12 + 2] [i_12 + 1] [i_12]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_8] [i_9])))))))));
                            arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_40 [i_8] [(unsigned char)7] [i_9] [i_10] [i_11] [i_12] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) arr_21 [i_8] [i_8] [i_9] [i_9 + 1] [i_8] [i_9 - 2]))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_9] [i_10] [i_9] [i_12 + 2])) ? (((/* implicit */int) arr_41 [i_8] [i_8] [i_9] [i_10] [i_9] [i_11] [i_12])) : (((/* implicit */int) var_6)))))))));
                        }
                        var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) arr_8 [i_8] [i_8] [12]))))) ? (min((1ULL), (((/* implicit */unsigned long long int) (short)511)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51439))) : (23ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)12)), (((((/* implicit */int) arr_36 [i_11] [i_9] [i_10])) >> (((arr_12 [i_11] [i_10] [i_9 - 3] [i_8]) + (1003840360))))))))));
                        arr_44 [i_8] [i_9] [i_10] [i_9] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_10]))))) ? (max((arr_29 [i_9]), (((/* implicit */int) arr_26 [i_9] [i_9] [i_10])))) : (((((/* implicit */_Bool) arr_32 [(signed char)9])) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_12 [i_8] [i_9 - 3] [i_10] [i_11])))))));
                        arr_45 [i_11] [i_9] [i_10] |= ((/* implicit */short) ((long long int) min((((/* implicit */short) var_5)), ((short)31))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_9]), (((/* implicit */unsigned int) arr_20 [i_9]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)30915))))) : (((arr_33 [i_8] [i_9] [i_10] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3578))) : (max((((/* implicit */unsigned int) (_Bool)0)), (2617630053U)))))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)-71)), (8103167958604805889ULL))), (7217964061308140669ULL)))) || (arr_33 [i_8] [i_8] [i_8] [16ULL])));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) min((arr_32 [i_8]), (var_1)))) < (((/* implicit */int) arr_31 [i_8] [(short)8] [i_8]))))) : (((/* implicit */int) var_9))));
        var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_37 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_37 [i_8] [i_8] [i_8] [i_8] [i_8]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_37 [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) (short)0)) ? (3065562046U) : (1004121843U)))))));
    }
}
