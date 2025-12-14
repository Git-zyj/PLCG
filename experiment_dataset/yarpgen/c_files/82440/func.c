/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82440
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_2 [i_0])))))))));
            var_12 = ((((((/* implicit */_Bool) (unsigned char)195)) ? (arr_5 [(short)7] [i_1] [i_1]) : (arr_2 [i_1]))) | (((/* implicit */int) arr_0 [i_0])));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    var_13 |= ((arr_7 [i_0] [i_0 - 1] [i_1] [i_3 - 1]) < (((/* implicit */int) arr_8 [i_0 - 1])));
                    arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 1] [i_3] [i_3])) / (((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_3] [i_3]))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 - 1]))));
                }
                for (long long int i_4 = 3; i_4 < 24; i_4 += 4) 
                {
                    var_15 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-27977))));
                    arr_14 [i_0] [i_1] [i_1] [i_2] [i_4] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_1] [i_1] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_4 - 1]))));
                    var_16 |= ((((/* implicit */_Bool) arr_13 [i_0 - 1] [(unsigned short)7] [i_4 + 1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_4 - 1] [(unsigned short)3])) : (((/* implicit */int) arr_13 [(short)4] [i_4] [i_4 + 1] [i_2])));
                }
                arr_15 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_5] = arr_3 [i_0 - 1] [i_1];
                    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                }
            }
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 379680167U))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        arr_27 [i_0] [i_7] [i_7] = ((/* implicit */signed char) -1575625490);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_7 [i_6] [i_1] [i_6] [i_7])) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_1])))))));
                    }
                } 
            } 
        }
    }
    var_20 |= ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) -1760955133)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_12 [i_9] [i_9] [i_9] [i_8] [i_8] [i_8]))))) : (min((((arr_29 [6]) << (((((((/* implicit */int) (short)-1)) + (4))) - (3))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_9] [i_9] [i_8]))) > (2345615658U)))))))))));
                var_22 |= ((/* implicit */int) min((((arr_12 [i_9] [(unsigned short)7] [i_8] [i_8] [i_8] [i_8]) ? (((((/* implicit */_Bool) (short)-14853)) ? (3972112394U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32640))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))))), (((/* implicit */unsigned int) ((((arr_7 [i_8] [i_8] [i_8] [(unsigned char)20]) + (2147483647))) >> (((arr_7 [i_8] [i_8] [i_9] [i_9]) + (936104372))))))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((signed char) ((3841082552U) < (3972112396U)))))));
                var_24 |= ((unsigned short) ((((/* implicit */_Bool) max((arr_16 [14LL] [(short)24] [i_9] [i_8] [(short)24] [i_8]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_8]))))) : (((((((/* implicit */int) arr_13 [i_8] [i_8] [i_9] [i_8])) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_8] [(short)16] [i_8] [i_8])) - (32391)))))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_35 [i_8] [i_9] [i_10] = ((/* implicit */long long int) ((signed char) ((unsigned long long int) min((arr_22 [i_8] [i_8] [i_8]), (7432856244158408209LL)))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((signed char) (-(min((-7459290172310924489LL), (((/* implicit */long long int) arr_7 [i_12] [i_10] [i_9] [i_8]))))))))));
                                arr_40 [i_8] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) max((arr_11 [18] [i_9] [i_8] [i_11]), (arr_28 [i_8] [i_8]))))));
                                arr_41 [i_12] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)61853))), ((~(arr_25 [i_8] [i_9] [i_11] [(unsigned short)17]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)11493)) != (((/* implicit */int) arr_8 [i_11]))))), ((+(((/* implicit */int) arr_4 [i_8])))))))));
                                var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_17 [i_8]), (arr_29 [i_11]))), (((/* implicit */long long int) max(((signed char)-88), (arr_38 [i_9] [i_9] [i_9] [i_9] [i_9]))))))) || (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) arr_3 [i_11] [i_9]))))), (max((((/* implicit */short) (unsigned char)226)), (arr_9 [i_8] [i_8] [i_8] [i_8]))))))));
                            }
                        } 
                    } 
                    arr_42 [(unsigned char)4] [(unsigned char)16] [i_8] [(unsigned char)4] |= ((/* implicit */signed char) ((((453884744U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-14849))))) ? (max((((arr_12 [i_8] [i_9] [i_9] [i_9] [i_9] [i_10]) ? (arr_5 [i_10] [i_9] [13U]) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9])))), ((~(((/* implicit */int) (unsigned char)226)))))) : (((/* implicit */int) min((arr_34 [i_8] [i_8]), ((short)-11484))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_13 = 1; i_13 < 9; i_13 += 4) 
    {
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))) : (9048932958089505037ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 4; i_14 < 11; i_14 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                arr_52 [i_13] [i_13] = ((/* implicit */signed char) ((arr_17 [i_13 + 3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_13 + 1] [i_13 + 1] [i_15])))));
                /* LoopSeq 4 */
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    arr_56 [i_13] [i_14] [1U] [i_14] = arr_33 [14LL] [14LL] [14LL];
                    var_28 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_34 [i_13 - 1] [19LL])) ? (15) : (((/* implicit */int) (short)-11480))))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_13 + 3])) || (((/* implicit */_Bool) arr_30 [i_13 + 2]))));
                }
                for (int i_17 = 2; i_17 < 11; i_17 += 2) 
                {
                    arr_59 [i_14 - 1] [i_14 - 1] |= ((/* implicit */short) (~((-(((/* implicit */int) arr_54 [i_13 + 2] [i_13] [i_13] [i_13]))))));
                    arr_60 [i_13] [i_13] [i_15] [(short)2] [(short)10] [i_13] = ((/* implicit */unsigned int) ((unsigned char) arr_36 [(unsigned short)7] [(unsigned short)7] [i_13 + 3]));
                }
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
                {
                    arr_65 [i_15] [i_14 - 1] [i_15] [i_18] [i_13] |= ((/* implicit */short) (~(arr_30 [i_15])));
                    arr_66 [i_13] [i_14] [i_15] [i_15 - 1] [i_18] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) arr_9 [i_14] [i_14] [i_18] [i_18])))));
                    var_30 = ((unsigned short) ((((/* implicit */int) (short)127)) & (((/* implicit */int) (signed char)67))));
                    var_31 |= ((/* implicit */short) ((((/* implicit */int) arr_21 [i_13] [i_13] [i_13 - 1])) >> (((((((/* implicit */_Bool) 2705012640060024285ULL)) ? (3841082552U) : (((/* implicit */unsigned int) arr_19 [i_18] [i_15] [12LL])))) - (3841082542U)))));
                }
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) 1012718891U);
                    var_33 |= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)115)) ? (275218375U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))) > (arr_46 [i_19] [(signed char)5] [i_13])));
                }
                arr_71 [i_13] [i_15] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1048576)))))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (~(((/* implicit */int) arr_70 [i_13 + 2])))))));
            }
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
            {
                arr_74 [(_Bool)1] [i_13] [i_13 - 1] = ((/* implicit */short) ((signed char) arr_63 [i_14] [i_14 - 2]));
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((unsigned int) ((arr_63 [(unsigned char)7] [i_14 + 1]) / (((/* implicit */int) (unsigned short)65535))))))));
            }
            for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_78 [i_13 + 1] [i_14 + 1] [i_21]) + (arr_72 [i_13])))) ? (((((/* implicit */_Bool) arr_47 [i_13] [i_14] [i_13])) ? (((/* implicit */int) (short)15099)) : (((/* implicit */int) arr_68 [i_21] [i_21] [i_14] [i_14] [i_13])))) : ((+(((/* implicit */int) (unsigned short)6))))));
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    for (short i_23 = 1; i_23 < 9; i_23 += 1) 
                    {
                        {
                            arr_84 [i_13] [(signed char)11] [i_13] [i_22] [i_21] [(unsigned short)11] [(short)6] = ((signed char) ((((/* implicit */int) (unsigned char)152)) / (((/* implicit */int) (unsigned char)253))));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                            var_38 = ((/* implicit */long long int) (~(((int) arr_5 [i_23] [i_14 - 3] [(short)21]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
            {
                var_39 |= ((/* implicit */signed char) ((long long int) arr_83 [i_13]));
                var_40 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65123))))) / ((~(arr_17 [i_24])))));
            }
            arr_87 [i_13] [i_13] [(unsigned short)4] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)17)) % (((/* implicit */int) (signed char)-28)))) >> (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) 641594262)))))));
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(arr_19 [i_14 - 3] [i_13 - 1] [i_13 + 3]))))));
        }
        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned short)1351)) & (((/* implicit */int) (unsigned short)54876))))))));
    }
}
