/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96353
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 531980658354436944ULL))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31010)) >> (((((/* implicit */int) (unsigned char)181)) - (177)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : ((+(((long long int) var_11))))));
                        var_19 = ((/* implicit */long long int) var_12);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) arr_3 [i_4 + 1] [i_4 + 1] [i_4 - 2])))));
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)30995)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned short)24582)))) : (((/* implicit */int) arr_9 [i_1] [i_4 - 2] [i_4] [i_4 - 3] [i_4] [i_4]))))) : (((arr_10 [i_4 - 1] [i_4 - 1] [(_Bool)1] [i_4 + 1] [i_4 + 1] [i_4 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528)))))));
                            arr_14 [i_4 + 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_10 [i_2] [i_1] [i_1] [i_3] [i_1] [i_4 + 1]), (arr_3 [i_0] [i_0] [i_2]))))));
                            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (unsigned char)75)) : (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31007)))))), (((/* implicit */int) (unsigned short)40941))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)34536))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)97)))), (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (((long long int) arr_11 [i_0] [(short)3] [i_1] [(short)3] [i_5] [i_1]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_5 [i_3]);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)0))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41182)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */int) max((arr_6 [i_2] [i_1] [i_7]), (arr_6 [i_1] [i_0] [i_2])))) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_7] [i_0]))));
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_2] [i_7])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_7] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((((arr_23 [i_0] [i_0] [i_0]) ? (18446744073709551614ULL) : (arr_22 [i_1] [(unsigned char)6] [i_2] [i_1] [i_2] [(unsigned char)6]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_1] [i_1] [i_1] [i_0] [i_0])))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((_Bool) (unsigned char)75))) : (((/* implicit */int) arr_12 [i_0] [i_0] [3ULL] [0LL] [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_28 [i_9] [i_9] [i_2] [i_1] [i_9] [i_0]))))));
                            arr_29 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_18 [i_0] [i_8] [i_9]))));
                            var_31 = ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0]);
                            var_32 = ((/* implicit */unsigned char) ((unsigned long long int) ((short) arr_16 [i_0] [i_1] [i_0] [i_2] [i_8] [i_9])));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned short)40941)) : (((/* implicit */int) (signed char)26)))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_10])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_15 [(short)0] [i_8] [i_2] [i_8] [i_10] [i_10]))));
                            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_0] [i_10])) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_8] [i_8] [i_10] [(signed char)7])) : (((/* implicit */int) var_9)))) : (((arr_23 [i_0] [i_2] [i_10]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)127))))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (arr_16 [(_Bool)1] [i_1] [i_2] [i_8] [9ULL] [9ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_15 [i_10] [i_8] [(_Bool)1] [(_Bool)1] [i_8] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9))))))))));
                            arr_33 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_8] [(signed char)1] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned char i_11 = 1; i_11 < 7; i_11 += 3) 
                        {
                            arr_36 [i_0] [i_1] [i_11] [i_1] [i_1] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30999)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned short)40952))));
                            var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)6))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)4] [i_0] [i_11 + 2] [6ULL] [(unsigned char)8])) ? (arr_11 [i_0] [(unsigned short)2] [i_2] [i_11 + 2] [i_8] [i_8]) : (arr_11 [i_0] [i_1] [i_11] [i_11 + 2] [(short)8] [i_8])));
                        }
                        var_38 = ((/* implicit */_Bool) ((unsigned char) (~(13995319438109445783ULL))));
                        var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_2] [i_2] [i_1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        arr_39 [(_Bool)1] [i_2] [(short)9] [i_0] = ((/* implicit */_Bool) max((576460748008456192ULL), (((/* implicit */unsigned long long int) (unsigned char)80))));
                        var_40 = ((((/* implicit */_Bool) arr_11 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                        var_41 = ((/* implicit */unsigned long long int) ((((var_5) || (((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        var_42 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 9197398645823604666ULL)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (short)3678))))));
                    }
                    for (unsigned char i_13 = 3; i_13 < 8; i_13 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned short) var_3);
                        var_44 = ((/* implicit */unsigned long long int) ((((_Bool) arr_30 [i_2] [i_2] [i_13 - 1])) ? (((var_16) ? (((/* implicit */int) arr_30 [(_Bool)1] [(_Bool)1] [i_13 + 2])) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_13 + 1])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-3)), (arr_30 [i_0] [i_1] [i_13 - 1]))))));
                        var_45 = ((/* implicit */unsigned short) ((short) ((unsigned char) 131071ULL)));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 1; i_14 < 9; i_14 += 2) /* same iter space */
                        {
                            arr_44 [i_13] [i_13] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4611686018427387903ULL)));
                            var_46 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)252));
                        }
                        for (long long int i_15 = 1; i_15 < 9; i_15 += 2) /* same iter space */
                        {
                            arr_49 [i_13] [i_0] [i_1] [i_2] [i_2] [i_13 + 2] [i_15] = (-(((((/* implicit */_Bool) (unsigned short)16384)) ? (18446744073709551584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))));
                            arr_50 [i_13] [i_1] [i_1] [(unsigned char)0] [i_13 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-7))) ? (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_46 [i_0] [i_0] [i_2] [(unsigned short)5] [i_13] [(unsigned short)1] [i_0]))))) ? (((arr_11 [i_1] [i_0] [i_1] [i_1] [i_15 - 1] [i_2]) / (((/* implicit */unsigned long long int) arr_17 [i_13 + 1] [i_13 - 2] [i_15] [i_15] [i_15])))) : (((((/* implicit */_Bool) ((long long int) 562020154079542413ULL))) ? (((((/* implicit */_Bool) 9197398645823604666ULL)) ? (562020154079542413ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17557))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)125)))))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)51))))) ? (((long long int) (-(18446744073709551604ULL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_13 + 2] [i_15])))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 1; i_16 < 9; i_16 += 2) /* same iter space */
                        {
                            var_48 -= ((/* implicit */_Bool) ((arr_45 [i_16] [i_1] [i_1] [i_13] [i_16] [(short)2] [i_2]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(signed char)6] [i_0] [i_1] [(_Bool)0] [i_13] [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))));
                            arr_55 [i_0] [i_13] [i_13] [i_13] [i_13] [i_13] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-126))));
                        }
                    }
                    arr_56 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_52 [i_1] [i_1])), (arr_0 [i_2])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)164))) : (((/* implicit */int) ((short) var_10))))));
                }
                arr_57 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (signed char)-1))))) : (18446744073709551579ULL)));
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
    var_50 = var_8;
}
