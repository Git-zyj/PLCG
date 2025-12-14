/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75864
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
    var_10 = ((/* implicit */long long int) var_3);
    var_11 = ((/* implicit */short) 523264);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
                {
                    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (((/* implicit */int) arr_3 [i_0 - 3]))))) ? (((/* implicit */int) max(((short)-1799), (((/* implicit */short) arr_3 [i_0 - 2]))))) : (((/* implicit */int) arr_3 [i_0 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        arr_10 [9LL] [i_1] = ((/* implicit */signed char) 0);
                        var_13 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [(unsigned char)0] [i_3])))), (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (unsigned short)16560)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_7 [i_0 - 3] [i_1])) * (((/* implicit */int) arr_5 [i_0]))))));
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(var_9))))) * (((((/* implicit */_Bool) arr_12 [i_0])) ? (-6616597507365374917LL) : (((/* implicit */long long int) 327956098))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */long long int) (short)25875)), (max((arr_2 [i_4 + 3]), (((/* implicit */long long int) var_0))))))));
                            var_15 = ((/* implicit */long long int) arr_0 [i_0]);
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_4 [(short)4] [(short)4]))));
                        }
                        for (int i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_1] = ((_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3 - 1]))));
                            var_17 ^= ((/* implicit */_Bool) var_5);
                        }
                        for (int i_6 = 2; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) (signed char)-15)) ? (9024093817817513604LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (3191632570U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))))))))))));
                            var_19 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11742)) ? (arr_2 [i_2]) : (((/* implicit */long long int) 31U))))) && (((((/* implicit */_Bool) -2985664809459780369LL)) && (((9536790755927268LL) >= (((/* implicit */long long int) 31U)))))));
                            var_20 += ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_3 [i_3])))), (((((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_5 [(_Bool)1])) - (103))))) % (((/* implicit */int) arr_0 [i_0]))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_3 - 1] [i_1] [i_1] [i_3 - 1] [i_6 + 1] [i_3 - 1]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_3)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)27)) && (((/* implicit */_Bool) (signed char)89))))));
                            arr_24 [i_0] [(unsigned char)5] [i_3] [i_1] [5U] = ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1] [i_7]);
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_28 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(1649690465)));
                        var_22 = ((/* implicit */signed char) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) max((arr_21 [i_0 - 4] [i_1] [i_2] [14U] [18LL]), (arr_15 [i_0] [i_1] [i_2] [20] [i_8])))) : (((/* implicit */int) min((((/* implicit */short) var_5)), (var_4))))))));
                    }
                }
                for (int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (((!(arr_18 [i_9] [i_1] [i_9] [i_1] [i_1]))) && (((/* implicit */_Bool) arr_3 [i_0 - 2]))))) * (((/* implicit */int) arr_21 [i_9] [i_1] [i_9] [i_0] [i_9]))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_2)), (arr_31 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) && (((((/* implicit */int) var_1)) > (((/* implicit */int) arr_31 [i_1]))))))) : (min(((-(((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) 33521664U)))))))));
                    arr_32 [i_0] [i_1] = ((/* implicit */short) arr_25 [i_0] [(_Bool)1] [i_9]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [(unsigned char)2] [(short)14] [(short)14] [i_0] &= ((/* implicit */unsigned short) ((signed char) arr_27 [i_0 - 3] [i_0 - 1] [i_0 - 4] [i_0 + 1]));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((_Bool) (unsigned char)225)))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 4) 
                    {
                        arr_39 [i_0] [(unsigned char)7] [i_1] [i_11 + 2] = max((((/* implicit */int) ((unsigned char) ((arr_22 [i_1] [i_1] [i_1] [15] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), ((+(((/* implicit */int) arr_26 [i_1] [i_11 + 3])))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((7163193690900707353LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31061)))))))));
                        arr_40 [i_0] [i_1] [(_Bool)1] [i_11 - 3] [i_0 - 2] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_41 [i_0] [i_1] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((arr_22 [i_1] [i_1] [10] [(signed char)9] [i_11]) | (((/* implicit */unsigned int) 79146881)))))) ? (((var_9) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_15 [i_11] [i_11 + 4] [20LL] [i_11] [i_11])))) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_9] [i_0] [i_9]))));
                        arr_42 [i_0] [i_1] [i_1] [(short)2] = ((/* implicit */short) ((arr_13 [i_0] [18LL] [i_0] [i_0 - 3] [i_1] [i_9] [i_11 - 2]) ? (((/* implicit */int) arr_13 [i_0] [(signed char)7] [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_11 - 1])) : (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [(_Bool)1] [i_0 - 3] [i_1] [i_9] [i_11 - 2])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_1] [i_11] [i_11 + 3]))))));
                    }
                    arr_43 [i_1] [i_1] [i_9] = 339953250;
                }
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    var_27 = ((min((((/* implicit */int) arr_5 [i_0 - 3])), (var_8))) > (max((((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_1] [i_0 - 2] [i_0])), ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_12])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 3) 
                    {
                        for (short i_14 = 1; i_14 < 22; i_14 += 3) 
                        {
                            {
                                arr_52 [i_14 + 1] [i_1] [(short)10] [i_12] [i_12] [i_1] [(signed char)4] = ((/* implicit */_Bool) ((((1918552256) != (((/* implicit */int) (short)-9399)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_13 - 2] [i_13 - 2] [i_13] [i_13 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (arr_33 [i_13 + 1] [(unsigned short)8] [i_13 + 2] [i_13 + 3])))));
                                var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_0 + 1] [i_0 + 1] [i_1] [i_13 - 1] [i_14])))) ? (((/* implicit */int) ((_Bool) arr_44 [i_1] [i_1] [i_13]))) : (((((/* implicit */_Bool) arr_48 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 1; i_15 < 22; i_15 += 3) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_29 = ((((var_9) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-2811)) || (((/* implicit */_Bool) (short)127)))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [(unsigned short)15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1] [i_1] [i_12] [i_0] [i_1] [i_12]))) : (arr_11 [i_0] [i_1] [i_12] [i_15 + 1] [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)1386)))) == (((((/* implicit */_Bool) var_8)) ? (var_8) : (-590944841))))))));
                                arr_58 [i_0] [i_1] [i_0] [i_15] [17U] [i_1] [i_15] = arr_56 [i_0] [i_0] [i_0] [i_12] [i_15 + 1] [i_1];
                            }
                        } 
                    } 
                }
                arr_59 [i_1] = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
}
