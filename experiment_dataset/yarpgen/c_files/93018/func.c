/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93018
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (0ULL))), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) (short)-4052);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (((-(var_3))) & (((/* implicit */unsigned long long int) ((arr_4 [(_Bool)1] [i_1]) ? (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) arr_12 [i_4] [i_1])) : (var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            arr_14 [i_0] [i_1] [(short)1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (short)-1);
                            var_17 = ((/* implicit */int) arr_1 [i_2]);
                        }
                    } 
                } 
            } 
            arr_15 [i_1] [i_1] [(unsigned short)3] = ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned int i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_11 [i_0] [i_0] [i_5])))), (min((((/* implicit */int) (_Bool)0)), (-22)))))) ? (min((3968872512U), (min((((/* implicit */unsigned int) arr_7 [i_0])), (10U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (short)14155)))))))));
                var_19 += ((/* implicit */int) ((unsigned int) (_Bool)1));
                arr_23 [(short)4] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [i_5 - 2] [i_5]) ? (15074306098911852547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 1] [i_6 + 1]))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) != ((-(((/* implicit */int) (signed char)-1))))))), (((((/* implicit */_Bool) arr_6 [i_0] [4LL] [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_0] [i_0] [8]), ((unsigned char)231))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_5 - 1] [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775806LL)) : (var_3))))))))));
            }
            for (long long int i_7 = 2; i_7 < 12; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 2; i_8 < 12; i_8 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) (signed char)-15);
                    arr_28 [i_5] [i_5 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_21 [i_8 - 2] [11] [9ULL] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(unsigned short)4] [(unsigned char)2])))))))) ? ((-(max((0U), (3636078570U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-1772077838), (((/* implicit */int) (signed char)86)))))))))));
                }
                for (long long int i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (_Bool)1))) & ((~((-(var_13))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        arr_36 [i_5] [(signed char)5] [i_7] [(signed char)5] [i_5] = ((/* implicit */long long int) (unsigned char)14);
                        arr_37 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (arr_30 [i_0] [i_10] [i_9] [i_7] [i_0] [i_0])))) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10] [i_10 + 1] [i_10 - 3] [i_10 - 1])))));
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-119))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_41 [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_34 [i_0] [i_5] [i_5] [i_7] [i_9] [i_5])) : (((/* implicit */int) arr_19 [i_5] [i_5 - 2] [i_5]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (0) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_12 [i_11] [i_7 - 2])) : (((/* implicit */int) (_Bool)0))))) : (1462119660U))) : (2345754570U)));
                        arr_42 [i_5] [i_5 - 1] [i_7] [i_9] [i_5] [i_5 - 1] [9] = ((/* implicit */int) ((unsigned int) ((10ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                        arr_43 [i_5] [(signed char)4] [i_5] [i_9] [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned short)47430), (((/* implicit */unsigned short) (short)32751))))), (min((((/* implicit */long long int) arr_31 [i_11] [i_5] [i_7] [i_5] [i_0])), (-234604756457060452LL)))))) ? (((/* implicit */int) (signed char)63)) : (max((((((((/* implicit */int) (signed char)-3)) + (2147483647))) << (((33554431LL) - (33554431LL))))), (((/* implicit */int) (short)21847))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((18446744073709551615ULL), (17239986882281010060ULL))), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5]))))) ? (arr_29 [i_9 - 2] [i_9 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-94)), ((unsigned char)43)))) ? (((/* implicit */int) arr_31 [i_0] [i_5] [i_0] [i_5] [i_0])) : (-886695195))))));
                        var_25 = ((/* implicit */unsigned short) ((12998850012696889442ULL) ^ (1401300422753635248ULL)));
                    }
                }
                arr_44 [i_5] [i_5] [i_7] = ((/* implicit */long long int) (short)32767);
                var_26 = min((var_12), (max((((/* implicit */unsigned int) arr_16 [0LL] [i_7])), (max((arr_20 [i_0] [i_0] [(signed char)5]), (((/* implicit */unsigned int) var_9)))))));
            }
            arr_45 [i_5] [5U] = ((/* implicit */short) arr_4 [i_0] [i_5]);
        }
        arr_46 [i_0] [12ULL] = ((/* implicit */unsigned int) (signed char)-24);
    }
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        arr_49 [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) arr_48 [i_12]))), (min((arr_47 [i_12] [i_12]), (((/* implicit */short) (unsigned char)41)))))))));
        arr_50 [i_12] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)59161)) ? (((/* implicit */long long int) ((/* implicit */int) ((14151336845288547780ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) (signed char)91)) ? (1563381330714144164LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_5)), (var_2))))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 14; i_13 += 1) 
        {
            for (short i_14 = 1; i_14 < 16; i_14 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_55 [i_13 - 2] [(unsigned short)6] [i_14 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))));
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */short) var_11);
                            arr_60 [i_12] [i_13 - 1] [i_12] [i_13 - 3] [i_16] [i_12] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned int) var_5)), (1151315353U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) arr_47 [i_12] [i_15]))))))))));
                            arr_61 [i_12] [i_12] [i_12] [i_15] [i_15] [13U] [i_16] = ((/* implicit */signed char) -1577083586);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_12] [i_13 - 1]))) | (((((/* implicit */_Bool) 13650806512250306222ULL)) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-3832))) | (-8189405162192077108LL)))))));
                        }
                        arr_62 [i_15] [8U] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */long long int) (short)32765);
                        var_30 += ((/* implicit */unsigned long long int) (signed char)68);
                        arr_63 [i_12] [i_12] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)9699)) == (((/* implicit */int) arr_47 [i_15] [i_15])))))) - ((~(arr_58 [i_12] [i_13] [i_13 - 1] [i_13] [i_13 - 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13153265528477138231ULL)) ? (2642931720U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 16; i_17 += 1) 
                    {
                        arr_67 [i_12] = (~(arr_55 [i_13] [i_14] [i_17 + 1]));
                        var_31 = (-(((/* implicit */int) ((_Bool) arr_57 [i_12] [i_13 + 1] [i_13]))));
                        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12]))) : (3ULL)));
                    }
                    var_33 &= (((!(arr_53 [i_12] [i_14 + 1] [i_12]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_12] [i_12] [i_13]))) : (((6332924762166294075ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_12] [i_13] [i_13 - 1]))))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((4294967270U), (((/* implicit */unsigned int) var_4))))), (min((((/* implicit */unsigned long long int) (short)21030)), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)14938)) : (((/* implicit */int) (unsigned char)204))))) ? (((/* implicit */unsigned int) (-(-1165422582)))) : (min((1282790954U), (691601021U))))))));
}
