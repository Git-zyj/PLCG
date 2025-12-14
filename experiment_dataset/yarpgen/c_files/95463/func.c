/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95463
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)8] [(unsigned char)8])))) * (((((/* implicit */_Bool) -23LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)7989)))))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [i_0]))) : (7718669747000801941ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 3407496814U)) : (7718669747000801951ULL)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_5] = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_2] [i_2] [i_3 - 2] [(_Bool)1] [i_1] [i_1]));
                            var_14 = ((/* implicit */unsigned int) var_5);
                        }
                        arr_19 [(unsigned short)17] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) -4255875031834383413LL)) ? (((/* implicit */int) (short)-7989)) : (((/* implicit */int) (short)-8011)))))));
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 3316848071584465903ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-9247)) < (((/* implicit */int) (unsigned char)49))))) : (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0])) / (((/* implicit */int) var_7))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))))) - (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_18 = arr_21 [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2861935020263480317LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4953)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_1]))) ^ (var_10)));
                            arr_25 [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_28 [i_1] [(short)5] [(unsigned short)13] [i_0] [i_1] = ((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_2] [i_6] [(unsigned char)13]);
                            arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0] [i_0] [(short)0] [i_0]))));
                            var_22 = ((/* implicit */unsigned int) ((signed char) arr_26 [i_2 + 2] [(short)0] [i_2] [i_2 + 2] [(unsigned char)5]));
                            arr_30 [i_0] [i_1] [i_2] [i_2] [i_8] = ((/* implicit */unsigned int) var_2);
                        }
                        for (short i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            var_23 = ((((/* implicit */_Bool) ((427464514U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9] [i_2] [i_2] [i_2] [i_0] [i_0])))))) ? (((/* implicit */long long int) (-(427464514U)))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_17 [i_9] [i_6] [i_0] [i_0] [i_0]) : (arr_17 [i_9] [i_6] [i_2] [i_1] [6LL]))));
                            var_24 = (!(((/* implicit */_Bool) (unsigned short)32157)));
                        }
                        var_25 ^= ((/* implicit */short) var_9);
                    }
                    arr_33 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_0)), (3867502782U)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)207)))) ^ (((arr_31 [i_1] [i_1] [i_1]) ? (3316848071584465903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 10; i_10 += 3) 
    {
        for (unsigned char i_11 = 3; i_11 < 10; i_11 += 4) 
        {
            {
                arr_38 [i_10] = ((/* implicit */short) arr_36 [i_11]);
                arr_39 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_10] [i_10] [i_11 - 1] [i_11] [i_11])) : (((/* implicit */int) arr_5 [i_10] [i_10] [i_10]))))) ? (((((/* implicit */_Bool) arr_6 [i_11 - 1] [i_10] [i_11])) ? ((-(((/* implicit */int) arr_8 [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */int) arr_22 [i_10] [i_11] [i_10] [i_10])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10 - 4] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) arr_3 [i_10 - 4] [i_10 - 4] [i_10 - 3])))))));
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_23 [i_11 + 1] [i_11] [i_11] [i_11] [i_11] [i_11]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((max((5406778386506493725ULL), (((/* implicit */unsigned long long int) ((arr_43 [i_13] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_13]))) : (arr_45 [i_12] [i_12])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 131071ULL))))));
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) * ((~(arr_42 [i_12]))))))));
        }
        for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 1) 
        {
            arr_50 [i_12] [i_12] = ((/* implicit */long long int) ((3316848071584465881ULL) << (((((/* implicit */int) (short)8191)) - (8146)))));
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (short i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0ULL) : (arr_54 [(unsigned char)12] [(unsigned char)12] [i_17] [i_16])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)4966))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) (!(var_5)))) : (((/* implicit */int) max((arr_53 [i_12] [i_17]), ((signed char)-96)))))) : (max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) ((short) (short)4968))))))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((/* implicit */long long int) arr_51 [i_12])), (((((/* implicit */_Bool) max((arr_41 [i_17]), (((/* implicit */short) var_0))))) ? (((((/* implicit */_Bool) 887470496U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_53 [i_17] [i_14])), (var_7))))))))))));
                            arr_58 [i_17] [i_17] [i_15] [i_12] [i_17] [i_12] |= ((/* implicit */unsigned char) 15129896002125085735ULL);
                        }
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_51 [i_15]) && (((/* implicit */_Bool) arr_56 [i_16] [i_16] [i_16] [i_16] [(unsigned short)2] [i_16] [i_16]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (887470481U)))))) % (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_53 [i_15] [i_15])))) ? (((/* implicit */long long int) var_4)) : (min((((/* implicit */long long int) arr_59 [i_12] [i_16] [i_12] [i_16])), (var_8)))))));
                            var_32 = ((/* implicit */unsigned short) (signed char)117);
                        }
                        var_33 = ((/* implicit */unsigned int) ((_Bool) min((-6461660281647008373LL), (arr_45 [i_16 + 1] [i_14 - 1]))));
                        var_34 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) arr_56 [i_16] [i_16] [i_16] [i_16] [i_16 - 1] [i_16] [i_16]))), (((((/* implicit */int) arr_56 [i_16] [i_16] [i_16] [i_16] [i_16 + 1] [i_16] [i_16])) + (((/* implicit */int) arr_56 [i_16] [i_16] [i_16] [i_16] [i_16 + 1] [i_16] [i_16]))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */int) arr_44 [i_14 + 1] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            var_36 = ((/* implicit */_Bool) ((long long int) ((arr_43 [i_14 - 1] [i_14 - 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_14]))))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_55 [i_14] [i_12] [i_12] [i_12])))))));
            var_37 = ((/* implicit */int) (short)23421);
        }
        var_38 = ((/* implicit */unsigned char) arr_49 [(short)18]);
        arr_62 [i_12] [i_12] = ((/* implicit */short) 13039965687203057888ULL);
        var_39 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_55 [i_12] [i_12] [i_12] [i_12])), (var_4))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_2)))))));
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (signed char i_20 = 2; i_20 < 19; i_20 += 3) 
            {
                for (unsigned char i_21 = 3; i_21 < 17; i_21 += 1) 
                {
                    {
                        arr_69 [i_12] [i_19] = ((/* implicit */_Bool) var_1);
                        var_40 = ((/* implicit */unsigned int) var_2);
                        var_41 = ((/* implicit */signed char) var_7);
                        var_42 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_56 [i_19] [i_19] [i_20] [i_20] [i_20] [i_19] [i_19])) ? (((/* implicit */int) arr_51 [i_21])) : (((/* implicit */int) arr_57 [i_12] [i_19])))), (((/* implicit */int) ((unsigned char) 4218372799940433838ULL))))), (((/* implicit */int) ((unsigned short) ((arr_68 [i_20] [i_19] [i_19] [i_12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (arr_42 [i_12])))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_22 = 0; i_22 < 20; i_22 += 1) /* same iter space */
    {
        var_43 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_52 [(signed char)11] [i_22] [i_22] [i_22])) ^ (arr_54 [i_22] [(_Bool)1] [(_Bool)1] [i_22])));
        var_44 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65511))))) ? (((((/* implicit */long long int) var_10)) - (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((((/* implicit */int) (short)-4973)) < (((/* implicit */int) (short)23421)))) ? (((unsigned int) (signed char)(-127 - 1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [(_Bool)1] [(unsigned short)4] [i_22] [i_22] [i_22] [i_22] [i_22]))))) : (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (short)7987)))), (((/* implicit */int) (short)-23422)))))));
    }
}
