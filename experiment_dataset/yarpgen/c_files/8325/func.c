/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8325
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
    var_18 = var_15;
    var_19 = var_5;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) arr_1 [i_0]))))), (arr_1 [i_1 - 1])))) ? (((((/* implicit */_Bool) (+(var_15)))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (arr_2 [i_1]) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))))) : (arr_2 [i_0]))))));
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (-(arr_2 [i_1 - 1])));
            var_21 = ((/* implicit */unsigned long long int) var_8);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min(((unsigned short)65525), ((unsigned short)65525))))));
        }
        arr_5 [i_0] [(_Bool)1] = ((signed char) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)0)));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_23 *= ((/* implicit */_Bool) (+((~(-6164333852016796756LL)))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_24 = (~(((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2] [(_Bool)1] [(unsigned short)8] [i_2] [0U] [i_2])) < (((/* implicit */int) var_0))))));
                            arr_20 [(unsigned short)7] [(unsigned short)7] [i_4] [i_3] [(short)8] [i_4 + 2] [i_4 + 1] = ((/* implicit */signed char) ((unsigned short) arr_8 [i_6 - 1] [i_3]));
                            var_25 ^= ((/* implicit */unsigned short) (((!(arr_7 [(unsigned char)11] [(unsigned char)5]))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (arr_7 [i_2] [i_3 + 2])))) : (((/* implicit */int) (!(arr_7 [i_2] [i_5]))))));
                        }
                    } 
                } 
                arr_21 [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned short) (~((+(max((var_15), (((/* implicit */unsigned int) (unsigned short)61153))))))));
            }
            for (int i_7 = 1; i_7 < 14; i_7 += 4) /* same iter space */
            {
                var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) (unsigned short)65532)))) : (((((/* implicit */_Bool) 1755099287053569388LL)) ? (((((/* implicit */int) (unsigned short)14)) | (((/* implicit */int) (short)9316)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)13]))) == (1073741823U))))))));
                var_27 ^= ((/* implicit */unsigned long long int) var_15);
                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)19432), (((/* implicit */unsigned short) (signed char)-28))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_13))) : (var_15)))));
                var_29 = ((/* implicit */int) arr_14 [2U] [(short)13] [i_3 - 1] [i_2] [5ULL]);
            }
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 4; i_9 < 12; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */unsigned char) ((max((arr_26 [i_9] [(short)0] [i_3] [(short)0] [i_3 + 2]), (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4395))) : (10630334000462387841ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3920)))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) arr_22 [i_2] [i_2] [1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62351))) : (arr_22 [i_3] [i_9 + 3] [i_9 - 4] [i_9 - 1]))) : (arr_2 [i_10]))))));
                            var_32 -= ((/* implicit */short) (+(((/* implicit */int) ((short) arr_23 [i_9] [i_9 - 2] [14])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_33 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [(unsigned char)7] [i_11] [i_11] [i_11] [i_2]))));
            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8033341195584018262ULL))));
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_36 [i_12]))))) ? (((((/* implicit */int) arr_36 [i_12])) & (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2147483637)))))));
        var_36 += ((/* implicit */_Bool) (unsigned short)0);
        var_37 = ((/* implicit */_Bool) (signed char)127);
    }
    var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))) : (min((var_10), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
    var_39 ^= ((/* implicit */short) (unsigned short)65529);
}
