/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66456
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) 12602537772418095859ULL))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_0);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) -6369049452941323064LL);
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 20; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned short i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28772))) == (326481487530731909ULL)));
                        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_6 [i_2])))) ? (((((/* implicit */int) var_7)) >> (((326481487530731892ULL) - (326481487530731869ULL))))) : ((~(arr_6 [i_2])))));
                        arr_17 [i_1] [i_2 - 4] [i_2 - 3] [i_2] [i_2 - 1] [i_2 - 3] = ((/* implicit */unsigned long long int) (unsigned short)2904);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((unsigned short) 203726507));
            arr_21 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_1])) % (((/* implicit */int) arr_20 [i_1] [i_1] [i_5]))));
            var_16 |= ((/* implicit */short) ((long long int) arr_4 [(signed char)10] [(signed char)10]));
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_32 [i_1] [i_8] [i_7] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((((/* implicit */int) var_0)) - (((/* implicit */int) var_7))))))) * (min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-6154168171417194121LL))), (((/* implicit */long long int) max((-203726507), (((/* implicit */int) arr_9 [i_1])))))))));
                            arr_33 [i_6] |= ((/* implicit */signed char) arr_6 [i_9]);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned int) arr_0 [i_1]);
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                arr_37 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(962334348)))))))));
                arr_38 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4364735952481005693ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_18 [i_1] [i_1])))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12602537772418095859ULL)) ? (((/* implicit */int) (short)2272)) : (arr_31 [i_1] [i_6] [i_1])))) && (((/* implicit */_Bool) (-(-203726508)))))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_34 [i_11] [i_6] [i_1]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_12 = 4; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    var_19 += ((/* implicit */unsigned long long int) arr_34 [i_1] [i_1] [i_1]);
                    arr_44 [i_12 - 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)140))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) var_7);
                        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) (unsigned short)2074))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_14 = 3; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) (unsigned short)63458);
                        var_23 = ((/* implicit */long long int) var_0);
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_12 - 1] [i_12 - 4] [i_14 - 1])) > (var_6))))));
                        var_25 = ((/* implicit */unsigned short) (unsigned char)144);
                        arr_49 [i_14] [(unsigned short)17] [i_1] [i_6] [i_1] = ((((/* implicit */_Bool) (~(14082008121228545916ULL)))) ? (((/* implicit */int) (unsigned short)35866)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                    }
                    for (short i_15 = 3; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */int) ((unsigned long long int) (short)-2272));
                        arr_53 [i_15] [i_1] [i_12] [i_12] [i_11] [i_1] [i_1] = ((/* implicit */short) (+(-586226976)));
                        arr_54 [(short)3] [i_1] [i_11] [i_12 - 2] [i_15] = ((/* implicit */unsigned int) var_12);
                        arr_55 [i_1] [i_1] [i_11] [i_12] [i_1] = ((/* implicit */unsigned long long int) ((short) ((3997689498257159632ULL) / (arr_4 [i_15 - 3] [i_1]))));
                    }
                    for (short i_16 = 3; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (18120262586178819702ULL))) - (((/* implicit */unsigned long long int) arr_47 [i_6] [i_16 - 1] [i_16 + 1] [i_12] [i_6])))))));
                        arr_58 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 1100581047U)) != (-671156652367513635LL)))) | (((/* implicit */int) arr_51 [i_1] [i_16 - 2] [i_1] [i_16 - 2]))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_17 = 4; i_17 < 18; i_17 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52547)) ? (arr_29 [i_17 - 3] [i_17 - 1] [i_17 - 2] [i_17 - 4] [i_17 - 1] [i_17 - 3]) : (((/* implicit */int) var_10))));
                    arr_61 [i_1] [i_6] [i_1] [i_17] [i_1] = ((/* implicit */unsigned short) arr_25 [i_6] [i_11] [i_1]);
                }
                arr_62 [i_1] [i_6] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39368))) > (5673623036603629410ULL)))) << (((((unsigned long long int) arr_0 [i_11])) - (26333ULL)))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned short) ((1685384804909585860ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_1] [8] [i_11] [i_11] [(signed char)13] [2ULL] [i_1])))))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 20; i_19 += 1) 
                {
                    for (short i_20 = 2; i_20 < 19; i_20 += 2) 
                    {
                        {
                            arr_71 [i_1] [i_6] [i_18] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_24 [i_19] [i_19 + 1] [i_18]))) - (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_11)))))));
                            arr_72 [i_1] [i_6] [i_1] [i_19] [i_20 + 2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)41))))), (((((/* implicit */_Bool) ((long long int) arr_63 [i_1] [i_6] [i_6] [i_18]))) ? (arr_41 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_70 [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_19 - 1]))))));
                        }
                    } 
                } 
                arr_73 [i_18] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_18]))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) (short)-1798)))))))) ? (((/* implicit */int) min((arr_43 [i_18] [i_6] [i_1] [i_1]), (arr_43 [i_18] [i_18] [i_6] [i_1])))) : (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (unsigned int i_21 = 3; i_21 < 20; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)63461)), (14354272092291867922ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -279330383)))))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) var_12))), (arr_4 [i_1] [i_6]))) : (14354272092291867900ULL)));
                            arr_80 [i_1] [i_6] [i_18] [i_21] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (arr_63 [i_22] [(short)1] [i_6] [i_1])))) ? (min((((/* implicit */long long int) arr_29 [i_1] [i_1] [i_1] [i_18] [(short)14] [i_1])), (arr_14 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((3345900018U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-25055)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (3184953440U)))) ? (((/* implicit */int) (unsigned short)8600)) : (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            }
        }
    }
    var_31 = ((/* implicit */long long int) (+(16761359268799965755ULL)));
}
