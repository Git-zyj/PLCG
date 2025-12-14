/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57841
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
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [(short)17] [i_0] = (~(min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_12))))), (max((186849269U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2])))))));
                                var_18 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) ((unsigned short) var_3)))))), ((~(((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1] [i_0] [i_4])) - (29499)))))))))) : (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) ((unsigned short) var_3)))))), ((~(((((((/* implicit */int) var_12)) + (2147483647))) >> (((((((/* implicit */int) arr_2 [i_1] [i_0] [i_4])) - (29499))) + (7664))))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */short) min((((/* implicit */int) max((arr_10 [i_0] [i_0] [i_2] [i_4] [i_3] [i_4] [i_0]), (arr_10 [i_0] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) arr_3 [i_1] [i_2] [i_4]))))));
                                var_19 -= ((/* implicit */signed char) (((~(max((((/* implicit */unsigned int) var_2)), (var_3))))) + (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_2 [i_0] [i_4] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) (((+(max((8400869225926109937ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_12))))), (4108118030U))))));
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) ((var_7) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))));
                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_6 [i_0] [i_1] [i_1]), (var_5)))) ^ (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min(((-(((/* implicit */int) arr_2 [i_7] [i_6] [i_5])))), (((((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_18 [i_5])))))))));
                    arr_27 [i_5] [i_6] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [(signed char)4] [i_7]))) + (max((var_7), (((/* implicit */unsigned int) var_12)))))), (186849293U)));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        var_21 -= ((/* implicit */short) var_7);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (arr_18 [(_Bool)0])))) ? (((186849271U) << (((((/* implicit */int) arr_6 [i_7] [i_6] [i_7])) - (59))))) : (((/* implicit */unsigned int) ((arr_7 [i_7]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))))))));
                        var_23 = arr_19 [i_5];
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (signed char)-88)), (arr_18 [i_9])))) - (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) (~((+(((/* implicit */int) arr_30 [i_6] [i_10])))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_32 [i_9]) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) arr_26 [i_10] [i_9] [i_7]))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_36 [i_5] [i_6] [(short)6] [i_11] [i_9] [i_11]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_6])))))) ? (max((arr_21 [i_11] [i_7] [i_5]), (((/* implicit */unsigned int) arr_20 [i_9] [i_11])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8)))))))));
                            arr_38 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-88)) && (((/* implicit */_Bool) var_10)))))))) ? ((-(((((/* implicit */int) var_8)) / (((/* implicit */int) arr_11 [i_5] [i_5] [(_Bool)1] [i_7] [i_9] [10LL])))))) : ((-((-(((/* implicit */int) arr_26 [i_5] [i_5] [i_5]))))))));
                            var_27 -= ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (short)(-32767 - 1)))))), ((~(843209920U)))))), (((((/* implicit */_Bool) max((var_8), (var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) arr_28 [i_5] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-88)), ((unsigned char)130)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                        {
                            arr_41 [i_12] [i_6] [i_7] [i_6] [i_6] [i_5] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_39 [i_5] [i_6] [i_7] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [4U]))) : (var_15)))));
                            var_28 = ((/* implicit */signed char) var_16);
                            arr_42 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5] = ((/* implicit */short) arr_21 [i_6] [i_6] [i_12]);
                            arr_43 [i_12] [i_9] [i_5] [i_6] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_5)) - (75)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_9])) >> (((var_9) - (372478623615050044LL)))))) : ((+(var_16)))));
                        }
                        arr_44 [i_6] [i_7] [i_6] [i_6] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_9] [i_7] [i_6])) : (((/* implicit */int) arr_3 [i_7] [i_6] [i_5])))), (((((/* implicit */int) arr_3 [(signed char)3] [i_7] [i_9])) ^ (var_10)))));
                        var_29 = ((/* implicit */short) var_9);
                    }
                }
            } 
        } 
    } 
}
