/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95635
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0]))), (var_5)));
        var_20 = ((/* implicit */signed char) (-(min((((/* implicit */int) var_3)), (var_4)))));
        arr_2 [i_0] = ((/* implicit */int) (signed char)-109);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_12)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (arr_1 [i_0])))));
            var_21 = ((/* implicit */signed char) arr_1 [i_1]);
            var_22 = ((/* implicit */long long int) arr_4 [i_1] [i_1 + 1] [i_1 + 1]);
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))) * (18446744073709551607ULL)));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_3] [i_0] &= ((/* implicit */unsigned long long int) arr_10 [i_0 - 2]);
                        arr_12 [i_2] [i_2] [i_2] &= ((((/* implicit */int) (unsigned short)22736)) - (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2])));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)22736)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_7 [i_1 - 2] [(signed char)9]))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (arr_3 [i_4]) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_14))))) || ((!(((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_7))))))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_24 &= ((/* implicit */unsigned char) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42809))) / (2065141884688119816ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (var_0)))) == (arr_25 [i_5 - 1]))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) | (16381602189021431801ULL)));
                            var_26 = (short)11464;
                            var_27 = ((/* implicit */signed char) arr_0 [9ULL] [i_4]);
                            arr_26 [i_0] [i_7] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned char)113))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_28 = ((/* implicit */long long int) var_17);
            var_29 = max((((/* implicit */unsigned long long int) var_3)), (max((((((/* implicit */_Bool) arr_10 [i_0])) ? (16381602189021431776ULL) : (var_2))), (((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_0] [i_8]))))))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_23 [(unsigned char)9] [(unsigned char)9] [(signed char)17] [i_12] [i_12])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_10] [i_10] [i_10])) : ((~(((/* implicit */int) arr_15 [i_12]))))))));
                        var_31 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10] [i_10] [i_9]))) % (var_16))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned char)6)))))));
                        var_32 = ((/* implicit */unsigned char) ((arr_3 [i_12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_13) : (2824651578U))))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (arr_32 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_27 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9]))))) : (((arr_36 [(signed char)8] [5U] [i_9] [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))))), (((/* implicit */unsigned long long int) arr_21 [i_9] [1ULL] [i_9] [i_9]))));
        var_34 = ((/* implicit */signed char) ((int) var_3));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_14 = 2; i_14 < 17; i_14 += 1) 
        {
            arr_44 [i_13 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)25)) == (((/* implicit */int) (unsigned short)32493))));
            var_35 -= ((((/* implicit */int) arr_7 [i_13 + 1] [i_14 + 1])) == (((/* implicit */int) arr_7 [i_13 + 1] [i_14 - 2])));
        }
        var_36 = ((/* implicit */unsigned int) ((2065141884688119816ULL) / ((-(arr_14 [i_13])))));
    }
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            for (signed char i_17 = 3; i_17 < 18; i_17 += 2) 
            {
                {
                    var_37 ^= var_1;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_18 = 3; i_18 < 20; i_18 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) arr_46 [6LL]);
                        var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) * (17592186044415LL)));
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7680)) / (1631102372))))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        var_41 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_56 [i_17 - 2] [i_17 + 1] [i_17] [i_17])) : (((/* implicit */int) arr_56 [i_17 + 3] [i_17 - 2] [i_17] [i_17 - 2]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15] [i_17 - 1] [i_15]))) / (((13ULL) << (((((/* implicit */int) (unsigned char)233)) - (171)))))))));
                        arr_60 [i_17] [i_17] [(signed char)16] [i_19] [i_17] = ((/* implicit */unsigned long long int) arr_58 [i_15] [i_17] [21LL]);
                        arr_61 [i_15] [i_15] [i_15] = min((((((/* implicit */_Bool) (short)11955)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)-109)))), (((/* implicit */int) var_11)));
                    }
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        arr_66 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */signed char) var_7);
                        /* LoopSeq 1 */
                        for (signed char i_21 = 1; i_21 < 19; i_21 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned int) (unsigned char)222);
                            arr_69 [i_15] [i_15] [i_15] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1531005713)), (arr_65 [i_15] [i_15] [i_17] [i_17] [i_15] [i_15])))) ? (((((/* implicit */int) (short)-17646)) / (((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) max(((signed char)-120), ((signed char)-117))))));
                        }
                    }
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)17)) : (1531005705))), (((int) var_7)))))))));
                }
            } 
        } 
    } 
}
