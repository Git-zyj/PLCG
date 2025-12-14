/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65594
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) (signed char)43);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1 + 2] [i_2])) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (var_11)))));
                        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 2])) ? (3618711007U) : (((/* implicit */unsigned int) arr_8 [i_1 - 1]))));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49))))) ? (((/* implicit */long long int) (~(var_11)))) : (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_5 [i_4] [9U]))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48))))))))));
                        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) (signed char)43)))), (((/* implicit */int) min((arr_7 [i_1 + 1]), (arr_7 [i_1 + 4]))))));
                        arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (-675762764)))) : (((var_10) << (((((/* implicit */int) var_12)) + (7889)))))))) - (((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_4] [i_1 + 1] [i_4] [i_4] [i_4])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1])))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_14 [i_1 + 3] [i_1 - 1]), (arr_20 [i_1 - 1])))) ? ((-(((/* implicit */int) arr_14 [i_1 + 4] [i_1 + 2])))) : ((+(arr_6 [i_1 + 3] [i_1])))));
                            var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((2138910991U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))))) : (max((((/* implicit */unsigned int) var_1)), (var_13))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) < (var_11)))) * (var_11))))));
                            var_21 += max((((/* implicit */int) ((unsigned short) arr_3 [i_5]))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_1 + 3])))));
                            var_22 *= ((/* implicit */signed char) var_5);
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 676256310U))));
                        }
                        arr_21 [i_0] [i_0] = ((/* implicit */long long int) (-(arr_18 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5])));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_2] [6] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)108)) >> (((((/* implicit */int) (signed char)-110)) + (114)))))))), (min((min((((/* implicit */unsigned int) arr_3 [i_0])), (var_7))), (((/* implicit */unsigned int) ((unsigned short) arr_7 [(signed char)0])))))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (signed char)113)))))));
                        }
                        for (int i_8 = 4; i_8 < 18; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_5] [i_0])), (max(((-(3618711007U))), (((/* implicit */unsigned int) (signed char)-43)))))))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_18 [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 2] [i_8 - 1] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1 + 4] [i_1] [i_1] [i_1 + 2] [i_8 + 1] [i_8])) ? (arr_18 [i_1 + 2] [i_1] [i_1] [i_1 + 4] [i_8 - 3] [i_8]) : (((/* implicit */int) var_9)))))));
                            var_27 *= ((/* implicit */signed char) min((((/* implicit */int) ((signed char) (signed char)-41))), ((((!(((/* implicit */_Bool) arr_12 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_5] [i_8 - 4] [12U])))) ? (((/* implicit */int) min(((short)-23187), ((short)12437)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1])) : (var_0)))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
                        {
                            arr_29 [i_0] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_2 [(short)3] [i_5]));
                            arr_30 [i_0] [i_1] [i_2] [i_5] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (arr_22 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 - 1] [12LL]) : (arr_22 [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 2] [i_1])))));
                        }
                        var_28 = min((((((/* implicit */_Bool) (signed char)124)) ? (((((/* implicit */_Bool) 2147483647)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))))), (((/* implicit */unsigned int) ((var_11) & (((((/* implicit */int) arr_25 [16U] [i_2] [i_5])) << (((((/* implicit */int) arr_1 [i_2])) + (26099)))))))));
                        var_29 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max(((signed char)-38), ((signed char)-37)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)98))))) : (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (signed char)102)) : (-1600780757))))));
                    }
                    var_30 ^= arr_26 [i_0] [i_0] [i_0] [i_1] [i_0];
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(var_13)))) && (((/* implicit */_Bool) (+(1476805020U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((min((676256289U), (((/* implicit */unsigned int) (signed char)-62)))), (((/* implicit */unsigned int) (~(var_0))))))));
    /* LoopSeq 3 */
    for (int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned int) arr_20 [i_10]);
        var_32 = (~((-(((/* implicit */int) ((short) 3618711007U))))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 2; i_12 < 9; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        arr_45 [i_11] [i_11] [2U] [i_14] = ((/* implicit */long long int) ((arr_42 [i_12 - 1] [i_12] [3] [i_12 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_12 [13LL] [i_12] [i_13] [i_12] [i_14] [i_14]))));
                        arr_46 [(signed char)9] [i_11] [i_11] = ((/* implicit */signed char) (~(392993188)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_34 = ((/* implicit */int) max((var_34), ((+(arr_22 [i_15] [i_15] [i_15] [i_11] [i_11])))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    for (signed char i_18 = 3; i_18 < 6; i_18 += 4) 
                    {
                        {
                            arr_57 [i_11] [i_11] [i_16] [i_17] [i_18] = ((/* implicit */long long int) arr_41 [i_15] [i_15] [i_15] [8]);
                            var_35 = var_4;
                            var_36 = ((/* implicit */long long int) min((var_36), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_18 + 2]))) | (4115298602910870601LL)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_11])) ? (var_6) : (((/* implicit */int) ((((/* implicit */_Bool) -1512023177)) && (((/* implicit */_Bool) arr_20 [(short)2])))))));
            /* LoopNest 2 */
            for (short i_20 = 2; i_20 < 7; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    {
                        arr_64 [i_20 - 2] [i_20 - 2] = ((/* implicit */int) ((arr_17 [i_19] [i_20] [i_21]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_28 [i_11] [(short)14] [i_11]) : (((/* implicit */int) (unsigned short)65527)))))));
                        /* LoopSeq 3 */
                        for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            var_38 = ((unsigned int) (short)-32751);
                            arr_68 [i_22] [i_21] [i_20 - 1] [i_19] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_11]))));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (arr_65 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_65 [i_11] [i_19] [i_20 + 2] [(short)8] [(short)8])));
                            arr_69 [i_11] = ((/* implicit */signed char) ((arr_53 [i_20 + 2] [i_20 + 1] [i_20 - 1] [i_20 + 1]) + (arr_53 [i_20 - 1] [i_20 + 3] [i_20 - 2] [i_20 + 3])));
                        }
                        for (long long int i_23 = 0; i_23 < 10; i_23 += 1) 
                        {
                            arr_74 [i_21] [i_21] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_41 [i_11] [i_11] [i_20] [i_23])) - (((/* implicit */int) arr_3 [i_11]))))));
                            var_40 &= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                        }
                        for (long long int i_24 = 0; i_24 < 10; i_24 += 4) 
                        {
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) ((var_7) <= (var_7)))) * (((/* implicit */int) ((var_8) > (((/* implicit */long long int) -1526196702)))))));
                            arr_78 [i_11] [i_19] [i_24] [i_11] [i_24] = ((/* implicit */unsigned short) ((long long int) arr_41 [i_11] [i_11] [(short)4] [i_24]));
                            arr_79 [i_11] [i_11] = ((/* implicit */int) ((unsigned int) arr_42 [i_20 - 1] [i_20 + 3] [i_20 - 1] [i_20 - 1]));
                            var_42 = ((/* implicit */long long int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32751))))))));
                        }
                    }
                } 
            } 
            arr_80 [i_11] = (+(((/* implicit */int) (signed char)58)));
        }
        var_43 = ((/* implicit */signed char) (+(((/* implicit */int) arr_36 [i_11]))));
        arr_81 [9LL] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)55))));
    }
    for (signed char i_25 = 0; i_25 < 18; i_25 += 3) 
    {
        var_44 = ((/* implicit */short) var_5);
        var_45 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])) && (((/* implicit */_Bool) arr_23 [i_25] [16LL] [i_25])))))));
    }
}
