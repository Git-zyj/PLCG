/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73803
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127)))))))), (max(((-(var_8))), (((/* implicit */long long int) ((var_1) << (((((/* implicit */int) arr_1 [i_0])) - (115))))))))));
        var_12 = ((/* implicit */short) var_0);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_1])))) - (((/* implicit */int) arr_4 [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    arr_11 [i_0] [i_3] [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)110)), ((unsigned char)7)))))))));
                    arr_12 [i_3] = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)234)) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) > (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))))), (((/* implicit */int) ((signed char) arr_9 [i_0] [i_2])))));
                }
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 35115652612096LL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) arr_3 [i_1] [i_2] [i_4])), ((short)13547))))))) : ((+(((((/* implicit */_Bool) 35115652612096LL)) ? (((/* implicit */unsigned int) var_10)) : (var_1)))))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((var_9) < (((/* implicit */int) arr_16 [i_0])))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) var_8)) : (min((arr_5 [i_0] [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-14518)), (var_3)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_0] [i_1] [i_2] [10U])))) : (((((/* implicit */_Bool) 12691599165383741031ULL)) ? (((/* implicit */int) var_7)) : (arr_13 [i_0] [i_1] [i_2] [i_0])))))) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_0])) ? (arr_8 [(_Bool)1] [i_2] [(_Bool)1] [i_2]) : (((/* implicit */unsigned long long int) min((1339283090), (-504795481)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_1] [i_2]) << (((((/* implicit */int) var_0)) + (174)))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) ((unsigned char) (short)-13547)))))));
            }
            for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_16 = ((/* implicit */unsigned int) (short)15);
                arr_21 [i_0] [i_6] = ((/* implicit */unsigned long long int) 481732058);
                arr_22 [(signed char)1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_17 += ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0]);
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (-481732059) : (arr_9 [5ULL] [i_1])))) + (min((((/* implicit */long long int) arr_0 [i_0])), (var_6)))))));
            }
            arr_24 [i_0] [(unsigned char)9] [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [i_0])) ? (var_9) : (((/* implicit */int) arr_14 [i_1] [i_0]))))), (((((/* implicit */_Bool) 16285708251454216757ULL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-10))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)114)) > (((((/* implicit */_Bool) -741856258)) ? (((/* implicit */int) (short)13547)) : (((/* implicit */int) (unsigned char)206))))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)228)) << (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0]))) : (var_1))))) - (((((((/* implicit */int) var_5)) == (((/* implicit */int) arr_4 [i_0])))) ? (((((/* implicit */int) (unsigned char)89)) << (((-4345166146473097862LL) + (4345166146473097867LL))))) : (((int) arr_27 [(signed char)10]))))));
            var_19 = ((/* implicit */unsigned int) max((max((arr_20 [2ULL] [i_7] [i_7]), (arr_20 [i_0] [i_7] [i_0]))), (((/* implicit */long long int) ((arr_20 [i_7] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned char)127)) - (124))))), ((+(((/* implicit */int) (unsigned char)206))))))) ? (((/* implicit */int) arr_26 [i_0] [i_0])) : (((/* implicit */int) arr_27 [i_0]))));
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) var_6);
        arr_31 [i_8] [i_8] = ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)207)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)23905)) : (481732058)))) ? (min((arr_28 [i_8]), (((/* implicit */unsigned int) arr_33 [i_8] [i_8] [i_8])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)38))))))), (((((/* implicit */unsigned int) (+(arr_33 [i_8] [i_8] [i_8])))) - (min((((/* implicit */unsigned int) (unsigned short)28220)), (1456705476U)))))));
            arr_34 [i_8] = ((/* implicit */signed char) ((((arr_28 [i_8]) + (((/* implicit */unsigned int) ((((-741856258) + (2147483647))) << (((((var_6) + (3977606737093415726LL))) - (30LL)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))));
        }
    }
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) (signed char)64)), (var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned char) max((max((var_1), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) var_2)) + (arr_35 [(short)6])))))));
                    arr_43 [i_10] = ((/* implicit */_Bool) ((long long int) (unsigned short)34073));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_13 = 1; i_13 < 10; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 11; i_14 += 4) 
                        {
                            arr_48 [i_12] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) arr_44 [i_13 + 2] [i_13 + 2] [i_13] [i_13] [i_13 + 1]));
                            arr_49 [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_10] [i_10] = ((/* implicit */_Bool) arr_47 [i_10] [i_11] [(short)1] [i_11] [i_14] [i_12]);
                        }
                        var_24 -= ((/* implicit */_Bool) arr_45 [4ULL] [(unsigned char)2] [(_Bool)0] [i_11] [4ULL]);
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-13547)) : (((/* implicit */int) arr_47 [i_10] [i_10] [i_13 + 2] [i_13] [i_13] [i_13 + 1]))));
                            arr_54 [i_13 + 2] [i_13] [i_13] [i_15] [i_10] = ((/* implicit */_Bool) var_0);
                            arr_55 [i_10] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 4U)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_47 [i_10] [i_11] [i_10] [i_11] [i_11] [i_11])) ? (7198202915518018635LL) : (var_8)))));
                            arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2070127433)) && (arr_53 [i_13] [i_10] [i_13 + 1] [(signed char)4] [i_13 + 1] [i_13 + 1])));
                        }
                        for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            arr_61 [i_16] [i_12] [i_16] [i_10] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 18424224058023778008ULL)))) : ((+(var_6)))));
                            arr_62 [i_10] [i_11] [i_11] [i_13] [i_10] = ((/* implicit */short) ((long long int) arr_46 [i_10] [i_12] [i_10]));
                        }
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) (unsigned short)0);
                            arr_65 [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) ((int) arr_53 [i_10 - 2] [i_10] [i_12] [i_13 + 2] [i_13 + 1] [i_10 - 2]));
                            arr_66 [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) arr_41 [i_10 - 1] [i_10] [i_10]);
                            var_27 ^= ((/* implicit */signed char) (-(((22520015685773600ULL) << (((arr_52 [i_10] [i_11] [i_10] [i_13 + 1] [i_17]) + (962532120)))))));
                            arr_67 [1LL] [1LL] [i_10] [(_Bool)1] [i_10] [(_Bool)1] [i_10 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_44 [i_10 - 2] [i_11] [i_12] [i_13 + 2] [i_10 - 1])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        }
                    }
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        arr_70 [i_10 - 2] [i_11] [i_10] [i_12] [i_10] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [(_Bool)1] [i_11] [i_12]))) : (((unsigned int) arr_64 [i_10] [i_11] [i_12] [i_18]))));
                        arr_71 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_41 [1LL] [i_12] [i_18])) + (2147483647))) << (((((/* implicit */int) arr_32 [i_10])) - (14)))))) < (min((((/* implicit */unsigned long long int) arr_57 [i_12] [i_12] [i_12] [i_11] [i_10])), (17868451556974045979ULL)))))) ^ ((~(((/* implicit */int) ((short) var_9)))))));
                        arr_72 [i_18] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) arr_57 [i_10] [i_11] [i_12] [i_11] [i_11]);
                        arr_73 [i_10] [i_10] = ((((/* implicit */_Bool) min((max(((signed char)109), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((arr_39 [i_10] [i_11] [i_11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))))))) ? (7081026167316156819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((-481732059) > (((/* implicit */int) (signed char)-114))))) > (((/* implicit */int) ((((/* implicit */int) (short)8875)) < (((/* implicit */int) (signed char)-53))))))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)74)), (arr_59 [i_10] [i_11] [i_12] [i_18] [i_10 - 3])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_44 [i_10] [i_10] [i_10] [i_10] [i_10]), (var_0)))), (((var_3) << (((((/* implicit */int) var_7)) - (8848)))))))) : (((unsigned long long int) -2070127405))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        arr_76 [i_10] [i_11] [i_12] [i_10] = ((_Bool) max((((/* implicit */unsigned long long int) (short)4095)), (((unsigned long long int) (unsigned char)0))));
                        var_29 = ((/* implicit */short) var_10);
                        var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2070127434)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3358129233U)));
                        /* LoopSeq 1 */
                        for (short i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            arr_79 [i_10] [i_10] [(unsigned char)0] [i_12] [(unsigned char)0] [i_10] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) == (var_3)))))) << (((2059841441) - (2059841414)))));
                            arr_80 [(signed char)4] [i_10] [i_12] [i_19] [i_10] [i_19] = ((/* implicit */unsigned char) (unsigned short)63980);
                            var_31 = ((/* implicit */short) arr_47 [i_10] [(short)6] [i_10 + 1] [i_10] [i_10] [i_10]);
                        }
                        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) -481732059)) : (11U))))))));
                    }
                    var_33 -= ((/* implicit */signed char) ((((((((/* implicit */long long int) arr_59 [6] [i_11] [i_11] [i_11] [(unsigned char)10])) < (var_8))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) 1792273520U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23277))) : (arr_60 [i_10] [i_11] [i_12]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42258))))))));
                }
            } 
        } 
    } 
}
