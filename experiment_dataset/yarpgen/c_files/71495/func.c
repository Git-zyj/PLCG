/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71495
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_15))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_16))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)24906)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14938425553203469157ULL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)10)), (14938425553203469157ULL))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((((/* implicit */_Bool) 2348040932323010664LL)) ? (18446744073709551615ULL) : (631098928144210421ULL))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_3])))))));
                        arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */unsigned long long int) (-(arr_6 [i_1] [(signed char)16])))) : (((((/* implicit */_Bool) 6281413724546948399ULL)) ? (6281413724546948399ULL) : (((/* implicit */unsigned long long int) 0)))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 782484076U)) ^ (10462555700852977036ULL)))) ? (((unsigned long long int) arr_4 [i_2] [i_1] [i_2] [i_3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (-564514010))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            arr_12 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                            arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_4 - 1])) ? (arr_8 [i_2] [i_1] [i_2 - 1] [i_4 - 1]) : (arr_8 [19] [i_1] [i_2 - 1] [i_4 - 1]))) * (arr_8 [i_1] [i_1] [i_2 + 1] [i_4 + 1])));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [(unsigned short)1] = ((/* implicit */unsigned short) 2147483647);
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((3783133485564680896ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_1]))))) : ((~(arr_8 [i_0] [i_1] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((7045513256641610165ULL), (((/* implicit */unsigned long long int) 0))))));
                            arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) var_3);
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) 4294967284U)) : (10462555700852977036ULL)))))) && (((/* implicit */_Bool) 9416369543343872920ULL))));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_11 [(signed char)3] [i_1] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */short) arr_0 [i_0])))))));
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-86)) : (-359421508)))) ? (((14663610588144870719ULL) * (((/* implicit */unsigned long long int) ((var_11) << (((arr_14 [8ULL] [i_1] [i_2]) - (1416025343)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)22552)))))));
                            arr_22 [i_0] [i_0] [i_2] [i_1] [i_3] [i_6] = ((/* implicit */unsigned long long int) (signed char)69);
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                        }
                        arr_24 [i_0] [i_1] [i_2] [0U] [i_1] |= ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65523)) : (-128855837)))), ((-(8725724278030336ULL)))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] [(short)2] [i_1] [(signed char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (arr_14 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (((/* implicit */int) (short)21470))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((int) arr_0 [i_2])))));
                    }
                    /* vectorizable */
                    for (short i_8 = 4; i_8 < 16; i_8 += 3) 
                    {
                        arr_33 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_3 [i_8 - 4] [i_0])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_8 + 3] [i_8 + 3]))));
                            arr_37 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                            arr_38 [i_1] [i_9 - 4] = ((/* implicit */unsigned short) ((-128855837) != (((/* implicit */int) (signed char)120))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_42 [i_8] [i_8] [i_1] [i_1] [i_1] [i_0] [i_0] = (~(arr_32 [i_0] [i_8 - 4] [i_2] [i_2]));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_0] [6ULL] [i_0] [6ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))))))))));
                            arr_43 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (11192935151370633891ULL)));
                        }
                        /* LoopSeq 1 */
                        for (int i_11 = 3; i_11 < 17; i_11 += 3) 
                        {
                            arr_46 [i_0] [i_1] = ((((/* implicit */_Bool) arr_32 [i_11 + 2] [15ULL] [i_2 - 1] [15ULL])) ? (arr_6 [i_11 - 2] [i_2 - 1]) : ((+(arr_40 [i_8] [i_8] [i_8]))));
                            arr_47 [i_0] [6U] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 + 1] [i_2 + 1]))));
                            arr_48 [i_0] [i_1] [i_2] [i_2] [i_8] [i_8] [i_1] = ((/* implicit */int) arr_7 [(unsigned char)0] [i_8] [i_2] [i_1]);
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_19 [i_0] [i_0] [18U] [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 2; i_12 < 17; i_12 += 4) 
                        {
                            arr_51 [i_0] [4ULL] [i_1] [i_2] [i_8] [i_12] = ((/* implicit */unsigned short) arr_34 [i_0] [i_0] [i_12] [i_0] [i_8]);
                            arr_52 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) -1073741824));
                        }
                    }
                    /* LoopSeq 1 */
                    for (signed char i_13 = 3; i_13 < 18; i_13 += 4) 
                    {
                        arr_55 [i_0] [i_1] [i_2 + 1] [i_1] [(_Bool)1] = ((/* implicit */int) ((short) max((max((((/* implicit */int) (signed char)120)), (arr_32 [i_0] [i_2] [i_1] [i_0]))), (((/* implicit */int) (signed char)120)))));
                        arr_56 [i_1] [i_1] [i_13] = var_10;
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1]))));
                    }
                }
            } 
        } 
    } 
}
