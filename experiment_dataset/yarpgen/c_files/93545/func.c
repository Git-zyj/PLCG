/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93545
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
    var_19 = (short)8128;
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)8118)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8128))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)960))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (var_3))))))));
    var_21 += ((/* implicit */long long int) min(((short)8105), (var_7)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [3LL] &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)960))) : (4294967295U))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_3 [(short)6] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) (short)-974))))) ? (((((/* implicit */int) (unsigned short)34396)) + (((/* implicit */int) (short)-24794)))) : (((/* implicit */int) (short)956)))), (((/* implicit */int) (short)13350))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) (((((_Bool)1) ? (var_6) : (((unsigned long long int) (unsigned short)65535)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (min((520093696U), (((/* implicit */unsigned int) arr_10 [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_3] [i_2] [i_3] [i_4])))))))));
                            arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31133)) / (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2044))))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_7 [i_2 + 1] [i_1] [i_4 + 2] [i_1 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_0])) / (((/* implicit */int) (unsigned char)31))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_5 + 2] = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (_Bool)1))))) + (min((var_13), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) 2097152)) + (520093696U))))));
                    arr_24 [i_0] [(_Bool)1] [(_Bool)1] [14LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_6 - 1]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)65535))))))), (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned short)2] [i_1 - 1] [i_5 + 4] [i_6 + 1]))) : (arr_5 [i_1 + 1] [i_6 + 3] [i_5 + 1])))));
                    arr_25 [i_0] [i_1] [i_1] [i_6] = ((((/* implicit */_Bool) ((short) arr_4 [i_5 - 2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_6]) + (2395055418U)))) ? (((/* implicit */int) ((short) 48458012U))) : (((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_6 [(short)13] [(short)13]))))))) : (32505856LL));
                    arr_26 [i_0] [(_Bool)1] [i_6 + 3] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-9))));
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        var_23 = arr_7 [i_5] [i_1 - 1] [i_5 - 2] [i_7 - 2];
                        var_24 = ((((/* implicit */long long int) min((((2752882174U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-26908))))), (((/* implicit */unsigned int) arr_9 [i_7 - 1] [i_5] [i_5] [i_1 + 1]))))) * (((((/* implicit */_Bool) 1099511627520LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1099511627520LL))));
                        var_25 = ((/* implicit */_Bool) arr_14 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_6] [i_5 + 3]);
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_31 [(short)15] [(short)15] [i_5] [(signed char)15] [i_0] = min(((short)8128), (((/* implicit */short) (_Bool)1)));
                        var_26 = ((/* implicit */unsigned short) ((2113929216LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned char i_9 = 4; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)35573)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)35563)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0] [0LL]))))) : (min((-4611686018427387904LL), (((/* implicit */long long int) (short)32704))))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(6875583012141829303LL)))))) ? (arr_5 [i_0] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 260096U))))));
                        arr_35 [2LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_9] [i_0]))) ? (67553994410557440LL) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_18 [i_0] [i_1 + 1])))))))) ? (-2113929219LL) : (((/* implicit */long long int) ((min((arr_34 [i_9 - 2] [i_1] [(unsigned short)15] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_18 [i_0] [6LL])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0]))))))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        var_29 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)7680)) ? (2113929223LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26915))))) + (((((/* implicit */_Bool) (short)-25794)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29963))) : (-1LL)))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -1LL;
                    }
                }
                for (long long int i_11 = 1; i_11 < 13; i_11 += 1) /* same iter space */
                {
                    var_30 += ((/* implicit */short) ((unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-22100)), ((unsigned short)2047)))) / (((/* implicit */int) var_17)))));
                    var_31 = ((/* implicit */unsigned char) arr_34 [(unsigned char)1] [i_1 - 1] [i_1] [i_5 + 4] [(unsigned char)1] [i_11 + 1]);
                    var_32 = ((/* implicit */short) arr_37 [i_0] [i_0] [i_11 + 2]);
                }
                arr_42 [i_5 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2395708357U)) ? (min((arr_37 [i_0] [i_0] [i_5]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (~(3803883704U)))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_27 [0LL] [i_5 + 4] [i_5] [i_5] [i_1 - 2] [i_1])) & (((/* implicit */int) arr_40 [i_5 + 4] [i_5 + 2] [i_5 + 1] [i_5] [i_1])))))));
                arr_43 [i_0] = ((/* implicit */int) var_4);
                var_33 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_1 + 1] [(short)13] [3U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (min((((/* implicit */long long int) (_Bool)1)), (8478541812585953457LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) arr_6 [i_0] [i_5])) : (((/* implicit */int) (_Bool)1))));
            }
        }
        arr_44 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [6LL] [i_0] [(short)4] [i_0]) ? (((/* implicit */int) (unsigned short)56276)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (short)24756)) : (((/* implicit */int) arr_38 [4U] [(_Bool)1] [i_0] [(short)10] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (signed char)23)), (20LL))), (((/* implicit */long long int) var_5))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) var_11))))), (arr_5 [i_0] [i_0] [i_0])))));
        var_34 = ((/* implicit */signed char) ((unsigned short) ((arr_11 [i_0] [i_0] [(short)12] [i_0]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(short)6] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_0])))));
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        arr_47 [20LL] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-26908)) * (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) (unsigned short)63488)) ? (((/* implicit */int) (short)-29191)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min(((unsigned short)63488), (((/* implicit */unsigned short) (signed char)1)))))))), (((long long int) ((((/* implicit */int) (unsigned short)56276)) + (((/* implicit */int) (signed char)5)))))));
        arr_48 [i_12] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)18688)), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_12])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)1))))) : (((((/* implicit */_Bool) arr_46 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12]))) : (5664474172754866514LL)))))));
        arr_49 [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)22092))) / (3006979514484798728LL)))) ? (((/* implicit */int) arr_45 [i_12])) : (((/* implicit */int) ((signed char) (_Bool)1))))) - (((/* implicit */int) (unsigned short)63797))));
    }
}
