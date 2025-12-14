/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60192
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
    var_12 = ((/* implicit */long long int) 3230699063U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) | (((/* implicit */int) (unsigned short)57298))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_12 [i_0] [(short)13] [i_0] [5ULL] [i_0 + 1] = ((/* implicit */_Bool) ((unsigned int) 3230699063U));
                        arr_13 [i_0 + 1] [i_2] [1U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2 + 1])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (3230699063U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_3] [i_1 - 1] [(unsigned short)16]))))));
                        arr_14 [9ULL] [i_1] [i_1] [i_1 - 2] [i_2] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_2] [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_0]))));
                        arr_15 [i_3] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] = (!(((/* implicit */_Bool) ((long long int) arr_5 [i_3]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0 + 1] [i_1] [i_2] [i_1] [i_0 + 1])) << (((((3230699063U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))) - (3230699046U)))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 + 2] [i_5 + 2])) << (((((/* implicit */int) (signed char)74)) - (65)))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_26 [(unsigned char)8] [i_4] [(signed char)12] [i_1] [i_0 + 1] = ((/* implicit */_Bool) (signed char)-95);
                            arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_19 [10ULL] [i_6] [i_2] [i_6] [i_0])) << ((((+(((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_6] [i_6])))) - (77)))));
                        }
                        for (signed char i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (unsigned short)65535))))))));
                            var_15 ^= ((/* implicit */unsigned char) 3729888506421807242ULL);
                            arr_30 [i_0] [(_Bool)1] [i_2] [i_4] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_1 - 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0]))));
                            var_16 = ((long long int) (unsigned short)1);
                            arr_31 [i_0] [i_1] [(_Bool)1] [i_4] [i_7] = ((/* implicit */unsigned short) arr_25 [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2]);
                        }
                        arr_32 [i_0] [15ULL] [i_2] [i_1 + 2] = ((/* implicit */unsigned short) (~(arr_9 [i_0 + 1])));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_8] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14913488941596415548ULL)) ? (arr_23 [15U] [i_2] [15U] [i_8] [i_0 + 1] [i_0] [i_2]) : (arr_23 [i_0 + 1] [i_1] [i_2] [i_8] [i_0 + 1] [i_0] [i_2])));
                        var_17 = ((/* implicit */long long int) ((unsigned short) arr_7 [i_2 + 1] [i_8]));
                    }
                    var_18 = ((/* implicit */unsigned short) 1681493412U);
                    arr_36 [i_0] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0 + 1] [i_0] [i_1] [i_1] [i_0 + 1])) == (((/* implicit */int) arr_20 [16LL] [i_1 - 1] [i_1] [4ULL] [(short)0]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_40 [i_9] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_41 [(short)2] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)0)))) * (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        var_19 -= ((/* implicit */signed char) (~(arr_9 [i_0])));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8630)) ? (arr_9 [i_0 + 1]) : (((/* implicit */long long int) -1)))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) 0ULL));
                        arr_44 [i_10] [i_10] [i_2] [4ULL] [i_10] [i_1] = ((/* implicit */short) (((_Bool)0) ? ((-(((/* implicit */int) (short)-24342)))) : (((/* implicit */int) var_7))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_11 = 3; i_11 < 14; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    {
                        arr_57 [i_11 - 1] [i_14] = ((/* implicit */signed char) max((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) var_7)))))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0))))))));
                        arr_58 [i_11] [i_12] [i_13] [i_12] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-24342))) != (((((/* implicit */_Bool) 0ULL)) ? (1064268232U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_11] [i_12] [i_11] [i_14] [0LL] [i_14]))))))) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_33 [i_11 + 1] [i_12] [i_13] [i_14])))))));
                        arr_59 [(short)4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (3230699063U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)106)) - (((/* implicit */int) (signed char)107)))))))));
                    }
                } 
            } 
        } 
        arr_60 [i_11 + 4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)56906)))) ? (max((((/* implicit */int) (unsigned char)243)), ((-(((/* implicit */int) (unsigned char)243)))))) : (((arr_38 [i_11 + 4]) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) arr_45 [i_11]))))));
        arr_61 [i_11] [i_11 + 4] = ((/* implicit */signed char) min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) min((arr_56 [i_11] [i_11 - 2] [i_11]), (arr_56 [i_11] [i_11 + 3] [i_11 + 2]))))));
    }
}
