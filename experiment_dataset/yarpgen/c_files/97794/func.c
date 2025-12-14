/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97794
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
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                arr_6 [(signed char)7] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned int) arr_3 [i_0] [i_0] [i_2 - 2]));
                var_15 -= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_6)))) & (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1] [i_0]))));
            }
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)99))))) : (arr_5 [i_0] [i_0])));
            var_17 = ((signed char) 5703665558723535657ULL);
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            arr_10 [i_3] = ((/* implicit */_Bool) (-(((unsigned long long int) (signed char)-18))));
            arr_11 [12ULL] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)93)) ? (((((/* implicit */_Bool) arr_8 [1LL] [1LL] [i_3])) ? (2740943397035970605LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))))) : (((/* implicit */long long int) var_8))));
            arr_12 [1LL] [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) var_3));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (short)-20673)))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 *= ((/* implicit */unsigned int) var_11);
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_19 += ((/* implicit */signed char) ((((/* implicit */long long int) arr_17 [i_5])) / (((((/* implicit */_Bool) (signed char)113)) ? (9202314990644869233LL) : (9202314990644869233LL)))));
            var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) + (2584519310U)))));
            arr_20 [i_4] [i_4] = ((/* implicit */signed char) (unsigned char)59);
        }
        for (signed char i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((arr_16 [i_6 + 1] [i_6 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_6 + 1]))))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((long long int) (signed char)-96)) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_4])))));
        }
        arr_25 [i_4] |= ((/* implicit */signed char) ((((-9202314990644869234LL) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 3645048024U)) ? (var_3) : (arr_5 [i_4] [i_4]))) - (4235456018U)))));
        /* LoopSeq 4 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            arr_28 [11U] [i_4] [11LL] = ((/* implicit */short) ((7242671933857528233ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_7])))));
            arr_29 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-9223372036854775794LL)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-75)) > (((/* implicit */int) arr_0 [i_4] [i_7]))))) : (((/* implicit */int) var_12))));
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_23 ^= ((/* implicit */unsigned long long int) -562964617646307944LL);
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                arr_35 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 57344U)) ? (((/* implicit */long long int) ((arr_14 [i_4]) ? (var_3) : (1710447986U)))) : (((var_2) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                var_24 *= ((/* implicit */unsigned long long int) arr_21 [i_4]);
            }
            arr_36 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10]))) > (arr_5 [i_4] [18LL]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 20; i_11 += 2) 
                {
                    for (long long int i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        {
                            arr_45 [i_4] [19U] = ((/* implicit */unsigned int) ((signed char) (signed char)7));
                            var_25 |= 5670744360413252178ULL;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (signed char i_14 = 1; i_14 < 20; i_14 += 3) 
                {
                    {
                        arr_50 [i_13] [i_14] = ((/* implicit */signed char) ((12775999713296299431ULL) >> (((/* implicit */int) var_9))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) > (arr_30 [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [i_8] [i_8] [i_8]))) == (arr_7 [i_14]))))));
                    }
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            arr_53 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_17 [(signed char)17])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15] [i_4])) ? (arr_51 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            arr_54 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)127))));
            arr_55 [i_4] [18U] = ((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (1710447986U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_27 *= ((/* implicit */_Bool) (signed char)77);
            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8LL)) ^ (arr_30 [i_16] [i_4])));
        }
    }
}
