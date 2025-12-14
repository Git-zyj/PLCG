/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67583
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
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_17 = var_1;
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) var_10)) | (-2994838885547920862LL))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_12))) >= (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)55677))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned char) var_3);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_13))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned long long int) (-(var_6)));
        var_21 = ((/* implicit */short) var_14);
        var_22 += ((/* implicit */signed char) (short)0);
    }
    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_23 = (i_4 % 2 == zero) ? (((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_15))))) ? (min((-288230376151711744LL), (((/* implicit */long long int) (unsigned char)136)))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-92))))))) + (9223372036854775807LL))) >> (((((arr_1 [i_4 - 3] [i_4]) % (var_7))) + (1724909652773823517LL)))))) : (((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_15))))) ? (min((-288230376151711744LL), (((/* implicit */long long int) (unsigned char)136)))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-92))))))) + (9223372036854775807LL))) >> (((((((arr_1 [i_4 - 3] [i_4]) % (var_7))) + (1724909652773823517LL))) - (5049512895600488505LL))))));
        var_24 &= -1417187717367440999LL;
        var_25 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_11 [i_4])) / (((/* implicit */int) ((short) var_7))))), (((/* implicit */int) var_13))));
        var_26 &= ((/* implicit */short) 0U);
        var_27 ^= ((/* implicit */_Bool) ((unsigned int) ((short) ((((/* implicit */int) (short)23986)) ^ (((/* implicit */int) var_12))))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) ((unsigned short) (signed char)92))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                arr_21 [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) (short)23998));
                var_29 -= ((/* implicit */_Bool) ((unsigned long long int) (short)-24000));
                var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (10U)))) ? (arr_1 [i_5] [i_7]) : (10LL)));
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)92))));
            }
            for (short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_32 |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) || (((/* implicit */_Bool) var_11))));
                            var_34 = ((long long int) var_2);
                        }
                    } 
                } 
                arr_29 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-22122))));
                arr_30 [i_5] [i_6] [i_5 - 1] [i_5] = (!(((/* implicit */_Bool) (unsigned char)240)));
                var_35 += ((/* implicit */short) var_11);
            }
            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (_Bool)1))));
                arr_34 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23986)) ? (arr_20 [i_5] [i_5 - 1] [i_5] [i_5 - 2]) : (arr_20 [i_5] [i_5 - 2] [i_5] [i_5 + 1])));
            }
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    arr_39 [i_5] [i_5] [i_12] [i_13] [i_13] [(unsigned short)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) (signed char)-122)))))));
                    arr_40 [i_5 - 2] [i_6] [i_6] [i_6] [i_12] [i_5] = ((/* implicit */short) var_0);
                    var_37 = ((/* implicit */short) min((var_37), (var_12)));
                    var_38 = ((/* implicit */unsigned short) var_12);
                }
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) | (arr_36 [i_12] [i_6] [13ULL])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_23 [i_5 - 3]))));
            }
            var_40 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) - (((((/* implicit */_Bool) var_13)) ? (26ULL) : (((/* implicit */unsigned long long int) arr_1 [i_5 - 2] [i_5])))));
        }
        for (signed char i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))) || (((_Bool) var_3))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_6)))))));
            var_42 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_14)) ? (arr_16 [i_5] [i_5] [i_5]) : (var_6))) : ((-(var_5)))))));
            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_3))))))));
        }
        for (short i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            arr_46 [i_5] [i_5] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */long long int) var_4)) : (var_2)));
            var_44 = ((/* implicit */long long int) var_9);
            var_45 = ((/* implicit */long long int) (((((-(340842582U))) >> (((var_7) + (5541950691678478805LL))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_5 - 1] [i_5 - 3])) << ((((((+(var_7))) + (5541950691678478807LL))) - (24LL))))))));
        }
        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_5 [i_5] [i_5] [i_5]), (((/* implicit */short) (signed char)91)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((7628045464318861760LL), (((/* implicit */long long int) (short)0))))))) : (((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 3])) ? (((/* implicit */unsigned long long int) var_6)) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 2837392685U))))))));
        var_47 = ((/* implicit */unsigned short) min((arr_1 [i_5] [i_5]), (((/* implicit */long long int) (-(((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (short)24600)))))))))));
    }
    var_48 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned short i_16 = 2; i_16 < 7; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                {
                    arr_56 [i_16 + 2] [i_17] [i_17] = (-((-((+(6285409401136017645LL))))));
                    var_49 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
    var_50 &= (signed char)7;
}
