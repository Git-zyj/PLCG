/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77098
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
    var_19 = ((/* implicit */signed char) ((var_16) || (((/* implicit */_Bool) var_4))));
    var_20 = ((/* implicit */unsigned int) 2);
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8147546313489371705LL))));
        var_22 = ((/* implicit */signed char) ((unsigned int) var_7));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_3))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_25 = ((/* implicit */signed char) (+(arr_4 [i_0])));
            arr_6 [i_0] = ((/* implicit */signed char) (~(((-8147546313489371682LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_26 = ((/* implicit */unsigned int) ((-2147483640) + (((/* implicit */int) (unsigned char)27))));
            var_27 -= (signed char)106;
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) var_15);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59642)) >= (((/* implicit */int) var_5))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_14 [i_2])));
                            arr_18 [i_0] [i_2] [i_2] [i_4] [i_2] = (((+(((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_4] [i_5])) : (((/* implicit */int) var_2)))));
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2 + 1])))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_32 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_2 + 1])) & (((/* implicit */int) var_0))));
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1])) ? (arr_17 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1]) : (arr_17 [i_2] [i_2 + 1] [i_2] [i_2] [(signed char)12])));
            }
            for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    for (unsigned int i_9 = 4; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_29 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) arr_13 [i_9 - 4] [i_2] [i_2] [i_0]);
                            arr_30 [i_9 + 1] [i_9] [(_Bool)0] [i_2] [i_9] = var_15;
                        }
                    } 
                } 
                arr_31 [2U] &= ((/* implicit */_Bool) arr_0 [i_0] [(signed char)8]);
            }
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                var_34 *= ((/* implicit */unsigned char) arr_17 [i_2] [i_2 + 1] [(_Bool)1] [i_2] [i_2 + 1]);
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 10; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)14564)) > (arr_33 [i_0] [(signed char)7] [i_10] [i_2]))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))));
                            arr_42 [i_2] = ((/* implicit */unsigned char) arr_23 [i_11] [i_11]);
                            arr_43 [i_0] [i_2] [4] [i_11] [i_12] = (i_2 % 2 == 0) ? (((/* implicit */long long int) (-(((((/* implicit */int) arr_19 [i_2])) << (((arr_7 [i_2]) - (7580234769147884346LL)))))))) : (((/* implicit */long long int) (-(((((/* implicit */int) arr_19 [i_2])) << (((((arr_7 [i_2]) + (7580234769147884346LL))) - (398290541680753296LL))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8147546313489371698LL)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0]))) : (var_4))) : (((/* implicit */long long int) (~(arr_28 [i_2 + 1]))))));
                var_37 ^= ((/* implicit */_Bool) (unsigned short)50946);
            }
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
        }
    }
    for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        var_39 = ((/* implicit */int) var_3);
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((arr_45 [i_13]) >> (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_44 [i_13]))))))))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 4) 
    {
        arr_48 [i_14] = (i_14 % 2 == zero) ? (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_46 [i_14])) ? (((/* implicit */int) arr_46 [i_14])) : (((/* implicit */int) arr_46 [i_14])))) + (2147483647))) >> (((max((((/* implicit */long long int) (_Bool)0)), (5438136433791013749LL))) - (5438136433791013719LL)))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (var_7)))), (((((/* implicit */_Bool) arr_47 [i_14])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_14])))))))))) : (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((((((/* implicit */_Bool) arr_46 [i_14])) ? (((/* implicit */int) arr_46 [i_14])) : (((/* implicit */int) arr_46 [i_14])))) - (2147483647))) + (2147483647))) >> (((max((((/* implicit */long long int) (_Bool)0)), (5438136433791013749LL))) - (5438136433791013719LL)))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (var_7)))), (((((/* implicit */_Bool) arr_47 [i_14])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_14]))))))))));
        var_41 = ((/* implicit */unsigned int) var_17);
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        arr_60 [i_14 + 2] [i_15] [i_14] [i_14 + 2] = var_18;
                        var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)90))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_7)))) : (((/* implicit */int) max(((unsigned char)166), (((/* implicit */unsigned char) arr_54 [i_14]))))))) >= (((((/* implicit */_Bool) 8147546313489371681LL)) ? (((/* implicit */int) arr_47 [i_14 + 2])) : (((/* implicit */int) (!(arr_53 [i_17] [i_16] [i_14]))))))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((~((~(8147546313489371661LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-61)), (-8147546313489371727LL))) > (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))))));
                        var_44 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 16032869562078170007ULL)) ? (((/* implicit */int) arr_49 [i_14 + 1])) : (((/* implicit */int) arr_58 [i_14] [i_15] [i_16])))));
                        arr_61 [i_14 - 1] [i_15] [i_16] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_16] [i_14] [(unsigned short)21] [i_15])) - (((/* implicit */int) var_18))))) ? (max((((/* implicit */unsigned int) arr_54 [i_14])), (1557891434U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_49 [i_14])))))))) * (min((((/* implicit */long long int) (signed char)-1)), (((((/* implicit */_Bool) (short)-2039)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (8147546313489371670LL)))))));
                    }
                    arr_62 [i_14 + 1] [12U] [i_16] [(unsigned char)6] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_14] [i_15] [i_16]))))))))));
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1035761217U)) ? (3684179628U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8)))));
                }
            } 
        } 
    }
}
