/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69494
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
    var_12 &= ((/* implicit */unsigned char) ((var_7) != (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (22U))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_14 -= ((/* implicit */_Bool) ((unsigned char) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_2 [i_0] [i_0])))));
                        var_15 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15461)) ? (arr_3 [i_0] [i_0] [i_2]) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) - (arr_10 [i_0])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (unsigned short)26299)) : (((/* implicit */int) var_0))))), (((arr_0 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_16 += ((/* implicit */long long int) arr_4 [i_4]);
                            var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) & (arr_15 [i_0] [i_1] [(unsigned char)13] [i_0])));
                            var_18 |= ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [(signed char)15] [i_5])) != (((/* implicit */int) arr_17 [i_0] [i_5] [i_5] [i_4] [i_5]))));
                        }
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_4])) > (((((/* implicit */int) (unsigned short)2349)) ^ (arr_3 [i_4] [i_4] [i_4])))))), (-220719771))))));
                        var_20 -= ((/* implicit */short) (unsigned char)161);
                        var_21 += (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4]))))));
                    }
                    var_22 ^= ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (signed char)-28)), (arr_8 [2LL] [i_1] [2ULL])))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_21 [i_6] &= ((/* implicit */short) 6241049274251084879LL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (6241049274251084891LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_7 [i_10] [i_10] [i_10] [i_7]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(-4265287572026462305LL))) : (((/* implicit */long long int) arr_3 [i_10] [i_7] [i_7])))))));
                        }
                    } 
                } 
            } 
            var_26 ^= ((/* implicit */_Bool) var_7);
        }
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            var_27 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-22389)), (4634193892372654022LL))))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        arr_40 [i_13] [i_12] [i_6] [i_6] |= (short)7168;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) 3512811919U))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_12 [i_6] [i_6] [i_6] [i_12]))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            arr_47 [i_15] [i_13] [i_6] [i_6] [i_6] [3] [i_6] &= ((/* implicit */unsigned int) 288230375077969920ULL);
                            var_30 ^= ((/* implicit */unsigned char) var_3);
                        }
                    }
                } 
            } 
            var_31 *= (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) / (arr_8 [i_11] [i_6] [i_6]))));
            var_32 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_36 [i_6] [i_11] [i_11] [i_11]))));
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (((!(((/* implicit */_Bool) 2013638014392316085ULL)))) ? (((/* implicit */unsigned long long int) (+(782155404U)))) : (((((/* implicit */_Bool) arr_7 [i_6] [i_11] [i_11] [i_6])) ? (arr_7 [i_11] [i_11] [i_11] [i_6]) : (16248970423406865999ULL))))))));
        }
        var_34 += ((/* implicit */unsigned long long int) arr_1 [i_6] [i_6]);
    }
    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) /* same iter space */
    {
        var_35 ^= ((/* implicit */signed char) var_1);
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) 6840819618342316076LL)) ? (2013638014392316076ULL) : (((/* implicit */unsigned long long int) 9223372036854775794LL)))))));
        var_37 = ((/* implicit */long long int) min((var_37), (max(((+(arr_48 [6ULL]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
        var_38 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)2360)) % ((+((-(((/* implicit */int) arr_50 [i_16]))))))));
        var_39 &= ((/* implicit */unsigned int) var_6);
    }
    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */unsigned long long int) ((11LL) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (max((((/* implicit */unsigned long long int) var_9)), (arr_51 [i_17]))))))));
        var_41 ^= ((/* implicit */unsigned char) min((-60062684), (-558108916)));
    }
    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        var_42 += ((/* implicit */_Bool) var_5);
        var_43 = ((/* implicit */int) max((var_43), (max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_53 [i_18])) : (((/* implicit */int) arr_55 [i_18])))), (((/* implicit */int) arr_53 [i_18]))))));
    }
    var_44 |= ((/* implicit */short) max((((/* implicit */unsigned int) var_4)), ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))))));
}
