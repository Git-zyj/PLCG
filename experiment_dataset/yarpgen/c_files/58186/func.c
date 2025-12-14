/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58186
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
    var_19 &= ((/* implicit */unsigned short) max((var_8), (var_7)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4080)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= (arr_1 [i_0] [i_0])))) <= (((/* implicit */int) (unsigned short)4080))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61455)) && ((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_8 [i_1] [i_1] [i_2] [i_1] |= ((/* implicit */int) (((-((+(((/* implicit */int) (unsigned short)61438)))))) <= (((/* implicit */int) arr_4 [i_1]))));
                arr_9 [i_0] [i_1] [i_1] [(short)9] = ((/* implicit */unsigned char) (~(max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                var_20 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) & (var_8))) + (arr_0 [i_0])))) || (((/* implicit */_Bool) (~(max((var_15), (arr_5 [i_2] [i_2])))))));
            }
            var_21 = ((/* implicit */short) ((unsigned char) (+((+(arr_5 [i_0] [i_1]))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                arr_13 [i_0] [i_3] = ((/* implicit */short) arr_5 [i_1] [(short)7]);
                arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
            }
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_4))));
            var_23 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_6 [i_0] [i_1] [i_1]));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) max(((!((!(((/* implicit */_Bool) var_5)))))), ((!(((/* implicit */_Bool) arr_11 [i_0] [i_5]))))));
                var_24 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)8208)) ? (((/* implicit */int) (unsigned short)61464)) : (((/* implicit */int) (unsigned short)8194)))), (((/* implicit */int) var_3))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_25 [i_0] = var_15;
                arr_26 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)58))) && (((/* implicit */_Bool) arr_6 [i_6] [i_4] [i_0]))));
                arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (5328566043825297368ULL)))))) ? (((((1981716238405204418ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8172))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)8191)))) * ((+(((/* implicit */int) arr_12 [i_0] [i_6])))))))));
            }
            for (int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                var_25 = ((((/* implicit */_Bool) min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) arr_12 [i_0] [i_4])) ? (((/* implicit */int) arr_19 [i_0] [i_4] [i_7])) : (((/* implicit */int) arr_4 [i_7]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((int) (signed char)47)) >= (arr_3 [i_0] [i_4]))))) : (max((((/* implicit */unsigned int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4])))))), (arr_0 [i_0]))));
                arr_30 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */int) max((arr_21 [(short)9]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57350)) & (((/* implicit */int) (unsigned char)15))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) (~(arr_17 [i_10 - 1] [i_10 - 1])));
                        var_27 = ((/* implicit */unsigned char) ((((arr_36 [i_0] [i_4] [i_8] [(short)4]) * (arr_0 [i_0]))) << (((/* implicit */int) arr_11 [i_10 + 1] [i_8]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_40 [i_0] [i_4] [i_0] [i_11] [i_11] = ((/* implicit */int) (unsigned char)0);
                        arr_41 [i_0] [i_11] [i_8] [i_9] = ((((/* implicit */_Bool) (+(var_16)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_11] [i_4] [i_8] [i_4]))));
                        arr_42 [i_0] [i_11] [i_4] [6ULL] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((1014012645U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61457))))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 7; i_12 += 3) 
                    {
                        arr_46 [i_0] [i_0] [i_0] [i_0] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_8] [i_9] [i_0])) ? (13118178029884254248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12 + 3] [i_12] [i_12] [i_12])))));
                        arr_47 [2] [i_9] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 100053184583703408LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (-100053184583703408LL)));
                        arr_48 [i_0] [i_4] [i_4] [i_4] [(short)1] = -100053184583703411LL;
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_51 [i_0] [i_4] [i_13] [i_4] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8165))))) : (arr_6 [i_9] [i_4] [i_8])));
                        arr_52 [i_0] [i_4] = ((/* implicit */unsigned long long int) var_12);
                        var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_29 &= ((/* implicit */unsigned short) arr_39 [i_8] [i_9]);
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        arr_55 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) var_16);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13118178029884254254ULL)) || (((/* implicit */_Bool) 1038365172U))));
                    }
                    var_31 = ((/* implicit */long long int) arr_16 [i_0] [i_9]);
                }
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_45 [i_0] [i_4] [i_8] [i_15])) * (var_7)));
                    arr_58 [i_0] [i_4] &= ((/* implicit */unsigned long long int) arr_35 [i_0]);
                }
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_43 [i_0] [i_0] [i_4] [i_8] [i_0] [i_8]))));
            }
            arr_59 [i_0] = (~(1981716238405204418ULL));
            arr_60 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
        }
        var_34 = ((/* implicit */unsigned long long int) (((+(4294967279U))) > (((/* implicit */unsigned int) arr_32 [i_0]))));
    }
    var_35 = max((((/* implicit */int) var_6)), ((~(((((/* implicit */_Bool) 910166989)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_17)))))));
}
