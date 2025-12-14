/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62395
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_2 [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_6 [i_2 + 3] [i_2 - 1] [i_2 + 3])), (arr_8 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1]))), (((((/* implicit */int) (_Bool)1)) / (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 1]))))))));
                        arr_10 [i_2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) - (((/* implicit */int) arr_6 [i_0] [i_3] [i_2]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))) != (((/* implicit */int) (_Bool)1))));
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)));
                }
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_0] [i_1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) >= (((/* implicit */int) (!((_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_4] [i_4] [i_6] [i_4] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                                var_19 -= ((/* implicit */unsigned long long int) max((arr_16 [i_0] [i_1] [i_4]), (arr_16 [i_6] [i_0] [i_4])));
                                arr_20 [i_5] [i_5] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((short) -2819837507319645665LL));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((int) max(((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))), (((/* implicit */unsigned int) arr_9 [i_0] [i_0]))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        var_21 -= ((/* implicit */_Bool) (+(((arr_15 [i_0] [i_1] [i_7] [i_8]) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (_Bool)0))))));
                        var_22 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9575))) : (11393774630956315512ULL)));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_26 [i_0] [i_1] [i_7] [i_7] [i_1] [i_7])));
                        var_24 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_7] [i_8]);
                    }
                    for (unsigned short i_9 = 3; i_9 < 13; i_9 += 4) /* same iter space */
                    {
                        arr_29 [i_9] [i_1] = ((/* implicit */unsigned short) max((((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_9]))) : (8451092749391913405LL))), (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)0)))))))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(min((max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_7] [i_9])), (-1LL))), (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_7] [i_9])) ? (((/* implicit */long long int) 1265448513)) : (arr_13 [i_0] [i_1] [i_7] [i_9]))))))))));
                        arr_30 [i_9] [i_1] [i_1] = ((/* implicit */_Bool) 2097151U);
                    }
                    for (unsigned short i_10 = 3; i_10 < 13; i_10 += 4) /* same iter space */
                    {
                        arr_35 [i_7] [i_10] [i_0] = ((/* implicit */unsigned long long int) 1023LL);
                        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) min((4398111764847108062LL), (((/* implicit */long long int) (unsigned char)220))))) : (11471678855264757381ULL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-8734214464736250964LL)))) : (min((((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) (_Bool)1))))))));
                        arr_36 [i_10] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) -1024LL)) ? (((/* implicit */int) max((arr_3 [i_0] [i_0]), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_10] [i_0])) || ((_Bool)1))))))));
                        var_27 = (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) (_Bool)1)), (-7815298837334690127LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_7])) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned short i_11 = 3; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        var_28 = min((((/* implicit */int) arr_21 [i_0] [i_1] [i_7])), ((-(((/* implicit */int) ((_Bool) (short)8948))))));
                        var_29 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_11 + 1] [i_11] [i_11 + 1]))));
                        var_30 = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
                        arr_39 [i_0] [i_11] [i_7] [i_11] [i_7] = ((/* implicit */unsigned int) (~(max((1318677919), (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_40 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_0] [i_7])) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) ((short) (_Bool)1)))))));
                }
                arr_41 [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) arr_38 [i_0] [i_0] [i_1] [i_1])), (6212163746709521916LL)))));
            }
        } 
    } 
    var_31 *= ((/* implicit */_Bool) 3978493456U);
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        for (unsigned short i_13 = 1; i_13 < 13; i_13 += 2) 
        {
            {
                arr_48 [i_12] [i_13] = ((/* implicit */unsigned char) ((max((-818840315), (arr_8 [i_13 + 1] [i_13] [i_13] [i_13 + 2]))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (580138744U)))))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (316473840U)))))));
                            /* LoopSeq 2 */
                            for (int i_16 = 0; i_16 < 15; i_16 += 4) 
                            {
                                var_33 = ((/* implicit */_Bool) min((max((6975065218444794255ULL), (11471678855264757373ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_34 = ((/* implicit */long long int) 316473847U);
                            }
                            for (int i_17 = 0; i_17 < 15; i_17 += 4) 
                            {
                                arr_60 [i_12] [i_15] [i_14] [i_13] [i_12] [i_12] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_55 [i_12] [i_13] [i_13] [i_15])) : (((/* implicit */int) (_Bool)1))))) ? (max((-1028726663), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_14 [i_12] [i_12] [i_12] [i_12])) * (((/* implicit */int) (_Bool)1)))))));
                                var_35 = max((-1), (((int) arr_43 [i_15 + 2])));
                                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((signed char) ((signed char) min((arr_44 [i_15]), ((_Bool)0))))))));
                            }
                            arr_61 [i_12] [i_13] [i_12] [i_14] [i_15] = ((/* implicit */int) 6975065218444794243ULL);
                            var_37 = ((/* implicit */unsigned long long int) (unsigned short)31284);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    var_38 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_47 [i_12] [i_12] [i_12]))))));
                    arr_65 [i_18] [i_13] [i_18] [i_18] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_13 - 1] [i_13 + 2] [i_13 - 1] [i_13 + 1])) : (((/* implicit */int) ((_Bool) -1)))));
                }
            }
        } 
    } 
    var_39 &= ((/* implicit */_Bool) var_14);
}
