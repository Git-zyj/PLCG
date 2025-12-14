/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76582
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
    var_10 = ((/* implicit */long long int) var_6);
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (short)25))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((int) arr_2 [i_0] [i_0]));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((short) (short)25)))));
        var_13 = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_5 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned int) arr_1 [i_0])))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [17ULL] = ((/* implicit */unsigned short) var_3);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12711))) + (var_7))))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) arr_12 [i_2 + 1] [i_2 - 1]);
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_16 = ((/* implicit */signed char) (-(var_5)));
            var_17 = ((/* implicit */unsigned long long int) (signed char)-49);
            arr_18 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_2 + 1] [i_2 + 1])) ? (7516164193855485064LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_18 *= ((/* implicit */unsigned short) arr_0 [19ULL]);
        }
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_19 = arr_12 [i_4] [i_5];
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_4] [i_5])))))));
        }
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((((int) max(((unsigned short)56197), (((/* implicit */unsigned short) (unsigned char)64))))), (((/* implicit */int) arr_9 [i_4] [i_6]))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)223)) >> (((((/* implicit */int) (short)-25517)) + (25523)))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((-1505350503) % (((/* implicit */int) arr_30 [i_8 + 2] [i_8 + 2] [i_9] [i_9] [i_9]))))) && (((/* implicit */_Bool) min((((/* implicit */short) var_1)), (arr_30 [i_8 + 2] [i_9] [i_9] [i_9] [i_9])))))))));
                        }
                        for (signed char i_10 = 2; i_10 < 18; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) (signed char)-5);
                            arr_38 [i_4] [i_6] [i_7] [i_8 - 1] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) arr_33 [i_8 - 1])) : (((/* implicit */int) var_4)))))))));
                            arr_39 [i_4] [i_4] [i_4] [15U] [i_7] [15U] [i_10] = var_4;
                            arr_40 [i_4] [i_6] [16U] [i_8 + 1] [i_10] = ((long long int) ((((/* implicit */_Bool) 3234841540U)) ? (arr_1 [i_4]) : ((((_Bool)1) ? (var_7) : (var_7)))));
                        }
                        arr_41 [3LL] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((-999250624) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_6])) - (51)))))) == ((-(var_7)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                arr_45 [i_4] [(unsigned char)4] [i_11] [i_11] = ((/* implicit */short) -954316127680698418LL);
                arr_46 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1999127870)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_6] [i_6] [i_6])))))))) ? (min((arr_22 [i_4]), (((/* implicit */unsigned int) (unsigned short)62237)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_14 [i_6] [i_11]))))))));
                var_24 = ((/* implicit */unsigned char) var_4);
            }
        }
        for (short i_12 = 1; i_12 < 18; i_12 += 2) 
        {
            var_25 ^= 5849984943585308967LL;
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_49 [i_12 + 1] [i_12] [i_12 + 1]))));
            arr_51 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)480)) ? (((720644962U) * (2097136U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_12] [i_4]), (((/* implicit */unsigned char) (_Bool)1))))))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) max((var_0), (var_1))))))) : ((+((+(18446744073709551615ULL)))))));
            var_27 = ((/* implicit */_Bool) min((arr_22 [i_4]), (((((/* implicit */_Bool) arr_50 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (2143580643U)))));
        }
        arr_52 [i_4] = ((/* implicit */unsigned int) 2147483647);
        arr_53 [i_4] = min((((/* implicit */long long int) ((((-2147483642) - (((/* implicit */int) arr_9 [i_4] [i_4])))) + (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_32 [i_4] [15U] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
    }
    var_28 = ((/* implicit */_Bool) (signed char)89);
    var_29 = ((/* implicit */unsigned int) var_9);
}
