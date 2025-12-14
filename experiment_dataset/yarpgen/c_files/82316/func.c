/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82316
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 1708040440999871550ULL))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-41)) == (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1]))))) : ((~((~(var_5)))))));
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (unsigned short)48812)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (unsigned short)42525)))))), (((((/* implicit */int) arr_2 [i_1] [i_1] [i_0 - 1])) - (((/* implicit */int) ((unsigned short) (unsigned short)26627))))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_13 *= ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_0 [i_2])));
            var_14 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_2 - 1]))));
            var_15 = ((/* implicit */unsigned short) 0ULL);
        }
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                arr_13 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0])))))) ? (((((/* implicit */int) (signed char)23)) << (((((/* implicit */int) var_9)) + (98))))) : (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0])) ? (552612598) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_16 [i_5] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                    var_16 -= ((/* implicit */signed char) var_6);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_4])))))));
                    arr_17 [i_0] [i_4] [i_3] [i_3] [i_0 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_5] [i_5])) : (var_1)))) ? (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-33)))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)39)))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) (signed char)113))), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) ((0ULL) != (var_0)))))))))));
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_4 [i_6] [i_6] [i_6]) ? (((/* implicit */int) var_8)) : (var_1))))) ? (min(((-(((/* implicit */int) (unsigned char)74)))), (((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */int) (signed char)-53)) : (-479030291))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) || (arr_0 [i_0]))))));
                        var_21 ^= ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_6))))), (max(((short)-16178), (((/* implicit */short) (signed char)-103))))));
                        var_22 = ((/* implicit */short) (signed char)-20);
                    }
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (_Bool)0))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_24 = ((((((/* implicit */int) (signed char)-10)) + (((/* implicit */int) (signed char)-120)))) - (((/* implicit */int) (signed char)76)));
                    var_25 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_21 [i_0] [(signed char)15] [i_3] [i_4] [i_9] [i_9])))))) % (((/* implicit */int) var_11))));
                }
                for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    arr_32 [i_0] = ((/* implicit */short) max((max((((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned char)149)))), (((((/* implicit */_Bool) (unsigned short)26652)) || (((/* implicit */_Bool) 1051011706)))))), (((627014082) < (((/* implicit */int) (signed char)-107))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_23 [i_0] [i_3] [i_4] [i_4] [i_4] [i_10]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned short i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) min((-1534929520), (((/* implicit */int) arr_23 [i_0 - 1] [i_3] [i_0] [18U] [i_12] [i_12]))))), (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (var_7)))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(arr_35 [i_4] [i_4]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_13 = 4; i_13 < 17; i_13 += 4) 
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+(var_4))))));
                    arr_40 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */signed char) ((_Bool) max((1232835137), (((/* implicit */int) (unsigned short)39643)))));
                }
                for (short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    var_30 -= ((/* implicit */unsigned char) ((_Bool) arr_33 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]));
                    arr_45 [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3853153451U), (((/* implicit */unsigned int) arr_2 [i_0] [i_3] [i_4]))))) ? (((unsigned long long int) min((13625611998101483357ULL), (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_10)) + (var_4))), (((/* implicit */int) max((var_9), ((signed char)-110)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned char)78)) + (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-29418)))))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_8))))));
                        var_32 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_19 [i_0 - 1]), (((/* implicit */unsigned char) var_8)))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -759323747))));
                        var_34 -= ((/* implicit */int) var_7);
                        var_35 -= ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) 312558795)) | (13210721395490738914ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-31)))))));
                    }
                    var_36 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)205))));
                }
                var_37 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_11 [i_0] [i_3] [i_4]), (((/* implicit */int) (signed char)81))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_3] [i_3] [(unsigned short)16])) ? (var_1) : (((/* implicit */int) (signed char)112))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (min((((((/* implicit */_Bool) arr_42 [i_0 - 1] [i_0] [(_Bool)1] [i_4])) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)-89)))), (((/* implicit */int) arr_36 [i_0] [i_0] [i_4] [i_0] [i_0 - 1]))))));
            }
            for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                var_38 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_17]))));
                arr_54 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)-18)) ? (min((((/* implicit */int) (unsigned char)128)), (var_4))) : (((/* implicit */int) ((signed char) var_8))))), ((-(((/* implicit */int) arr_12 [i_3] [i_0]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 4) 
            {
                var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-115))));
                var_40 &= ((/* implicit */int) arr_49 [i_0] [i_3] [i_18] [i_3]);
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (+(var_0))))));
                arr_57 [i_0] [i_0] = ((/* implicit */signed char) ((arr_8 [(signed char)5] [i_0 - 1] [i_18]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))));
            }
            arr_58 [i_3] [i_0] [(signed char)14] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)-47))));
        }
        for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            arr_63 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) var_0);
            arr_64 [i_19] [i_19] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_6 [i_0]))))));
        }
        var_42 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 1649267441664ULL)) ? (((/* implicit */int) ((signed char) 1398190442U))) : (min((((/* implicit */int) arr_14 [4])), (var_1)))))));
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 19; i_20 += 4) 
        {
            for (int i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                {
                    var_43 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max(((unsigned short)44910), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) var_2)) : (var_4))) : (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (short)22893)))))));
                    arr_69 [i_0] [i_0] [i_21] = ((/* implicit */unsigned short) (~(max((var_5), (((/* implicit */int) var_9))))));
                    var_44 = ((/* implicit */signed char) ((((288858916) <= (((/* implicit */int) ((short) 1516898405))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_59 [i_0 - 1] [i_0]))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            for (signed char i_23 = 1; i_23 < 15; i_23 += 3) 
            {
                for (unsigned int i_24 = 0; i_24 < 19; i_24 += 4) 
                {
                    {
                        var_45 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [(short)2] [i_23] [i_22] [i_0])) ? ((-(((/* implicit */int) (signed char)-82)))) : (((((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [i_0] [i_23] [i_23] [(signed char)14] [i_22] [(unsigned short)6])), ((unsigned short)29871)))) / (((/* implicit */int) max(((short)4031), (((/* implicit */short) (unsigned char)122)))))))));
                        var_46 -= ((/* implicit */_Bool) ((short) ((2971674649U) != (((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_22] [i_23 + 4])))));
                        var_47 |= ((/* implicit */unsigned char) max(((~((~(((/* implicit */int) (short)32761)))))), (-759323735)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_25 = 0; i_25 < 23; i_25 += 1) 
    {
        var_48 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_80 [(unsigned short)8]))));
        arr_82 [i_25] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) arr_81 [i_25] [i_25])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 4) 
        {
            arr_86 [i_25] = ((/* implicit */signed char) (short)10158);
            /* LoopSeq 1 */
            for (unsigned char i_27 = 1; i_27 < 21; i_27 += 2) 
            {
                arr_91 [i_25] [(unsigned char)8] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_84 [i_27 + 1] [i_25] [i_27])) ? (748036862U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6028)))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_87 [i_27 - 1] [i_27 - 1] [i_27 + 1] [i_27 - 1])) ? (arr_90 [i_27 - 1] [i_27 - 1] [i_27 + 1] [i_27 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))));
                arr_92 [i_26] [i_25] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (short)17683)))));
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) arr_90 [i_27] [i_27] [i_27 - 1] [i_27 + 2])) : (9094436841651816447ULL)));
            }
        }
    }
    var_51 -= ((/* implicit */unsigned short) var_4);
    var_52 = var_7;
    var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((var_4) * (((/* implicit */int) (signed char)-1)))))));
}
