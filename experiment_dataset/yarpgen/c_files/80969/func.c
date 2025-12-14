/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80969
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) var_16);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [4U] [i_3]);
                        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_1 [i_3]))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) arr_7 [i_1]);
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_15)))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4 - 1] [i_4] [(unsigned short)21] [i_2])) ? (((/* implicit */unsigned int) arr_13 [i_0] [i_4] [(short)20] [i_4])) : ((~(arr_7 [i_1])))));
                        arr_14 [(signed char)0] [i_0] [i_1] [(signed char)0] |= ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)65521))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (signed char)-71))))));
                            arr_19 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 + 2] [i_6])) || (((/* implicit */_Bool) arr_17 [i_5 + 2] [i_6]))));
                        }
                        arr_20 [i_5] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [(unsigned char)18] [i_5] [i_5 + 2] [i_5 - 1] [i_5])) ? (((/* implicit */int) var_2)) : (arr_12 [i_0] [i_2] [i_2] [i_5] [i_5 + 2] [i_5 + 1])));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7])) ? (arr_7 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_7] [i_2] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)517)))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_7])) / (((/* implicit */int) ((short) arr_22 [i_7])))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_8] [i_8])) <= (((/* implicit */int) arr_11 [11U] [i_2] [i_8] [i_8]))));
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_0]))));
                        arr_25 [i_0] [i_8] [(unsigned short)1] [i_8] = ((((/* implicit */_Bool) arr_18 [i_8] [12U] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)16)));
                    }
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))));
                        arr_28 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(((int) (unsigned short)65515))));
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0] [2U] [i_0]))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [2ULL] [i_0])) >> (((((/* implicit */int) arr_3 [i_0] [(unsigned char)9] [i_0])) - (10151))))))));
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_31 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18075))) - (4294967295U)))) ? (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (short)-18070)) : (((/* implicit */int) (short)18052)))) : (((/* implicit */int) max((var_5), (((/* implicit */signed char) arr_1 [i_10]))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18075)))))))))));
        arr_32 [i_10] = ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_10] [i_10] [(signed char)2])) >= (min((4063232), (((/* implicit */int) (short)32767))))))) << (((((((/* implicit */int) arr_30 [i_10])) % (((/* implicit */int) arr_15 [(unsigned short)2] [i_10] [i_10])))) - (3575))));
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((2334493980U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) < (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-18075)) != (((/* implicit */int) (unsigned char)42))))) : ((+(((/* implicit */int) var_4))))))));
    var_33 = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (((((/* implicit */int) ((_Bool) var_1))) / (var_10)))));
}
