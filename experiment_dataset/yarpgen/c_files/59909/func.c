/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59909
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
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_7)))))));
                    arr_9 [i_1] [2] |= ((/* implicit */long long int) 1106580479);
                    arr_10 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(_Bool)1])))))))) <= (min((((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) var_8))))), (((var_2) ? (var_10) : (((/* implicit */int) arr_2 [i_0]))))))));
                    var_13 *= ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_4 [6LL] [i_1] [(_Bool)1])) <= (((/* implicit */int) (short)29953)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_0])))))) : (((arr_3 [i_0] [i_0]) * (1646770860U))))) >= ((((_Bool)1) ? (3018205587U) : (((/* implicit */unsigned int) 1106580479))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_10);
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 24; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) var_11);
                        arr_26 [i_7] |= ((/* implicit */unsigned long long int) ((-1106580475) <= (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_29 [i_3] [i_4] [(_Bool)1] [i_6] [i_8] = ((/* implicit */unsigned int) ((((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [5LL] [(signed char)16]))))) > (((((/* implicit */_Bool) arr_22 [i_3] [i_4 + 1] [i_5] [7LL] [i_8])) ? (((/* implicit */long long int) 4294967295U)) : (arr_25 [8LL] [8LL] [8LL] [(unsigned char)4] [13LL] [i_6] [(short)3])))));
                        var_17 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))))));
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3 - 1] [i_3] [(signed char)22] [i_3] [23]))))) <= ((+(arr_16 [i_3 + 1] [i_4 + 1])))));
                        arr_30 [i_4] [i_4] [i_4] [(signed char)18] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= ((+(13867580980386469994ULL)))));
                        var_19 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (1646770835U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))));
                    }
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_10))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (arr_24 [14U] [i_4] [14U] [i_4] [i_4] [i_4 + 1] [14U])))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) arr_25 [i_3] [i_4] [(unsigned short)4] [i_3] [i_4] [i_3] [i_3]);
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 2] [i_3 - 2]))) <= (((((/* implicit */_Bool) var_10)) ? (arr_24 [(_Bool)1] [(_Bool)1] [i_4 - 1] [(_Bool)1] [i_5] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    var_23 = ((/* implicit */unsigned short) (+(arr_23 [i_9] [i_9] [(unsigned char)10] [i_9] [i_4 - 1] [i_4 - 1])));
                    var_24 = ((/* implicit */long long int) var_11);
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) arr_19 [i_3] [i_3] [i_5]);
                    arr_37 [18U] [i_4] = ((/* implicit */unsigned int) arr_27 [i_3] [2LL] [i_4 + 1] [(_Bool)1] [i_5] [i_5] [i_3]);
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    arr_40 [i_3] [i_4] [i_5] [i_11] [i_5] [(signed char)22] = ((/* implicit */short) arr_17 [i_3 - 1] [i_3 + 1]);
                    arr_41 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 4294967295U);
                    var_26 = ((/* implicit */unsigned int) -231311623);
                    var_27 = ((/* implicit */unsigned long long int) ((signed char) ((min((var_10), (((/* implicit */int) arr_13 [i_3] [i_3 - 2])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [(unsigned char)24] [1U] [4]))))))));
                    arr_42 [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_9)), (arr_20 [i_3] [(_Bool)1] [i_5] [i_11])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0))))))))) : (arr_25 [i_3 - 2] [i_3] [22U] [22U] [i_3 - 1] [i_3] [i_3])));
                }
                var_28 ^= arr_32 [i_5] [i_4] [16];
                var_29 = ((/* implicit */unsigned short) min((var_29), (max((max((((/* implicit */unsigned short) (short)-32744)), (arr_31 [i_3] [i_3] [i_3] [i_4] [i_5] [i_5]))), (max((arr_31 [i_3] [i_3 - 2] [i_4 - 1] [i_5] [i_5] [i_5]), (arr_31 [i_3 - 1] [i_4 + 1] [i_5] [i_4] [i_3 + 1] [i_5])))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_12] [i_12])))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) <= (arr_18 [(unsigned char)13] [(unsigned char)18])))))))));
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_38 [i_3 + 1] [i_3 + 1] [i_3]))));
            }
            for (int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
            {
                arr_49 [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) ((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3 + 1] [i_3] [i_4] [i_4 - 1] [i_3 + 1] [i_3 + 1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_7))))))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            arr_55 [i_3] [i_3] [i_3] [i_3] [i_14] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_31 [i_3] [i_4] [i_13] [i_14] [i_15] [i_15]), (((/* implicit */unsigned short) arr_13 [i_3 - 1] [i_3 - 1]))))) ? (min((((/* implicit */long long int) var_0)), (4294967295LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [(unsigned short)14] [13] [i_13] [19U])))))) ? (((/* implicit */long long int) min((((((/* implicit */int) var_3)) * (-1106580479))), (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2)))))))) : (max((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) 13U)), (var_8)))))));
                            arr_56 [(unsigned short)12] [(short)20] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1646770835U)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (short)22037)))) : (((/* implicit */int) (_Bool)1))))) * (((unsigned int) (+(var_5))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_44 [i_3 - 2]), (((/* implicit */unsigned int) arr_31 [3] [i_4] [3] [i_4] [(short)1] [0])))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_3 + 1] [i_3] [i_3 - 1])), (var_7))))))))) * (min((arr_33 [i_4] [i_13] [i_14] [i_15]), (((/* implicit */unsigned long long int) arr_47 [i_3]))))));
                            var_33 |= ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) arr_44 [(short)6])) && (((/* implicit */_Bool) arr_27 [i_3] [i_3] [4] [4] [i_13] [i_3] [i_15])))) ? (((/* implicit */int) arr_38 [i_4] [(short)4] [i_14])) : (arr_16 [7U] [i_14]))));
                        }
                    } 
                } 
                var_34 += ((/* implicit */signed char) ((arr_16 [i_13] [i_3 - 1]) / (((/* implicit */int) arr_15 [i_3] [(short)0]))));
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                arr_59 [i_3] = ((/* implicit */short) ((((/* implicit */int) ((short) var_9))) >= (((/* implicit */int) arr_50 [i_3 - 2]))));
                var_35 = ((/* implicit */unsigned char) max((var_35), (arr_51 [i_3] [i_3] [i_16] [(_Bool)1] [i_4])));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((12582912U) <= (2874934197U)))) & (((((/* implicit */int) (unsigned short)15647)) * (((/* implicit */int) arr_22 [(short)8] [(unsigned char)6] [(short)8] [i_3] [(short)8]))))));
                /* LoopSeq 1 */
                for (unsigned int i_17 = 3; i_17 < 21; i_17 += 4) 
                {
                    var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_3 + 1] [i_3] [i_3 + 1])) / (((/* implicit */int) var_2))))) ? (arr_25 [19ULL] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1] [11LL]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_58 [7U] [i_16] [i_16]))))))));
                    arr_64 [15U] [i_16] [i_16] = ((/* implicit */_Bool) var_1);
                }
                /* LoopSeq 4 */
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_50 [i_4]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_3] [i_4] [i_16] [i_3])))))) ? (arr_34 [i_3 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) <= (((/* implicit */int) arr_12 [i_3]))))))));
                    var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-81)) && (((/* implicit */_Bool) 204399641834931566LL))));
                    var_40 = ((/* implicit */unsigned int) var_6);
                    arr_67 [i_3] [i_16] [i_3] [i_16] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_58 [i_18] [3LL] [i_4])) ? (arr_54 [i_3] [(short)5] [5] [5] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_3] [17ULL] [14LL] [17ULL] [i_3])))))));
                }
                for (unsigned short i_19 = 1; i_19 < 23; i_19 += 1) 
                {
                    var_41 ^= ((/* implicit */unsigned long long int) ((((arr_53 [0U] [(short)9] [i_3] [i_4 - 1] [i_16] [i_19] [7LL]) > (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_58 [12U] [6LL] [i_16]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_36 [19] [i_16] [19] [i_19])))) : (((/* implicit */int) arr_35 [i_4 + 1] [i_4 + 1] [i_4])))))));
                }
                for (unsigned int i_20 = 3; i_20 < 24; i_20 += 1) 
                {
                    var_43 &= ((/* implicit */unsigned short) var_4);
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_34 [i_4] [16]) / (((/* implicit */long long int) arr_53 [i_3] [i_3] [i_16] [6ULL] [i_20] [i_3] [(short)19]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_3])))))));
                }
                for (unsigned int i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    arr_76 [19] [19] [19] [i_4] [(unsigned char)1] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) -1106580478)) && (((/* implicit */_Bool) (unsigned char)67))));
                    var_45 = ((((7104762231074360409LL) / (((/* implicit */long long int) arr_23 [i_21] [i_3] [i_4] [i_4] [i_3] [i_3])))) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11)))));
                    arr_77 [i_3] [i_3] [i_4] [i_4] [i_16] [i_21] = ((/* implicit */long long int) ((arr_47 [i_3 + 1]) > (arr_47 [(_Bool)1])));
                    var_46 *= ((_Bool) arr_61 [i_16] [i_3 + 1]);
                }
            }
            var_47 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_48 [i_3 - 2] [i_3 - 1] [i_4 + 1] [i_4 + 1])))) ? (((/* implicit */int) min((arr_48 [i_3 + 1] [i_3 - 1] [i_4 - 1] [i_4]), (arr_48 [i_3 - 2] [i_3 - 1] [i_4 - 1] [i_3 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_3 + 1] [i_3 - 1] [i_4 - 1] [i_4])) && (((/* implicit */_Bool) arr_48 [i_3 - 2] [i_3 - 1] [i_4 - 1] [i_4])))))));
            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((-1314618757) / (-1221999199)))), (arr_24 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_3 - 2] [i_3] [16] [16]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_4]))))) > (((int) (signed char)31)))))))))));
        }
        arr_78 [i_3] [i_3] = ((/* implicit */unsigned short) arr_38 [i_3] [i_3] [i_3]);
    }
}
