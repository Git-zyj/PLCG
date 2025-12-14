/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9749
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
    var_13 = ((/* implicit */unsigned long long int) ((long long int) var_5));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) var_12);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) min(((+(2608173651490060177LL))), (((/* implicit */long long int) min(((unsigned short)51825), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [6ULL])))))));
                var_16 = arr_0 [i_0];
                var_17 = ((/* implicit */unsigned int) var_12);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_18 &= ((/* implicit */_Bool) ((unsigned char) (((-(((/* implicit */int) var_7)))) << (((((unsigned long long int) var_8)) - (18446744073709551610ULL))))));
                            var_19 = ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) 2017068325)) : (var_6)))) : (((/* implicit */unsigned long long int) arr_10 [i_0])));
                            var_20 += ((/* implicit */unsigned char) ((signed char) arr_0 [i_5]));
                            arr_14 [(_Bool)1] [i_0] [i_3] [(_Bool)1] [1U] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -2017068322)) + (2828654074U)))), (arr_12 [i_0] [i_1] [i_0 - 1] [i_3] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_11 [i_1]))));
                        }
                    } 
                } 
                arr_15 [(unsigned short)6] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((var_9) < (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((var_1) - (12950364503393638922ULL))))))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                {
                    {
                        var_21 -= ((/* implicit */_Bool) min((((9223372036854775792LL) / (((/* implicit */long long int) -2017068325)))), (((/* implicit */long long int) ((unsigned int) arr_0 [i_6])))));
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) var_5)) - (var_1))) >= ((+(var_6))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_8)), (arr_24 [i_8 + 2] [i_8] [i_7 - 2] [i_0 - 3] [i_0]))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-19916)))))));
                            var_24 = ((/* implicit */int) ((((min((16158176160807834109ULL), (2288567912901717497ULL))) * (((/* implicit */unsigned long long int) var_3)))) != ((~(arr_5 [i_1])))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) arr_24 [10LL] [(unsigned char)7] [i_6] [i_7] [i_1]);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_9 = 3; i_9 < 10; i_9 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 3])) ? (arr_20 [i_0 + 3] [i_0] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9 - 2] [i_0 + 3] [(short)1] [(_Bool)1] [7ULL] [i_0])))));
            var_27 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (arr_24 [i_0] [i_0] [i_9] [i_0 - 1] [i_0]))));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_10 + 1])) ? (arr_5 [i_10 - 3]) : (arr_5 [i_10 - 3])));
            arr_31 [i_0 - 1] [8] &= ((/* implicit */unsigned long long int) (unsigned char)110);
        }
        var_29 = ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 3) 
    {
        var_30 = ((/* implicit */int) ((short) var_0));
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 17; i_14 += 2) 
                {
                    {
                        var_31 = ((/* implicit */int) (~(min((var_6), (((/* implicit */unsigned long long int) arr_32 [i_14 - 2] [i_13 + 1]))))));
                        var_32 = ((/* implicit */signed char) ((unsigned short) (unsigned char)55));
                    }
                } 
            } 
        } 
        arr_44 [i_11 + 2] [i_11 + 3] = ((/* implicit */unsigned char) ((arr_39 [7ULL]) > (((/* implicit */long long int) ((arr_32 [i_11 + 2] [i_11 + 2]) ? (((/* implicit */int) arr_32 [i_11 + 4] [(unsigned short)11])) : (((/* implicit */int) arr_32 [i_11 + 1] [i_11])))))));
        arr_45 [i_11] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)29465))))) < (((/* implicit */int) ((((/* implicit */_Bool) -2017068327)) && (((/* implicit */_Bool) 1049446072U))))))));
    }
    /* LoopNest 2 */
    for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 1) 
        {
            {
                arr_52 [i_15] = ((/* implicit */int) 12233316202584918242ULL);
                var_33 = ((/* implicit */long long int) ((min((arr_48 [(short)6] [i_15] [i_16 - 1]), (((unsigned long long int) arr_36 [i_15] [i_15])))) ^ (((/* implicit */unsigned long long int) 3245521223U))));
                arr_53 [i_16] [(unsigned char)16] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_40 [i_15] [i_16] [i_15] [i_15] [i_15] [0LL])) / (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) <= (var_0))))))));
                var_34 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_41 [i_15])))) && (((/* implicit */_Bool) arr_42 [i_15] [i_15] [i_16 + 1] [i_15])))) && ((_Bool)1)));
            }
        } 
    } 
    var_35 = var_6;
    var_36 = ((/* implicit */unsigned int) var_3);
}
