/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89421
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49396)) > (((/* implicit */int) (_Bool)0))))), (((unsigned short) var_6))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49615))) : (min((var_14), (((/* implicit */long long int) (unsigned short)15910))))))) : (max((3641845105762541463ULL), (((/* implicit */unsigned long long int) ((695499263) < (((/* implicit */int) (unsigned short)65280)))))))));
    var_18 = ((/* implicit */int) var_7);
    var_19 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) (+(2351541158U))))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)15910)))) * (var_15)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [4]))) ? (((/* implicit */int) ((short) arr_3 [i_0 + 3]))) : (((/* implicit */int) ((arr_3 [i_0 + 3]) || (arr_3 [i_0 + 3]))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)24041)), ((unsigned short)49621)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2 - 1] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15914))) >= (((((_Bool) -7012015313704456346LL)) ? (((unsigned long long int) 130944)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7404)))))));
                        var_22 = ((/* implicit */unsigned long long int) (((-((-(((/* implicit */int) (unsigned short)65535)))))) + (((/* implicit */int) (unsigned short)4844))));
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_7 [i_0 + 2] [i_1 - 1] [i_2 + 3])) << (((/* implicit */int) arr_6 [i_1 - 1])))), (((/* implicit */int) (unsigned short)45791))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_24 *= ((/* implicit */_Bool) min(((-(((/* implicit */int) (short)10782)))), (((/* implicit */int) (unsigned short)896))));
                        arr_16 [(short)8] [i_1 - 1] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) (~(arr_1 [i_0]))));
                        arr_17 [i_2 + 3] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49615)) == (((/* implicit */int) (_Bool)1))))), (-4279605711433407424LL)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_6 - 3] = ((/* implicit */unsigned short) min((((arr_15 [i_6 - 1] [i_2] [i_0 - 2]) << (((((/* implicit */int) (short)32767)) - (32767))))), (((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max((arr_9 [i_0] [i_0 + 3] [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [i_0]))))))))));
                                arr_24 [i_0 + 2] [i_1] [i_2] [i_0] [15] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_6] [(signed char)13] [i_6 - 4] [i_6] [i_6 + 1] [i_6 - 4])) ? (3641845105762541463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [18LL] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 4] [i_6 - 3] [i_6 - 1]))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)12769)))))));
                                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned short) (short)28)), ((unsigned short)49621))));
                            }
                        } 
                    } 
                    arr_26 [(_Bool)1] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [(short)11] [(signed char)16] [i_1 + 1] [i_1 - 1])) < (((/* implicit */int) arr_18 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))))) - (((long long int) (short)0))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8977682208606492362LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (9757396573187884845ULL)))))))));
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */long long int) (unsigned short)26153);
        var_26 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 1]))))))));
    }
    for (short i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (arr_11 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 - 1] [i_7] [i_7 - 1])))) ? (arr_11 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7] [i_7 + 3]) : (max((((/* implicit */int) (short)-26071)), (arr_20 [i_7 + 1] [i_7 + 1] [(_Bool)1] [i_7 - 1] [(signed char)1])))));
        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (+(-4860896050150628014LL))))) * (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        var_29 = ((/* implicit */short) arr_30 [(signed char)2]);
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            var_30 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -130944)) ? (((/* implicit */int) (short)24032)) : (((/* implicit */int) (unsigned short)0))))));
            arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17302)) ? ((+(((/* implicit */int) arr_30 [i_9])))) : (((/* implicit */int) max((arr_30 [i_8]), (arr_30 [i_8]))))));
            var_31 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        }
        for (int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_32 = ((/* implicit */unsigned short) min(((+(arr_36 [i_8] [i_8]))), (max((min((((/* implicit */long long int) (unsigned short)15910)), (-5345044702800735907LL))), (max((131071LL), ((-9223372036854775807LL - 1LL))))))));
            var_33 += ((/* implicit */unsigned char) min((((/* implicit */int) (short)-24042)), (((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_33 [i_8] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)26153))))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                var_34 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_8] [i_8] [i_8])) - (((/* implicit */int) (short)24041))))) || (((/* implicit */_Bool) max(((short)-24042), ((short)9004))))));
                arr_39 [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) (short)32767);
            }
            for (short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                var_35 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_32 [i_8] [i_8] [i_8])))) == (((/* implicit */int) max((arr_38 [(_Bool)1] [i_10] [i_12] [i_12]), (arr_41 [i_12] [i_8] [i_8] [i_8]))))));
                arr_43 [i_12] [i_10] [i_8] [i_12] = ((/* implicit */short) max((((/* implicit */long long int) (short)-1)), (131071LL)));
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) arr_37 [i_8] [i_10] [i_12] [i_12]))))) % (((/* implicit */int) min((((/* implicit */unsigned short) arr_37 [i_12] [6] [i_8] [i_8])), ((unsigned short)26153))))));
                var_37 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15910))) & (4035225266123964416LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_10] [16U] [i_10] [i_10])) | (((/* implicit */int) arr_33 [i_8] [i_10] [i_12])))))))) ? (((/* implicit */int) (((-(2147483647))) == (((/* implicit */int) arr_30 [i_8]))))) : (((/* implicit */int) (!((_Bool)1))))));
            }
        }
        var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */_Bool) min((((/* implicit */int) (short)-4321)), (((((/* implicit */_Bool) 2147483647)) ? (267386880) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8]))))));
        arr_44 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_8] [i_8])) ? (arr_42 [i_8] [i_8]) : (arr_42 [i_8] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_8] [i_8])) && (((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8])))))));
    }
    var_39 = ((/* implicit */unsigned short) var_9);
}
