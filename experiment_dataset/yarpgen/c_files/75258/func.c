/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75258
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (9U)))), (((((/* implicit */_Bool) 4294967287U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    }
    for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((arr_6 [i_1]) ^ (arr_6 [i_1]))) : ((~(arr_6 [i_1])))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_12 [i_2] [2] |= ((/* implicit */unsigned char) var_9);
            arr_13 [i_1] = ((/* implicit */unsigned int) var_8);
            var_17 = ((/* implicit */_Bool) (unsigned char)255);
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (signed char)97)))));
            arr_17 [i_1] [i_1] = ((/* implicit */int) (((~(((var_15) << (((((/* implicit */int) arr_8 [i_1])) + (137))))))) << ((((+((+(var_0))))) - (3016432547U)))));
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) arr_19 [i_7] [i_7]);
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_8 [i_1 + 1]))));
                            var_21 = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7] [i_6] [i_6] [15] [15] [i_1])) & (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_19 [i_1] [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (arr_21 [8LL] [(short)16] [i_5] [(short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [15ULL]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1] [i_4])))))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [i_4] = ((/* implicit */int) max((16862280661121185901ULL), (((/* implicit */unsigned long long int) (short)28300))));
            arr_29 [i_1] = ((((((/* implicit */unsigned long long int) arr_11 [i_1 - 3] [i_1 - 3] [i_4])) == (var_6))) ? (((/* implicit */long long int) max(((-(var_15))), (min((var_5), (((/* implicit */unsigned int) (-2147483647 - 1)))))))) : (arr_11 [i_1 + 1] [i_1 - 3] [i_4]));
            arr_30 [(unsigned char)15] [(unsigned char)15] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1 - 1] [i_1 + 1] [i_1 - 2])) ^ (((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 3] [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_14 [i_1 - 3] [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_14 [i_1 - 3] [i_1 - 3] [i_1 - 1])))) : (((/* implicit */int) arr_14 [i_1 - 1] [i_1 + 2] [i_1 - 1]))));
        }
        arr_31 [i_1] = ((/* implicit */short) ((_Bool) 3U));
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_13);
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8])) ? (arr_32 [i_8]) : (arr_32 [i_10])))))))));
                    var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_9])))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_10] [i_9] [i_8])))))));
                    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1046895067)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4294967286U)));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-1))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (short)28297)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 32767U)), (-4422931254701738163LL)))) ? (max((((/* implicit */long long int) var_15)), (arr_37 [i_8] [i_8] [i_8]))) : (((var_14) ? (((/* implicit */long long int) arr_32 [i_8])) : (var_9)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 4; i_11 < 19; i_11 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((arr_40 [i_8] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11 + 1] [i_11 - 4]))) : (max((((/* implicit */unsigned long long int) arr_39 [i_8] [(signed char)18] [i_11])), (var_6))))))));
            arr_44 [i_8] = ((/* implicit */_Bool) arr_36 [i_8]);
            arr_45 [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((~(((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8] [(_Bool)1]))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_43 [i_8] [i_11 - 2]), (arr_43 [i_8] [i_11 - 2])))))));
            var_27 -= ((/* implicit */unsigned long long int) min(((~(arr_32 [i_11 - 1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))));
        }
        for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_8] [i_8])))))));
            var_29 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (min((var_15), (var_0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (1023U)))))))));
        }
    }
    for (signed char i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned char) (unsigned char)198))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_49 [i_13]), (var_12))))) : (min((var_5), (((/* implicit */unsigned int) var_7))))))));
        arr_50 [i_13] [i_13] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_43 [i_13] [i_13])))) | (((arr_43 [i_13] [i_13]) ? (((/* implicit */int) arr_43 [i_13] [i_13])) : (((/* implicit */int) arr_43 [i_13] [i_13]))))));
    }
    /* LoopNest 3 */
    for (short i_14 = 4; i_14 < 12; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                {
                    arr_59 [i_14 + 1] [i_14 - 3] [i_14 - 3] = ((/* implicit */unsigned int) (~(((int) arr_21 [i_14] [i_14 - 2] [i_14] [i_14]))));
                    arr_60 [(signed char)11] [i_15] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (arr_11 [i_14] [i_15] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_14] [i_15])))))))), ((~(arr_41 [i_14 - 1] [i_14 - 1])))));
                }
            } 
        } 
    } 
}
