/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60927
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_20 = ((/* implicit */int) ((((((arr_3 [i_0] [i_1] [i_0]) << (((arr_2 [i_0]) - (2104404482240108286ULL))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(short)6] [i_2] [i_2]))) >= (arr_1 [i_0])))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) * (var_16)))) && (((/* implicit */_Bool) ((var_9) % (var_8)))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (short)5030))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2]))) : (arr_8 [i_0] [i_3 - 1])))))));
                        var_21 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) arr_8 [i_1] [i_3 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (-4912025273984908161LL)))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) (+(((unsigned long long int) arr_7 [i_4 - 1] [i_2] [i_0]))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(arr_3 [16ULL] [16ULL] [16ULL])))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_0] [i_1] [i_4 - 1]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_4])) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (arr_6 [i_0]))))))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) var_4)))))))) == ((+(((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4] [i_4]))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (arr_0 [i_0])));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_5] [i_5] [i_0] = ((/* implicit */long long int) arr_10 [i_0]);
                        var_26 = ((/* implicit */unsigned char) var_15);
                    }
                }
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    var_27 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_6 + 1] [i_6] [(_Bool)1] [i_1] [i_0] [i_0])), (var_11)))) && (((/* implicit */_Bool) var_5))))), (((((arr_8 [i_0] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_4 [i_0]))))));
                    var_28 = ((/* implicit */unsigned long long int) ((9223372036854775807LL) >= (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    var_29 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_0)))), (((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    var_30 = ((/* implicit */unsigned short) arr_13 [i_6] [i_6] [i_1] [13ULL] [i_0] [12]);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (arr_14 [9U] [9U] [i_6] [i_6 - 1])))) == (((/* implicit */int) arr_9 [i_6] [i_0] [i_0] [i_0] [i_0]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 4; i_7 < 16; i_7 += 4) 
                {
                    for (int i_8 = 4; i_8 < 17; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                            {
                                arr_28 [i_9] [i_8] [i_7 - 3] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) min((((arr_6 [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((arr_6 [i_7]) - (arr_2 [9]))))));
                                var_32 -= ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9]);
                            }
                            var_33 = ((/* implicit */short) (unsigned short)5446);
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(arr_6 [i_0]))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) max((var_35), (((((((/* implicit */_Bool) var_1)) ? (4816881489848276007LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)69))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57576)))))));
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) var_19))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_9)))) | (((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))))))));
    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (var_16))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) & (var_9)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */long long int) arr_31 [i_11] [i_11])) / (arr_29 [7ULL] [i_11]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_10 + 2] [i_10] [i_10] [i_10 + 3] [i_10] [i_10 + 1])) * (((/* implicit */int) var_5))))))))));
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            arr_39 [i_12] [i_11] [i_12] [i_13] [(short)5] [i_14] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((((/* implicit */int) arr_15 [i_10 + 2] [i_10] [i_12 + 1] [i_13] [i_14] [i_10])) != (((/* implicit */int) var_7)))))));
                            var_39 = (-(min((((/* implicit */unsigned long long int) arr_26 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1])), (var_9))));
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4394435165940837441LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                            arr_40 [i_10 + 2] [i_12] [i_10] [i_13] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_32 [i_10 + 3] [i_10])) != (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)20689)) - (20674))))))))));
                            var_41 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_35 [i_10] [i_12] [(unsigned char)6] [i_10 + 1] [(_Bool)1])) : (((/* implicit */int) arr_35 [i_10] [i_12] [i_10] [i_10 + 2] [i_14]))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_10 + 2] [i_10 + 1] [i_10 + 2])) : (((/* implicit */int) var_15))))), (max((arr_29 [(unsigned short)0] [i_15]), (((/* implicit */long long int) arr_19 [i_10]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15] [i_10])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) arr_34 [(unsigned short)0] [i_10] [(unsigned short)0])) ? (arr_3 [i_10] [i_10] [i_10]) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_36 [i_10] [i_10 + 2] [i_10 + 2] [i_10])))) : (((/* implicit */int) ((unsigned char) (unsigned short)60089)))));
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_10 + 2] [i_10 + 2] [i_10 - 1])) ? (min((((/* implicit */int) var_0)), (arr_3 [i_10 + 2] [i_10 + 2] [i_10 - 1]))) : (min((arr_3 [i_10 + 2] [i_10 + 2] [i_10 - 1]), (arr_3 [i_10 + 2] [i_10 + 2] [i_10 - 1])))));
            arr_45 [i_10] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_16) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((((/* implicit */_Bool) 1906072577U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_6))))))));
        }
        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            arr_49 [i_10] [i_16] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) var_17)) * (((((-4690753838017151749LL) >= (((/* implicit */long long int) ((/* implicit */int) var_15))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_36 [i_10] [i_16] [i_10] [i_16])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min(((unsigned short)5442), (((/* implicit */unsigned short) (short)15)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        {
                            arr_57 [i_16] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-7881)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_10 + 2] [i_10] [i_10] [i_10 + 2] [i_10 + 3]))) : (var_11))));
                            var_44 -= var_17;
                            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
        {
            var_46 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((min((arr_7 [14LL] [i_20] [i_10]), (((/* implicit */unsigned int) var_6)))), (3461893333U)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 17514823114425110560ULL)) ? (arr_6 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10 + 3]))))) : (arr_46 [i_10 + 3] [i_10 + 2] [i_10 + 3])))));
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (min((((/* implicit */long long int) arr_51 [i_10] [i_10] [i_10 - 1] [i_10 + 3])), (((((/* implicit */_Bool) arr_59 [i_10] [i_10 + 2] [i_10 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(signed char)4] [(signed char)4] [i_20] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2]))) : (arr_29 [i_10] [i_20])))))));
            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) - (min((arr_27 [i_10 + 1] [i_10 + 1] [i_10] [7LL] [i_20]), (((/* implicit */unsigned long long int) var_18)))))))));
            var_49 = ((/* implicit */int) (~(18U)));
        }
        arr_61 [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_10 + 1])) || (((/* implicit */_Bool) arr_2 [i_10 + 2]))))) <= (((/* implicit */int) ((arr_20 [i_10 + 3] [i_10 + 3] [i_10 + 3]) && (((/* implicit */_Bool) arr_2 [i_10 - 1])))))));
        var_50 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-32766)) < (((/* implicit */int) var_18))));
        var_51 = ((/* implicit */long long int) min(((signed char)24), (((/* implicit */signed char) arr_9 [i_10 + 3] [i_10 + 1] [i_10] [i_10 + 2] [i_10 + 2]))));
        var_52 &= ((/* implicit */signed char) ((((/* implicit */int) var_1)) != ((((_Bool)1) ? (((((/* implicit */int) (short)32751)) << (((((/* implicit */int) var_15)) - (7499))))) : (((/* implicit */int) (_Bool)0))))));
    }
    for (short i_21 = 0; i_21 < 18; i_21 += 1) 
    {
        var_53 |= ((/* implicit */signed char) (_Bool)1);
        arr_64 [(signed char)17] = ((/* implicit */unsigned long long int) ((arr_20 [6ULL] [i_21] [i_21]) ? ((+(((/* implicit */int) arr_26 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_20 [i_21] [i_21] [i_21]))))));
        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((long long int) (unsigned char)58)) < (((/* implicit */long long int) ((/* implicit */int) var_18)))))) != (((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_9 [i_21] [i_21] [i_21] [i_21] [i_21])))))));
    }
}
