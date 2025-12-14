/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90289
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2)))) + (((((/* implicit */int) var_7)) + (((/* implicit */int) var_6)))))) | (((/* implicit */int) var_5))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((((arr_11 [i_3 - 1] [i_2 + 1] [i_2]) ^ (arr_11 [i_3 + 2] [i_2 + 1] [i_2 + 1]))), ((~(arr_11 [i_3 + 2] [i_2 + 1] [i_2]))))))));
                        arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-85)) + (((/* implicit */int) (_Bool)1))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_5);
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_3] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 + 1] [i_3 + 1] [i_3 + 1])) >> (((((/* implicit */int) arr_3 [i_2 + 1] [i_3] [(unsigned char)10])) - (246)))))) ? ((-(((/* implicit */int) (signed char)-85)))) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_8 [i_0] [(unsigned char)4] [i_1])))) <= (((/* implicit */int) ((signed char) ((unsigned char) 18446744073709551615ULL)))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_4] [2ULL] = ((/* implicit */unsigned char) arr_6 [i_0] [i_4] [i_4] [i_0]);
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [(_Bool)1] [i_4] [i_0] [i_4] = (((_Bool)1) || (((/* implicit */_Bool) 6813436085447851902ULL)));
                            arr_26 [(unsigned char)5] [i_4] [(_Bool)1] [i_5] [i_0] [i_7] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))));
                            arr_27 [(_Bool)1] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_5 + 1] [(_Bool)0] [(signed char)10] [i_7] [i_0] [(unsigned char)4]))));
                            arr_28 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((11661007673215607425ULL) * (arr_11 [i_0] [i_5 + 1] [i_6])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [i_5 + 2] [i_5 + 1] [i_0] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 1])), (arr_5 [i_0])))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            } 
            arr_29 [i_4] [i_0] = ((/* implicit */unsigned char) ((max(((!((_Bool)0))), ((_Bool)1))) && (((/* implicit */_Bool) arr_9 [(unsigned char)9] [(_Bool)1] [(_Bool)1]))));
            var_13 *= ((/* implicit */_Bool) min((arr_22 [(signed char)4]), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4]))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) 2305842940494217216ULL);
        }
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    arr_37 [i_0] [i_9] = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_9] [i_0] [1ULL] [i_10] [i_10] [i_8]);
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_10))));
                }
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    arr_40 [i_0] [i_8] [i_9] [i_11] [i_9] = arr_23 [i_0] [i_8] [i_0] [i_0] [i_9] [i_11] [i_11];
                    arr_41 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned long long int) (!(arr_34 [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_45 [i_0] [i_0] [i_8] [i_8] [i_12] |= ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_46 [i_0] [i_8] [(unsigned char)10] [i_11] [(unsigned char)10] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) > ((+(((/* implicit */int) ((((/* implicit */_Bool) 324707227250825826ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_32 [i_0] [i_8] [i_9]))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((_Bool) ((arr_24 [i_0] [i_8] [i_9] [i_11] [i_13]) ? (((/* implicit */int) arr_24 [i_0] [i_9] [i_9] [i_9] [i_8])) : (((/* implicit */int) var_4))))))));
                    }
                }
                arr_50 [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_9])) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))), (min((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_20 [i_0]))))));
            }
            for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                arr_55 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_60 [i_0] [i_8] [6ULL] [i_15] [i_16] = ((/* implicit */signed char) (+((-(((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1))))))));
                            arr_61 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_16] = 2263537854554534899ULL;
                            arr_62 [i_0] [i_14] [i_0] = ((/* implicit */signed char) arr_52 [i_0] [i_15] [i_16]);
                            arr_63 [i_0] [i_0] [i_14] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_8] [i_0])) << (((arr_58 [i_16] [7ULL] [i_14] [i_15] [i_15]) - (1856191029006110626ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_0] [i_8] [i_14] [(_Bool)1] [i_16])))))) : (min((arr_58 [(signed char)1] [i_8] [i_15] [(_Bool)1] [i_16]), (arr_58 [i_0] [i_8] [i_14] [i_15] [i_16])))));
                        }
                    } 
                } 
                arr_64 [i_0] [15ULL] [i_0] = ((((/* implicit */int) (signed char)44)) == (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))));
                arr_65 [i_0] [(signed char)10] = ((12534847948109258915ULL) << (((/* implicit */int) var_7)));
                arr_66 [i_14] [i_14] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_0] [i_8] [i_0])) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_0] [8ULL] [i_0])) && (((/* implicit */_Bool) arr_33 [11ULL] [i_8] [i_0])))))));
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_54 [i_17 + 1]), (var_9)))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_8] [i_17 + 1] [i_17] [i_8])) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))))))));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        {
                            arr_75 [i_0] [i_17 + 1] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_3 [i_8] [i_17] [i_19 + 1]))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) * (((18433727588819799055ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */int) (signed char)-106)) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_20 = 1; i_20 < 13; i_20 += 2) 
            {
                arr_79 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) ((signed char) 18446744073709551609ULL))) - ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_3))) <= (((arr_6 [i_20 + 1] [i_20] [i_20 + 3] [i_0]) ? (((/* implicit */int) arr_6 [i_20 + 1] [i_20 + 1] [i_20 + 3] [i_0])) : (((/* implicit */int) (signed char)51))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_0] [i_0] [i_8] [(_Bool)1] [i_0] [(unsigned char)4])) | (((/* implicit */int) var_8))));
                arr_83 [i_8] [i_8] [(signed char)2] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [4ULL] [i_8] [(unsigned char)0])) ^ (((/* implicit */int) var_7))));
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                var_21 = ((/* implicit */signed char) arr_39 [i_0] [i_0] [i_8] [i_0]);
                arr_87 [i_0] [10ULL] [i_22 - 1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_9)) <= (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (unsigned char)38))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_23 = 1; i_23 < 15; i_23 += 2) 
                {
                    var_22 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_91 [i_0] [i_0] [i_22] [i_0])) >= (((/* implicit */int) arr_53 [i_8])))))));
                    /* LoopSeq 4 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((unsigned long long int) arr_10 [i_23 + 1] [i_23 + 1] [i_22 - 1] [i_23] [i_24]));
                        var_24 = ((/* implicit */_Bool) arr_20 [i_0]);
                        arr_95 [(signed char)6] [(_Bool)1] [i_0] [(signed char)6] [(signed char)6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_0]))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 4) /* same iter space */
                    {
                        var_25 |= ((/* implicit */signed char) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_78 [i_22 - 1]))));
                        arr_99 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-11))));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 4) /* same iter space */
                    {
                        arr_103 [i_0] = ((/* implicit */_Bool) var_0);
                        arr_104 [i_0] [(unsigned char)6] [(_Bool)1] [i_23] [(signed char)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_91 [i_0] [(_Bool)0] [8ULL] [i_23]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)109)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [(signed char)13])))))));
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 4) /* same iter space */
                    {
                        arr_108 [7ULL] [i_8] [i_22 - 1] [i_0] [i_27] = ((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_22 - 1] [i_0] [i_27]) ? (((/* implicit */int) arr_105 [(unsigned char)7] [i_8] [i_27] [i_23] [i_27])) : (((/* implicit */int) (signed char)-120))));
                        var_26 = ((/* implicit */unsigned long long int) arr_52 [i_0] [(_Bool)1] [i_27]);
                    }
                }
                arr_109 [i_0] [i_0] [(unsigned char)10] = ((unsigned long long int) var_7);
            }
        }
    }
    var_27 &= ((/* implicit */unsigned long long int) ((((var_6) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)146)) - (((/* implicit */int) var_6))))) : (((unsigned long long int) (signed char)119)))))));
}
