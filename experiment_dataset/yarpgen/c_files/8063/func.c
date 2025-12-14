/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8063
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_13 -= ((/* implicit */short) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_0] [3ULL]), (arr_1 [i_0] [i_0])))) < (((/* implicit */int) (unsigned char)25))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((16688348239876416722ULL) - (16688348239876416696ULL)))))))))));
        var_14 += ((/* implicit */short) ((unsigned long long int) arr_1 [i_0 + 2] [i_0]));
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) arr_7 [i_1 + 1] [i_2 - 2] [i_2 - 3]);
            var_16 &= ((unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_5]))));
                            var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned int) (unsigned char)79)) >> (((1044480U) << (((((/* implicit */int) arr_11 [(unsigned char)0] [i_5])) + (19693)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)32)) & (((/* implicit */int) (unsigned char)30))))) ? (((/* implicit */int) arr_11 [i_3] [i_5])) : (((/* implicit */int) (unsigned char)176)))) : (((/* implicit */int) (unsigned char)122))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_2]);
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_1] [i_1] [i_1 + 2] [(short)10] [i_1 - 1] [i_3 + 2]))));
                            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_2 - 3] [i_3 + 1] [i_3 + 3] [i_3 + 1])), ((unsigned char)24))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_2] [i_2 - 2] [i_2 - 2] [i_2] [i_9] = ((/* implicit */unsigned int) (-(arr_14 [i_1] [i_2 + 1] [i_3 + 3])));
                        arr_32 [i_1] [i_2] [i_1 - 2] [(short)13] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) : (((arr_26 [i_1 - 2] [i_2 - 3] [i_2 - 3] [i_8] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned short) arr_27 [i_1]))))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)79))))), (((((/* implicit */int) (unsigned char)177)) >= (((/* implicit */int) arr_25 [i_1] [i_1 + 2] [i_1 + 2] [i_2 - 2] [i_3 - 2] [i_3 - 2])))))))));
                        var_23 = ((/* implicit */short) ((max(((-(((/* implicit */int) arr_24 [(unsigned char)4] [(unsigned short)16] [i_3] [i_3] [i_8] [7U])))), (((((/* implicit */int) arr_5 [(unsigned char)14] [i_3])) | (((/* implicit */int) var_0)))))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 2] [i_2 - 3] [i_2 - 2] [i_3 + 3])))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_20 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [i_2] [(unsigned char)15] [i_2] [i_3] [(unsigned char)15] [i_2] [i_10])), (4225625687U)))) ? (max((1758395833833134909ULL), (((/* implicit */unsigned long long int) 69341608U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_2] [i_8] [i_8] [i_8] [i_10] [i_8])) << (((((/* implicit */int) arr_24 [i_1] [i_2 - 1] [i_3 + 1] [i_8] [i_3 + 1] [i_10])) - (3246))))))))));
                        arr_36 [i_1] [i_2] [i_3] [14U] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_35 [i_2 - 2] [i_2] [i_2 - 2]), (((/* implicit */short) var_9)))));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_24 [i_8] [i_8] [i_2 + 1] [i_8] [i_3 + 1] [i_1 - 2]))) * (((/* implicit */int) arr_34 [i_2] [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_3 + 1] [i_1 + 1] [i_3 + 1]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */short) ((unsigned char) (-(arr_33 [i_1] [i_1] [i_1 - 1] [i_2 - 3] [i_2]))));
                        var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        arr_41 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) (unsigned char)0)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (((((((/* implicit */int) (unsigned char)223)) >= (((/* implicit */int) (unsigned char)0)))) ? ((~(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_2] [(unsigned char)16] [i_2]), ((short)8333)))))))));
                        arr_42 [i_1] [i_2] = ((/* implicit */short) (((((((~(((/* implicit */int) (short)31744)))) + (2147483647))) << (((arr_38 [i_3] [i_2 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) - (17942142307969073159ULL))))) + (((/* implicit */int) (short)-30585))));
                    }
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_46 [i_1] [i_2] [i_1] [i_3 + 3] [i_2] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_0 [i_2 - 2])) >> (((((/* implicit */int) arr_0 [i_2 - 2])) - (184)))))));
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) % (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_11))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(2078386738U)))) ? ((-(((/* implicit */int) arr_44 [i_1 - 1] [i_13] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) arr_45 [i_1 - 2] [i_3 - 2]))));
                        var_30 = ((unsigned char) arr_3 [i_2 - 1] [i_13 + 1]);
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                {
                    var_31 ^= ((/* implicit */short) (-(((((((/* implicit */_Bool) (short)9295)) || (((/* implicit */_Bool) 2078386738U)))) ? (((/* implicit */int) arr_43 [16ULL] [16ULL])) : (((/* implicit */int) (unsigned char)69))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 17178863623628839275ULL)))) ? (((/* implicit */int) ((arr_39 [i_2] [i_2 - 2] [i_3] [i_14]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 - 1] [i_2] [i_1 - 1] [i_14] [i_14] [i_14])))))) : (((/* implicit */int) ((13951708923402376665ULL) == (10257331383480398398ULL))))))) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) var_11))));
                    arr_52 [i_2] = ((/* implicit */signed char) ((unsigned int) var_4));
                }
                /* vectorizable */
                for (short i_15 = 4; i_15 < 17; i_15 += 1) 
                {
                    var_33 &= ((/* implicit */signed char) (unsigned short)11397);
                    arr_56 [i_1] [i_1] [i_2] [i_1] [i_15 + 2] [i_15 - 3] = ((/* implicit */short) ((unsigned int) arr_16 [i_1 + 1] [i_1 + 1] [i_15 + 1]));
                }
            }
            for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                var_34 = ((/* implicit */unsigned int) arr_38 [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_16]);
                arr_60 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((arr_25 [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 2] [(short)4] [i_1]), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) var_5)))))))));
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)231)))));
            }
        }
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((~(var_5))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)246)))) + (((/* implicit */int) ((unsigned char) (unsigned char)231))))))));
}
