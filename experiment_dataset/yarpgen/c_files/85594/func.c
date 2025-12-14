/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85594
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
    var_13 = ((/* implicit */unsigned int) 4727865133987669809ULL);
    var_14 ^= ((/* implicit */_Bool) (~(var_2)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((signed char) (+(((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)48573)))) || (((/* implicit */_Bool) (short)19026)))) ? ((-(min((((/* implicit */unsigned long long int) var_10)), (var_3))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-19027)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14843))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)19046)) >= (((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
                var_17 = ((((/* implicit */int) (unsigned short)5502)) * (((/* implicit */int) (signed char)1)));
            }
        } 
    } 
    var_18 = var_5;
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (-(min((67268370U), (((/* implicit */unsigned int) (unsigned char)243))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)59))))) : (((4059614327U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)15] [i_3] [i_2])))))))) : (min((((/* implicit */unsigned long long int) 838716015)), (14373035581993037822ULL)))))));
            arr_8 [i_3] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (min((235352968U), (((/* implicit */unsigned int) (_Bool)0))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (4059614328U) : (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))) / (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(signed char)1] [i_3])) ? (-26562752) : (((/* implicit */int) (signed char)-48)))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 + 1]))))) ? (((/* implicit */int) min((arr_7 [i_2 - 1]), (arr_7 [i_2 + 1])))) : (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) (short)19027))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)2)) > (((/* implicit */int) (short)-21044)))));
            arr_13 [i_2] &= ((/* implicit */unsigned long long int) ((unsigned int) min((arr_11 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]), (arr_11 [(unsigned short)2] [i_2 + 1] [(unsigned short)2] [i_2 - 1] [i_2 + 1]))));
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_23 = ((/* implicit */int) arr_15 [i_2 + 1]);
            var_24 = ((/* implicit */signed char) arr_2 [(short)1] [(_Bool)0]);
            arr_16 [i_6] [(signed char)2] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)5502)))), (((/* implicit */int) min((var_6), (((/* implicit */signed char) (_Bool)0)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [(unsigned char)0]))) + (min((arr_4 [5ULL]), (((/* implicit */unsigned int) (unsigned short)24182))))))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(2104683400U)))) ? ((-(min((((/* implicit */int) (signed char)89)), (arr_14 [i_2]))))) : (min((((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) arr_0 [(signed char)8])) : (1490384754))), (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])))))))));
        }
        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_15 [i_2 - 1]), (((/* implicit */unsigned short) arr_5 [i_2 - 1] [i_2 - 1]))))), (((long long int) arr_15 [i_2 - 1]))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */int) ((short) ((short) arr_3 [i_2] [i_2] [i_2])))), (((var_8) & (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])))))))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((arr_10 [i_2] [i_2] [i_2] [9]) ? (65536U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [(_Bool)1] [1U] [i_7])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -154085348))))) : (max((arr_6 [(unsigned short)14] [(short)13]), (var_1)))))));
            var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-10))));
            arr_19 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_17 [(short)6] [(short)6] [i_2]))))) ? (((((/* implicit */_Bool) 534047613U)) ? (arr_18 [i_2] [i_7] [(signed char)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [13U]))))) : (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_1))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2])))));
            var_30 = ((/* implicit */int) arr_18 [5ULL] [7ULL] [8ULL]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((min((arr_6 [i_8] [i_2]), (((/* implicit */int) arr_1 [i_8] [i_2])))) == (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) arr_20 [(signed char)4] [13U] [i_8]))))))), (4294901759U)));
            var_32 = ((/* implicit */unsigned short) (+((~(arr_18 [i_2] [i_2 + 1] [7LL])))));
            arr_23 [i_2] [i_2] = ((/* implicit */signed char) 1534602595U);
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) 5892946923603072815ULL))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -860034698)) ? ((+(arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1581507017)))) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [12U] [i_8])))))));
        }
    }
    for (signed char i_9 = 4; i_9 < 9; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */_Bool) min(((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned char)8] [i_12]))) | (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_12 + 1])) || (((/* implicit */_Bool) arr_31 [i_12 + 1] [i_9 + 2])))))));
                        arr_37 [i_9] [i_9] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) min((min(((signed char)-98), ((signed char)-7))), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) 1879720029)))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        arr_40 [i_9] [i_9] [i_11] [i_13] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (min((((((/* implicit */int) arr_21 [i_11] [i_11])) - (((/* implicit */int) arr_12 [(unsigned char)9] [i_11] [i_11] [i_9])))), ((~(((/* implicit */int) arr_5 [i_9] [(_Bool)1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (1318282496) : (((/* implicit */int) (short)2048))))) ? (1879720022) : ((+(((/* implicit */int) (unsigned short)13448))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_36 = (~((((((-(((/* implicit */int) arr_20 [i_11] [i_11] [i_14])))) + (2147483647))) << (((((/* implicit */int) arr_20 [i_9] [(_Bool)1] [i_9])) - (27978))))));
                            var_37 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_5 [i_9 - 4] [i_9])))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_27 [i_9 + 2])))) > ((~(((/* implicit */int) (signed char)8)))))))));
                        }
                    }
                    arr_43 [i_9] [i_11] [i_10] [i_10] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - ((+(2410139943U)))))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        arr_47 [i_11] [i_11] [i_11] [(_Bool)1] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_15] [i_10]))) ? ((~(((/* implicit */int) (signed char)-97)))) : ((-(((/* implicit */int) var_12)))))))));
                        var_39 ^= ((/* implicit */int) (short)31609);
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned char) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
    {
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_16] [i_16])) ? (arr_49 [i_16] [i_16]) : (arr_49 [i_16] [i_16]))))));
        arr_50 [i_16] = ((/* implicit */_Bool) arr_49 [i_16] [i_16]);
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_48 [(unsigned short)18]) >> (((arr_48 [(short)5]) - (11383966816636849692ULL)))))) ? (var_4) : (((/* implicit */unsigned long long int) (+(2391935749U))))));
    }
}
