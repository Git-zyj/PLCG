/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64324
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_13 [i_0] [(signed char)6] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_17);
                            arr_14 [(short)4] [i_2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [8U] [i_0])), (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3] [(short)9])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_7 [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)3] [i_2] [(signed char)3])))))));
                            arr_15 [i_0] [(unsigned short)4] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((((/* implicit */int) (short)-29220)) + (2147483647))) << ((((+((+(((/* implicit */int) (unsigned short)33781)))))) - (33781)))));
                            var_18 *= ((/* implicit */unsigned char) ((int) ((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 2] [i_3 - 1]))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1])) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (arr_8 [13] [(unsigned short)2] [13] [i_2] [13] [(unsigned char)0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33781)))))));
                            arr_20 [11ULL] [i_2] [11ULL] = ((/* implicit */_Bool) arr_11 [(unsigned char)10] [(_Bool)1] [(_Bool)1] [i_1] [i_0]);
                            var_20 = ((/* implicit */unsigned char) (((-(arr_12 [i_3] [i_3] [i_3] [(short)14] [i_3] [i_3 + 2] [(short)14]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)31749))))));
                        }
                        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-79)))) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), ((unsigned short)0)));
                        var_22 = ((/* implicit */unsigned char) (unsigned short)21244);
                        arr_21 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) var_15)))) ? (((unsigned long long int) arr_0 [(signed char)7] [(short)9])) : (((/* implicit */unsigned long long int) ((int) arr_9 [i_0] [i_0] [i_0] [(signed char)9])))))) || (((/* implicit */_Bool) var_15))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_0] [(signed char)3] [i_0])) : (((/* implicit */int) (unsigned char)189)))), (var_11))) / (((/* implicit */int) (unsigned short)31755))));
            var_24 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) (_Bool)1))), (((unsigned short) arr_4 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))))) : (-8328369024150014636LL)))));
        }
        var_25 = ((/* implicit */long long int) min((((/* implicit */int) min((max((((/* implicit */unsigned short) var_5)), ((unsigned short)21233))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)208)) || (((/* implicit */_Bool) var_3)))))))), ((-((-(((/* implicit */int) var_10))))))));
    }
    for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        var_26 = ((/* implicit */long long int) ((short) min((((/* implicit */int) (unsigned short)21233)), (var_12))));
        var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_18 [i_6 + 1] [(signed char)14] [i_6 - 1] [(signed char)14])), (((((/* implicit */_Bool) (short)-6151)) ? (arr_10 [i_6 - 1]) : (arr_7 [i_6 - 1] [i_6 - 1])))));
        var_28 = ((((((/* implicit */_Bool) (+(arr_23 [i_6])))) ? (((/* implicit */int) arr_4 [i_6 - 1] [i_6] [i_6])) : (((/* implicit */int) min(((unsigned short)21233), ((unsigned short)10605)))))) >= (((/* implicit */int) ((_Bool) ((signed char) arr_3 [(unsigned char)5] [(unsigned char)5] [i_6])))));
        arr_24 [i_6] = ((/* implicit */long long int) (((((+(2781296613U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) | (arr_3 [i_6] [i_6] [i_6])));
    }
    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */short) var_9);
        arr_28 [(signed char)7] = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_29 |= ((/* implicit */_Bool) var_4);
            /* LoopSeq 1 */
            for (signed char i_9 = 4; i_9 < 14; i_9 += 1) 
            {
                arr_36 [i_7] [i_7] [i_9] [i_9] |= ((/* implicit */short) ((long long int) ((unsigned char) ((unsigned int) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        arr_41 [i_7] [i_9] [i_9] [i_9] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_26 [i_7]), (arr_26 [i_9 - 1])))), ((+(((/* implicit */int) arr_26 [(short)11]))))));
                        var_30 |= arr_1 [i_10];
                        var_31 *= ((/* implicit */int) ((min((((/* implicit */int) (_Bool)1)), (arr_6 [i_10 - 1] [i_9 - 1]))) <= (((((/* implicit */_Bool) arr_6 [i_10 - 1] [i_9 + 1])) ? (((/* implicit */int) (unsigned short)21244)) : (((/* implicit */int) var_0))))));
                        var_32 = (+(((/* implicit */int) ((((/* implicit */int) var_17)) == (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)206))))))));
                        arr_42 [i_7] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_23 [i_9 - 4])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -5840351466133832652LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_7] [i_8] [i_10]))) : (-1239566656478516024LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_10])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)21233)))))))) : (((/* implicit */int) ((((arr_23 [i_7]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_11])) && (((/* implicit */_Bool) var_5)))))))))));
                    }
                    arr_43 [(unsigned short)8] [i_7] [i_7] [(unsigned short)2] |= ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (unsigned short)33933)))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)21233), (((/* implicit */unsigned short) (signed char)123))))) ? ((+(min((arr_40 [(signed char)8] [i_8] [i_8] [i_8] [i_7] [i_8]), (((/* implicit */unsigned long long int) (unsigned short)32256)))))) : (min((((/* implicit */unsigned long long int) ((_Bool) var_2))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_40 [i_7] [i_7] [i_7] [i_7] [i_7] [i_10]))))))))));
                }
                arr_44 [(signed char)8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_26 [(unsigned char)10])) : (((/* implicit */int) (_Bool)1))))) ? (((3U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10605))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [(unsigned short)6])))))))) || (((/* implicit */_Bool) ((int) arr_19 [i_9 - 2] [i_9 - 2] [15U] [15U] [i_9] [i_9 - 2])))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 2; i_12 < 13; i_12 += 3) 
                {
                    arr_47 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((unsigned short) arr_30 [i_8])))) >> (((((/* implicit */int) var_14)) - (31209)))));
                    arr_48 [i_9] [i_7] [i_9] [(short)0] [i_9] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)54930)) & (((/* implicit */int) (signed char)105)))) : (-834273622)))), ((+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)1] [i_8] [i_8]))) - (7122091504613532855LL)))))));
                }
                var_34 -= ((/* implicit */unsigned int) ((unsigned short) ((arr_40 [i_8] [i_8] [(_Bool)1] [(unsigned short)8] [i_8] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21244))))));
            }
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (unsigned short)4))));
            arr_49 [i_7] [i_7] = var_0;
        }
        arr_50 [i_7] = ((/* implicit */unsigned short) ((unsigned char) (signed char)127));
        var_36 = ((/* implicit */short) (signed char)-110);
    }
    var_37 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned short)33780)) ? (var_8) : (var_13))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_9)))))))));
}
