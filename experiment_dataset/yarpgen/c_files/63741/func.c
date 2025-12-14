/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63741
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (((-2147483647 - 1)) != (((/* implicit */int) (_Bool)1))));
        var_19 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((((/* implicit */int) (unsigned char)117)) & (((/* implicit */int) (signed char)33)))) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned char)139)) - (112)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_4 = 3; i_4 < 8; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_13 [(unsigned char)4] [(unsigned char)4] [i_2] [2])))) & (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) == (((/* implicit */int) (unsigned char)139)))))));
                        arr_15 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned char)145))))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) arr_0 [i_2]))))));
                        arr_16 [i_1] [i_1] [i_1] [i_4 - 2] = ((((/* implicit */_Bool) arr_1 [i_4 - 3])) ? (arr_1 [i_4 - 1]) : (arr_1 [i_4 - 3]));
                        var_20 -= ((/* implicit */unsigned char) arr_0 [i_4 + 2]);
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) : (arr_7 [i_2] [i_3] [i_1])));
                            arr_19 [i_5] [i_3] [i_4 + 2] [i_5] &= ((/* implicit */unsigned int) (((+(-1912955057803161904LL))) + (((/* implicit */long long int) arr_4 [i_4] [i_4 + 1] [i_4]))));
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (short)5181))));
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((_Bool) var_3));
                            arr_24 [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_1] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_13 [i_1] [i_4 + 2] [i_4 + 1] [(unsigned char)5]))));
                        }
                    }
                    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        arr_27 [5LL] [i_2] [(signed char)5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)117)) != (((/* implicit */int) arr_17 [i_1] [i_2] [i_1] [i_7 + 1] [i_3]))));
                        arr_28 [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */int) arr_18 [i_7 + 1] [i_1])) | (((/* implicit */int) arr_18 [i_7 - 1] [i_1])));
                        arr_29 [i_7 + 1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_7 [i_7 + 1] [i_7 + 1] [i_1])));
                        var_23 -= ((/* implicit */short) arr_2 [i_7 + 1] [i_3]);
                        var_24 += ((/* implicit */unsigned short) ((arr_21 [i_1] [i_1] [i_3] [i_3] [i_7 - 1]) ? (arr_8 [i_3] [i_2] [4U] [i_7]) : (((/* implicit */int) arr_26 [(unsigned char)2] [i_2] [i_3] [i_2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_8] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1113966807))))) : (((/* implicit */int) (unsigned char)67))));
                        var_25 = ((/* implicit */short) ((arr_22 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)139))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_1])) ? (((arr_13 [i_1] [i_2] [(unsigned char)2] [i_8]) ? (((/* implicit */int) arr_31 [3U] [3U] [i_1] [i_1] [i_1])) : (var_7))) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_27 = ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) arr_0 [i_9])));
                        arr_36 [i_1] [(unsigned short)5] [i_3] [i_1] [0U] = ((/* implicit */unsigned short) ((((var_7) == (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) arr_30 [i_1]))));
                        arr_37 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_2] [i_3] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_9)));
                        arr_38 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_34 [i_1] [i_1]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                var_28 = arr_7 [i_10] [i_10 + 1] [i_1];
                                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_20 [i_1])) < (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_10] [i_1])))))));
                                var_30 = ((/* implicit */unsigned char) arr_39 [i_11] [i_10] [i_2] [i_2]);
                            }
                        } 
                    } 
                    arr_45 [i_2] [i_2] [i_1] = ((/* implicit */signed char) arr_25 [i_1]);
                    arr_46 [i_1] [(short)2] [i_1] |= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_3 [i_1]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) (short)7416)) ? (arr_22 [i_12]) : (arr_22 [i_1]))))));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (arr_5 [(unsigned char)2]) : (arr_5 [(unsigned char)8]))))));
            var_33 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [(unsigned char)6])) ? (arr_10 [(_Bool)1]) : (((/* implicit */int) var_13)))) & (((/* implicit */int) arr_48 [i_1] [(_Bool)1] [i_1]))));
        }
        arr_50 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1477068394)) && (((/* implicit */_Bool) arr_20 [i_1]))));
        arr_51 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_1] [i_1])) < (((/* implicit */int) arr_34 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
    {
        arr_55 [i_13] = ((/* implicit */long long int) arr_48 [i_13] [i_13] [(short)5]);
        var_34 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_17)) : (arr_53 [i_13] [i_13]))) <= (((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13]))));
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            var_35 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-13501)) / (((/* implicit */int) arr_35 [i_14] [i_14] [i_14] [i_13] [i_13]))));
            var_36 = ((/* implicit */int) min((var_36), (((((((((/* implicit */int) arr_35 [i_14] [i_14] [i_14] [i_13] [i_13])) + (2147483647))) << (((arr_4 [i_13] [i_13] [i_14]) - (3091741705U))))) % (((/* implicit */int) ((((/* implicit */int) arr_9 [i_14] [i_14])) <= (((/* implicit */int) arr_6 [i_14] [i_14])))))))));
        }
        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))));
            arr_63 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_13])) ? (((/* implicit */int) arr_59 [(signed char)6])) : (((/* implicit */int) arr_59 [i_15]))));
            arr_64 [i_13] = ((/* implicit */long long int) var_16);
            arr_65 [i_13] [i_13] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_15] [i_15]))) != (((((/* implicit */unsigned int) var_7)) % (551947766U))));
            /* LoopSeq 3 */
            for (int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                var_38 &= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_40 [i_15]))));
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_13] [i_15] [i_13])) ? (arr_7 [i_13] [i_13] [i_13]) : (arr_7 [0LL] [i_15] [i_13])));
            }
            for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                var_40 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2974205338171655053LL)) ? (((/* implicit */int) arr_57 [i_13])) : (((/* implicit */int) var_15))))) == (((((/* implicit */_Bool) arr_53 [i_15] [i_13])) ? (arr_22 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13] [i_13] [i_15] [i_17])))))));
                var_41 = ((/* implicit */unsigned int) ((arr_13 [i_13] [3U] [i_17] [(_Bool)1]) || (((((/* implicit */int) var_17)) == (((/* implicit */int) arr_26 [i_13] [i_13] [i_17] [i_13]))))));
                arr_73 [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_17] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) arr_25 [i_13]))));
            }
            for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                var_42 = ((/* implicit */unsigned short) (((+(arr_7 [i_13] [i_13] [i_13]))) + (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_18] [i_18])))));
                var_43 = ((/* implicit */_Bool) arr_25 [i_13]);
            }
        }
        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
        {
            arr_80 [i_13] [i_19] [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_13] [i_13] [i_19] [i_19] [i_13]))));
            arr_81 [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (arr_1 [i_13])));
            var_44 = ((/* implicit */_Bool) ((arr_49 [i_13] [i_19] [i_19]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_49 [i_13] [i_13] [i_19]))));
        }
        var_45 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (arr_4 [i_13] [i_13] [i_13]) : (arr_4 [i_13] [i_13] [i_13])));
        arr_82 [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
    {
        arr_85 [i_20] [i_20] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_48 [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_48 [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_48 [i_20] [i_20] [i_20]))))));
        var_46 ^= ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)59)), (-2125183151)));
        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((1610612736LL), (1276244339449986334LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_20] [i_20] [i_20] [i_20])) ? (arr_5 [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) arr_59 [i_20])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [i_20] [i_20])))))));
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)38)) > (((/* implicit */int) (signed char)59))));
    }
    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -74650972)) ? (3846708221U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))));
    /* LoopSeq 2 */
    for (unsigned int i_21 = 4; i_21 < 16; i_21 += 4) 
    {
        var_50 = ((/* implicit */unsigned char) (-(max((arr_87 [i_21 - 1]), (arr_87 [i_21 + 2])))));
        arr_88 [i_21] = ((/* implicit */_Bool) arr_0 [i_21]);
        arr_89 [i_21] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_86 [i_21 - 4] [i_21])) >= (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) (signed char)98)))))))), (min((((/* implicit */int) arr_0 [i_21])), (((((/* implicit */int) (signed char)50)) << (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_93 [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_22])) ? (arr_90 [i_22]) : (arr_90 [i_22])));
        arr_94 [i_22] [i_22] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_91 [i_22]))));
    }
}
