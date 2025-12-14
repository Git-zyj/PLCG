/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86356
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)20] [(unsigned short)20] &= ((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)-72))))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            arr_11 [i_1 - 2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-81)) + (2147483647))) << (0)))) ^ ((+(var_8)))))) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) max((max(((signed char)-72), ((signed char)86))), ((signed char)-87))))));
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)91))));
            arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 2] [i_1])) ? (-16) : (((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1] [i_1])))) : ((-(((/* implicit */int) (signed char)86))))));
        }
        arr_13 [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) & (var_6)))) ? (((/* implicit */int) ((signed char) 1166906581495255772ULL))) : (((/* implicit */int) ((unsigned short) (signed char)-87))))), (((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_0) - (1492391279))))))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((((/* implicit */int) ((signed char) arr_0 [i_1]))) & (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1]))))))))))));
    }
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_26 [i_3] = ((/* implicit */unsigned short) ((17021027051198068300ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_4] [13U] [i_4] [i_3 - 2])))));
                        var_16 = ((((((/* implicit */_Bool) 17279837492214295843ULL)) ? (var_2) : ((-9223372036854775807LL - 1LL)))) % (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3 - 2] [0U] [i_3] [i_3]))));
                        arr_27 [i_6] [i_4] &= ((/* implicit */unsigned short) (signed char)-87);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 *= ((/* implicit */_Bool) (+(-6588170248463638928LL)));
                        arr_30 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_3]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        arr_33 [i_3] [i_3] [i_5] [i_3] [i_4] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_9 [i_3] [i_3]))))));
                        arr_34 [i_3] [i_4] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((~(var_8))) - (3014498197410189017ULL)))));
                    }
                    arr_35 [i_5] [i_3] [i_5] [(signed char)2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                    arr_36 [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)0)) ? (4823317011423037141LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                arr_42 [i_4] [(unsigned char)16] [i_9] [i_3] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) 31LL)) || (((/* implicit */_Bool) 9223372036854775807LL))));
                                arr_43 [(unsigned short)11] [i_9 + 1] [i_9] [(unsigned short)9] [i_9] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_9]))));
                                var_18 *= ((/* implicit */unsigned short) (+(min(((+(((/* implicit */int) (signed char)-72)))), ((-(2147483647)))))));
                                arr_44 [(unsigned char)6] [i_4] [(unsigned char)6] [(unsigned char)4] [6LL] [i_4] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7004559665157317733ULL) << (((199705052U) - (199705014U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3606945485360891446LL))))) : (((((/* implicit */int) (signed char)16)) + (((/* implicit */int) (signed char)10))))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_3 + 1] [i_3 + 1] [i_5])))));
                                var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_17 [i_4] [i_4]), (((/* implicit */signed char) arr_23 [i_5] [i_4] [i_3] [i_4] [i_3 - 2]))))) ? (((17279837492214295844ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))) < (7004559665157317733ULL))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        arr_48 [(unsigned short)8] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1166906581495255787ULL))))) * ((~(((/* implicit */int) (unsigned char)99))))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            arr_52 [i_11] [(unsigned short)10] [i_12] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_12 + 1] [i_12 + 1] [i_12])) ? (((/* implicit */int) arr_8 [i_12] [i_11] [i_11])) : (((/* implicit */int) arr_19 [i_12])))));
            arr_53 [i_11] [i_12] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)16793))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (unsigned int i_14 = 3; i_14 < 11; i_14 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_11])))))))));
                        var_22 = ((/* implicit */long long int) 5816385126823604429ULL);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                arr_63 [i_11] [i_12] [i_11] = ((/* implicit */signed char) ((((long long int) (signed char)10)) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_11] [i_12])))));
                var_23 *= (_Bool)1;
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(var_8))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_11] [(signed char)4] [i_11] [i_12 + 1])) ? (arr_38 [i_12] [i_12 + 1] [(short)11]) : (((((/* implicit */_Bool) arr_25 [i_11] [i_15] [i_11] [i_16] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_16] [i_12] [i_15] [i_15] [i_12] [i_16]))) : (4904959423447869519ULL))))))));
                    arr_66 [i_11] [i_12] [i_15] [i_11] [i_11] [i_12 + 1] = ((((unsigned long long int) var_4)) % (((/* implicit */unsigned long long int) arr_64 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1])));
                }
            }
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                var_26 *= ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_12 + 1] [11LL])) << (((arr_29 [i_11] [i_12] [0ULL] [i_11] [i_12 + 1] [i_12]) + (3132767686413102975LL)))));
                /* LoopNest 2 */
                for (long long int i_18 = 4; i_18 < 12; i_18 += 3) 
                {
                    for (short i_19 = 1; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                            arr_74 [i_19 + 2] [i_18] [i_12] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 11442184408552233883ULL)) ? (((/* implicit */int) (signed char)89)) : (-1949605546))));
                        }
                    } 
                } 
                arr_75 [i_11] [i_12] = (!(((/* implicit */_Bool) arr_20 [i_11] [i_12 + 1] [(unsigned char)7] [i_17])));
                var_28 &= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_12 + 1] [i_17])) | (((/* implicit */int) arr_9 [i_12 + 1] [i_17]))));
            }
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(((((/* implicit */int) arr_58 [(unsigned char)8] [i_12] [8U] [i_20 + 1] [i_21] [i_21])) & (((/* implicit */int) (signed char)-90)))))))));
                        var_30 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_76 [i_12] [i_20 + 1] [i_12 + 1] [i_20 + 1]))))));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-2))))))));
                        var_32 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) > (var_8)));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_11] [i_11] [i_11] [i_11])))))));
        arr_81 [i_11] = ((/* implicit */short) ((long long int) (signed char)-3));
        arr_82 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)65)) < (((/* implicit */int) (short)-2))));
    }
    var_34 *= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) << (((67076096U) - (67076096U)))))))));
    var_35 &= ((/* implicit */unsigned short) var_4);
}
