/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88906
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
    var_13 = ((/* implicit */unsigned long long int) 1672053637);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)12))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] &= ((/* implicit */short) arr_1 [i_0]);
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) ((arr_6 [i_2 + 1] [i_2] [i_2] [i_2 + 2]) != (4081778788781408033LL)));
                var_18 ^= ((/* implicit */unsigned long long int) (signed char)-1);
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    arr_10 [i_2] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 2] [i_3 + 2]))) & (var_6));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_11);
                }
            }
            for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
            {
                var_19 = ((/* implicit */int) var_1);
                arr_14 [i_4] [i_1] [i_0] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_4]))) * (var_9))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36905)) ? (-6182836678180545745LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)27785)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((short) 1173491996U)))));
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_6])))))) ? (-4081778788781408023LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4] [i_4 + 1] [i_4]))));
                        var_22 += ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1] [i_1]);
                        var_23 = (+(var_7));
                        var_24 += ((arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]) <= ((-(var_3))));
                        var_25 -= ((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4]);
                    }
                    arr_19 [i_4 - 1] [i_4 - 3] |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-7381)) : (-356486537)));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_22 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35)))));
                        var_26 *= ((/* implicit */unsigned char) ((unsigned int) (signed char)-87));
                    }
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */short) var_6);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)241))));
                        var_29 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9)));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-3603466427103940269LL)))) ? (((unsigned int) (unsigned short)10305)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3603466427103940293LL)) ? (var_0) : (((/* implicit */int) var_11)))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((7559317400496807898LL) + (((/* implicit */long long int) -356486551))))) ? (((/* implicit */long long int) 7U)) : (0LL)));
                        arr_29 [i_0] [i_0] [i_9] [i_4] [i_5] [i_4] [i_9] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))));
                        var_32 = ((/* implicit */short) ((3U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31)))));
                    }
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1433444710866438222LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (728944699)));
                }
                for (unsigned char i_10 = 3; i_10 < 15; i_10 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) ((_Bool) 1632570082U));
                    var_35 -= ((/* implicit */unsigned long long int) -872308909);
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        arr_39 [8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18739)) ? (arr_3 [i_0] [i_4 - 3] [i_12 - 1]) : (arr_24 [i_0] [i_11 + 1] [i_1] [4LL] [i_0])));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 549755813887ULL)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (signed char)-100))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 16; i_13 += 3) 
                    {
                        arr_43 [i_13] [i_11] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [13LL])) ? (((/* implicit */int) ((var_0) == (arr_40 [i_0] [i_0] [10] [i_0] [i_0] [i_0] [10])))) : (((/* implicit */int) ((_Bool) var_8)))));
                        var_37 = ((/* implicit */long long int) ((signed char) var_8));
                    }
                    for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(377003731)))) >= (var_3)));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) arr_24 [i_0] [i_11] [i_1] [i_1] [i_0]))));
                        var_40 = ((((/* implicit */int) arr_30 [(unsigned short)16] [(unsigned short)16] [i_4 + 1] [i_11 + 1])) >> (((((/* implicit */int) arr_30 [i_0] [i_14] [i_4 + 1] [i_11 + 1])) - (5749))));
                    }
                    var_41 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_4 - 1]));
                    var_42 = ((/* implicit */unsigned long long int) var_2);
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 1; i_15 < 15; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_17 = 1; i_17 < 16; i_17 += 4) 
                    {
                        var_43 ^= ((/* implicit */unsigned short) 4201108309283123040LL);
                        var_44 = ((/* implicit */signed char) (+(((/* implicit */int) ((2662397232U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_45 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_52 [i_15])) : (((/* implicit */int) arr_12 [i_0] [i_15] [i_16] [i_0]))))));
                    var_46 = ((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)9147))));
                    var_47 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_15 + 1] [i_15 - 1] [i_15] [i_15 - 1])) ? (((/* implicit */unsigned long long int) -2752311785039570421LL)) : (arr_8 [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15])) || (((/* implicit */_Bool) arr_8 [i_15 - 1] [i_15 + 1] [i_15] [i_15 + 1]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) 
    {
        var_48 *= ((((/* implicit */int) ((((((/* implicit */_Bool) 2017612633061982208LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-3752586148299315132LL))) < (((((/* implicit */_Bool) arr_46 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (arr_28 [i_18] [i_18] [i_18] [i_18] [i_18]) : (4081778788781408013LL)))))) >= (((/* implicit */int) (_Bool)1)));
        var_49 = ((/* implicit */unsigned int) (-(1165140349)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_19 = 3; i_19 < 24; i_19 += 3) 
    {
        var_50 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((((/* implicit */int) (short)-22098)) + (2147483647))) >> (((var_7) - (1732490436473850699ULL)))))) ? (((/* implicit */int) arr_62 [i_19 - 1])) : (((/* implicit */int) (short)8620)))) >> (((((/* implicit */int) var_12)) - (15699)))));
        var_51 = ((/* implicit */_Bool) var_9);
        var_52 -= ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (short)726)))) || (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)-8645)))))) ? ((+(var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9678)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_19])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [(short)22]))))) : (var_0)))));
    }
    var_53 = ((/* implicit */unsigned short) var_3);
}
