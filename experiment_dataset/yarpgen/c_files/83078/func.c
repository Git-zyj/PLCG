/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83078
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
    var_13 *= ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_1] [i_1 + 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) == (((/* implicit */int) var_11))));
                    arr_9 [i_1] [i_0] = ((/* implicit */int) var_5);
                }
                for (long long int i_3 = 3; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (unsigned short)16058)));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? ((~(((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_1] [i_1 - 4])) != (3366952372222800323LL)))))) : (arr_7 [i_1] [i_1])));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49477))) : (arr_4 [i_3] [i_3] [(signed char)12]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [11ULL])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
                    arr_12 [i_1] [i_1] [9U] [i_1 + 3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)0)), (min(((~(var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))));
                }
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_18 [i_5 + 2] [i_1] [i_5 + 1] [i_5] = ((((/* implicit */_Bool) (unsigned short)60014)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : (((((long long int) var_4)) | (var_3))));
                            var_17 ^= ((/* implicit */unsigned long long int) ((((max((var_3), (((/* implicit */long long int) 3721361805U)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_6))) - (456393048U))))) - (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 14U)))))) ? (max((((unsigned int) 3366952372222800323LL)), (arr_4 [i_5 + 3] [i_1] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1 + 2] [i_4] [i_5 - 1] [i_5]))))))));
                            arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) <= (var_10))))) >= (max((((/* implicit */unsigned long long int) var_3)), (arr_5 [i_1] [i_1] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((long long int) (unsigned short)3869)) : (((/* implicit */long long int) var_10))))));
    /* LoopSeq 4 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) 3364960044U);
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))) * (max((-1935125529378750324LL), (((/* implicit */long long int) var_8))))));
            var_20 |= ((/* implicit */unsigned int) (-(arr_25 [18U])));
        }
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (long long int i_10 = 2; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_21 = (unsigned short)49478;
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_31 [i_10 - 2] [i_8] [i_9] [i_10])))) ? (min((arr_31 [i_10 - 2] [i_8] [i_9] [13U]), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10 - 1] [i_8] [i_9] [i_9]))))))));
                        arr_34 [i_6] [(signed char)15] [(signed char)15] [i_10] = ((/* implicit */unsigned char) arr_28 [i_10 + 2]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_0), (((/* implicit */unsigned short) ((signed char) arr_27 [i_6]))))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_11)))));
        arr_38 [i_11] = ((/* implicit */unsigned int) min(((((+(arr_36 [3U]))) << (((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */unsigned long long int) arr_32 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) : (12938685578806697761ULL))) - (18446744073668825306ULL))))), (((/* implicit */unsigned long long int) min((var_4), (((signed char) (unsigned char)64)))))));
    }
    for (long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 12938685578806697761ULL)))) ? (min((arr_36 [i_12]), (((/* implicit */unsigned long long int) (unsigned char)30)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7552336914881611276ULL)))))))))));
        var_24 = ((/* implicit */unsigned short) 4294967295U);
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                for (signed char i_16 = 1; i_16 < 14; i_16 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_14] [i_15] [i_16 + 3] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_14]))) : (var_3)));
                        /* LoopSeq 2 */
                        for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            arr_57 [i_13] [i_13] [i_15] [i_17] = ((/* implicit */unsigned short) 3090759851U);
                            var_26 = ((/* implicit */signed char) (~(arr_22 [i_17] [i_14 + 1])));
                            arr_58 [(unsigned short)16] [9] [1] [i_16] [i_16 + 2] [i_16] [i_16] = ((/* implicit */unsigned char) (-(arr_54 [i_14 + 2] [i_14 + 2])));
                        }
                        for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
                        {
                            var_27 = (+(var_5));
                            var_28 *= ((/* implicit */unsigned short) ((long long int) (unsigned char)47));
                            arr_62 [i_13] [(unsigned short)16] [i_15] [i_15] [(unsigned short)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_14 - 1] [i_16 + 1] [i_16])) ? (((/* implicit */int) arr_33 [i_14 - 1] [i_16 + 2] [i_18])) : (((/* implicit */int) arr_33 [i_14 + 1] [i_16 - 1] [i_18]))));
                            arr_63 [i_18] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11462))))) > (((/* implicit */int) (unsigned char)37))));
                        }
                        /* LoopSeq 3 */
                        for (int i_19 = 3; i_19 < 14; i_19 += 4) 
                        {
                            var_29 ^= ((/* implicit */long long int) ((var_5) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58989))) : (arr_22 [i_16] [i_14 + 2])))));
                            arr_66 [(signed char)13] [(signed char)13] [2LL] [i_16] [i_16] = ((/* implicit */unsigned short) (~(arr_28 [i_13])));
                            arr_67 [i_13] [i_13] [i_13] [11LL] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((int) var_4));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)30))))) / (arr_55 [i_13] [i_14] [i_13] [i_16] [8LL])));
                        }
                        for (int i_20 = 0; i_20 < 17; i_20 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) (+(4294967282U)));
                            var_32 = ((long long int) 12182609313588465778ULL);
                            var_33 = ((/* implicit */int) var_6);
                        }
                        for (signed char i_21 = 3; i_21 < 16; i_21 += 4) 
                        {
                            arr_74 [i_15] = ((/* implicit */unsigned short) var_10);
                            var_34 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_49 [i_13] [i_14] [i_15])))) ? (((/* implicit */int) ((signed char) 4294967282U))) : (((/* implicit */int) var_1))));
                            var_35 = ((/* implicit */signed char) (-((-(arr_60 [i_13] [i_13] [i_13] [i_13])))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */signed char) ((-3177066234216008507LL) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-77)) || (((/* implicit */_Bool) 1406826126U))))))));
    }
}
