/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80509
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
    var_17 -= ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (562941363486720LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-25184)))))) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), ((((~(11924272326680735270ULL))) >> ((((~(-4289622528191944416LL))) - (4289622528191944369LL)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = (!((!(((/* implicit */_Bool) (unsigned char)251)))));
        arr_4 [(short)6] [(short)6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0])))))), (((unsigned int) ((((/* implicit */_Bool) (unsigned short)17506)) || (((/* implicit */_Bool) (short)25174)))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(1569469734U))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) /* same iter space */
        {
            arr_12 [(short)4] [i_2 + 2] [i_2 + 2] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) 9109134696383300191ULL)));
            /* LoopSeq 3 */
            for (short i_3 = 3; i_3 < 7; i_3 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_23 [i_3] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_6 [i_3 + 2] [i_2 + 1])));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [(signed char)3] [(signed char)7])) && (((/* implicit */_Bool) 17U))));
                    }
                    var_21 = ((/* implicit */long long int) var_12);
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 2])) ? (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2 + 1]) : (arr_25 [i_2] [(signed char)9] [(unsigned short)5] [i_2 - 1] [i_2 + 1])));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_5 [i_1]))));
                    }
                    arr_26 [i_1] [i_3] [i_3 + 3] [i_1] = ((/* implicit */_Bool) (~(1715160810U)));
                    var_24 = ((/* implicit */unsigned short) (unsigned char)195);
                }
                arr_27 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) min((((short) ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_3 - 3])) ? (((/* implicit */int) arr_3 [8])) : (((/* implicit */int) (signed char)0))))), (((short) arr_7 [(signed char)9]))));
            }
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_25 ^= ((/* implicit */unsigned short) max((max((arr_1 [i_2 - 1]), (((/* implicit */long long int) arr_29 [i_2 + 2] [i_2 + 1] [i_2 - 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_8 [i_7] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_2 - 1])))))));
                arr_30 [i_2 - 1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))));
                arr_31 [(short)3] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1])), (max((arr_15 [i_1] [i_1]), (((/* implicit */long long int) (short)-9756))))))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                var_26 = ((/* implicit */long long int) 8527976494045628881ULL);
                arr_34 [i_8] [(_Bool)1] = ((/* implicit */signed char) arr_10 [(_Bool)1] [i_2 - 1] [(_Bool)1]);
                arr_35 [i_8 + 1] [(short)6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_2] [i_1])), (((3158012581U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))))))) ? (((((((/* implicit */int) (short)-17152)) + (2147483647))) << (((((/* implicit */int) arr_16 [i_1] [i_2] [i_8])) - (84))))) : (((/* implicit */int) ((unsigned char) max(((signed char)42), (var_1)))))));
                arr_36 [(short)2] = ((/* implicit */unsigned char) 4289622528191944402LL);
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_1] [i_1] [i_1])))))));
            }
            arr_37 [i_1] [i_1] = ((/* implicit */long long int) min((((unsigned int) arr_17 [i_2 + 1] [i_2 - 1] [i_1])), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)250)))))));
        }
        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
        {
            arr_40 [i_9] [i_9] [i_1] |= ((/* implicit */int) arr_33 [0LL] [(_Bool)1] [0LL]);
            arr_41 [i_1] [i_9] = ((/* implicit */long long int) (unsigned char)128);
            var_28 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (arr_13 [i_9] [i_9] [i_9])))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((((/* implicit */int) var_13)) | ((-(((/* implicit */int) arr_32 [i_1] [(_Bool)0] [i_1])))))), (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_29 [i_9] [i_1] [(unsigned short)0])))) ? (((/* implicit */int) min((var_0), ((unsigned char)151)))) : ((+(((/* implicit */int) arr_33 [i_1] [i_9 - 1] [(unsigned short)1])))))))))));
        }
        for (unsigned char i_10 = 1; i_10 < 8; i_10 += 3) 
        {
            arr_46 [i_10] [i_10] [i_10] = ((/* implicit */short) ((signed char) ((_Bool) arr_0 [i_10 + 1])));
            /* LoopSeq 3 */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                arr_50 [i_1] [i_10] [i_10] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_0)))))))));
                var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_11] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_10 + 2] [(short)0]))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) (short)-5361))))), ((+(2828276217U)))))));
            }
            for (unsigned int i_12 = 2; i_12 < 7; i_12 += 2) 
            {
                arr_53 [i_1] [i_10] [i_1] [i_1] = ((/* implicit */signed char) (short)14924);
                var_31 = arr_22 [i_12] [i_12] [(unsigned short)8] [i_1] [i_10] [i_1];
                var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((arr_13 [i_12 - 1] [i_12 - 2] [i_12 + 3]), (arr_13 [i_12 + 3] [i_12 + 2] [i_12 + 3])))) : (((/* implicit */int) var_0))))));
            }
            for (int i_13 = 2; i_13 < 9; i_13 += 4) 
            {
                var_33 = ((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_10] [i_10] [(_Bool)1]))));
                arr_57 [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_13 + 1])) ? (arr_1 [i_1]) : (arr_1 [i_13 - 2])))));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 4; i_15 < 9; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */short) arr_18 [i_10] [i_13 + 1] [i_14] [i_10]);
                        arr_62 [i_10] [i_13] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) max(((short)32756), (((/* implicit */short) (unsigned char)49)))))))) > ((-((-(arr_54 [i_1] [i_15])))))));
                        arr_63 [i_10] [i_14] [i_13 + 1] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((long long int) arr_52 [i_14] [(short)0] [i_1]));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_35 -= ((/* implicit */unsigned char) arr_39 [i_16]);
                        arr_66 [(unsigned char)8] [i_10] [i_10] [i_10] [(short)6] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (short)14962))))), (max((-9223372036854775807LL), (((((/* implicit */_Bool) arr_8 [i_14] [i_13])) ? (((/* implicit */long long int) arr_58 [i_10] [i_10] [i_10 + 1])) : (-4289622528191944408LL)))))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) 7313475606453235755LL))));
                        arr_67 [i_1] [i_10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 6374033622380763718LL)) || (((/* implicit */_Bool) 1569469734U))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((short) 5063171270199333937ULL))) && (((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_10])) && (((/* implicit */_Bool) (signed char)-31)))))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        var_37 += ((/* implicit */short) arr_14 [(unsigned short)6] [i_14] [(unsigned char)8]);
                        var_38 -= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)168)), ((short)26900))))))) - (arr_54 [(_Bool)1] [(_Bool)1])));
                    }
                }
                arr_71 [i_1] [(unsigned char)4] [i_10] [(short)6] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_10 [i_1] [i_10 + 2] [i_13 + 1])), (((((/* implicit */int) var_16)) + ((-(arr_58 [8U] [i_10] [i_1])))))));
            }
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_10 + 2] [i_10 + 2])))))) & ((-(arr_48 [i_10 + 2] [i_1] [i_10 - 1] [i_10 - 1]))))))));
            var_40 -= ((/* implicit */unsigned char) ((min((arr_25 [i_1] [i_1] [i_10 + 2] [(unsigned char)7] [i_10]), (((/* implicit */unsigned int) var_14)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_47 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_1] [i_10] [i_1] [i_1] [i_1])))))))));
            arr_72 [i_1] [i_10] [i_1] = ((/* implicit */signed char) arr_29 [i_10 + 2] [i_10 + 2] [i_10 + 1]);
        }
    }
}
