/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57192
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (2634370414U)))) ? (var_7) : (min((var_5), (((/* implicit */int) (unsigned char)4)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (_Bool)0);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */short) (unsigned char)148);
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
            arr_8 [i_0] [i_1] = ((/* implicit */short) var_13);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_3] [i_0] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_15 [16ULL] [i_0] [16ULL] [i_0] [16ULL] [i_4] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_13))))) ? (((min((14759301687082274259ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [11] [i_2])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_13 [i_0] [i_3] [i_2] [i_0] [(unsigned char)4] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_13 [i_0] [20LL] [i_3 - 1] [3ULL] [i_4] [(_Bool)1]))))))));
                            var_16 += ((/* implicit */unsigned long long int) var_8);
                            arr_18 [i_0] [i_0] [i_2] [i_3] [(unsigned short)18] [i_0] = min((((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_11 [i_0] [(short)2] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_0] [4ULL] [i_0]), (((/* implicit */short) arr_13 [i_0] [i_1] [i_1] [1ULL] [1ULL] [i_3 + 1])))))) : (min((arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (18ULL))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])), (max((((/* implicit */unsigned long long int) var_8)), (arr_14 [i_0] [i_0] [i_4] [i_3 + 1] [i_4] [i_2]))))), (((((/* implicit */_Bool) arr_15 [i_4] [i_1] [i_3] [14ULL] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0]))) : (arr_10 [i_0])))) : (((arr_4 [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_3] [i_3] [i_0] [i_4] [i_1]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_16 [i_0]), (arr_16 [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(signed char)9])) ? (((/* implicit */int) var_1)) : (arr_16 [i_0]))))));
            var_19 = ((/* implicit */int) ((((min((((/* implicit */long long int) (_Bool)1)), (arr_9 [i_0] [i_0] [i_0]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) -6895684578502667258LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_5 [i_5] [i_0])))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (4794420191045261600ULL))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0]))))))) : (4794420191045261581ULL)));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) 
            {
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((3981757245388516584LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))) - (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_11 [i_6] [i_5] [i_0] [i_0])))))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_31 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(unsigned char)6] [i_5] [(unsigned char)6] [(short)10])) << (((((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_0])) - (9932)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(unsigned char)6] [i_5] [(unsigned char)6] [(short)10])) << (((((((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_0])) - (9932))) + (23490))))));
                    arr_32 [i_0] [i_5] [i_5] [i_5] [i_0] [9U] = ((/* implicit */int) arr_14 [i_6] [i_7] [i_6] [i_6] [i_5] [16ULL]);
                }
                for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_36 [i_8] [i_0] [11] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [16LL] [i_0] [i_0]))) : (arr_14 [17LL] [17LL] [17LL] [i_8] [i_5] [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [12] [i_5] [12])) ? (arr_34 [i_0] [i_0]) : (arr_1 [i_0]))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8] [i_6 + 1] [i_6 - 3])) ? (arr_33 [i_6 + 1] [i_8] [i_6 + 1] [i_6 - 2] [i_6 - 2]) : (arr_33 [i_6 - 1] [i_6 - 1] [i_8] [i_6 - 1] [i_6 - 2]))))));
                }
                for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    arr_40 [i_0] [i_6] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_27 [i_0] [i_0] [i_0] [i_0] [i_6]) / (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) -6)) : (((((/* implicit */_Bool) -7203509890901965347LL)) ? (8277758422828850439LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_41 [i_9] [i_0] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((14880264684369412855ULL) & (arr_27 [i_9] [i_0] [i_5] [i_0] [(signed char)12])))) ? (((/* implicit */unsigned long long int) arr_39 [i_9] [i_6] [i_5] [i_0])) : (arr_19 [i_0] [i_6 + 2])));
                }
            }
            for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    arr_47 [i_0] [i_5] [i_0] [i_11] [i_10 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_1)), (arr_45 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((arr_16 [i_0]) <= (var_7))))))) && (((/* implicit */_Bool) arr_44 [i_0]))));
                    arr_48 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [7U] [7U])) ? (((/* implicit */long long int) arr_34 [i_0] [i_0])) : (arr_15 [i_0] [i_0] [i_10 - 1] [i_10 - 1] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0] [i_5] [i_0]) : (var_12)))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_12)) : (var_9)))))) ? (((((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_10] [i_11] [i_11])) ? (min((arr_33 [(unsigned short)15] [i_10] [i_5] [22ULL] [i_0]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) ^ (arr_24 [i_0] [i_5] [i_11])))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_3)), (var_5))) / (arr_44 [i_0]))))));
                }
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((1017472299U) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_12] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_0] [i_0]))))) : (min((arr_19 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13))))))) ? (arr_20 [(short)10] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30050))) : (1919510348U)))) ? (min((arr_1 [i_0]), (((/* implicit */int) arr_3 [22ULL] [i_12] [i_10])))) : (((((/* implicit */_Bool) 7041705149073114322LL)) ? (((/* implicit */int) arr_50 [i_12] [i_5] [7ULL] [i_5] [7ULL])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                    arr_52 [i_0] = ((/* implicit */int) ((((((var_9) & (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (1919510356U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))) - (((/* implicit */unsigned long long int) ((min((arr_11 [i_0] [i_5] [i_10] [i_10]), (arr_13 [i_12] [i_10] [i_5] [i_5] [i_0] [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-32760))) - (-2086881209146913884LL))) : (((((/* implicit */long long int) 3516989706U)) / (var_6))))))));
                }
                var_22 = ((/* implicit */unsigned short) var_7);
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                arr_55 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_27 [i_0] [i_5] [4LL] [i_0] [i_5]) / (arr_20 [i_5] [i_0])))) ? (((((/* implicit */_Bool) arr_49 [i_0] [(unsigned char)3] [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_5]))) : (arr_25 [i_0] [i_0]))) : (arr_9 [i_0] [i_5] [i_0])));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_13] [i_13] [i_5] [i_0])) ? (((/* implicit */int) var_14)) : (arr_39 [i_13] [i_0] [i_13] [i_5])));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 4) 
                    {
                        {
                            arr_62 [(_Bool)1] [(_Bool)1] [i_13] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_15 - 1] [i_15 - 1] [i_13] [i_13] [i_15 - 1])) ? (arr_33 [i_15 + 1] [i_5] [i_14] [i_14] [i_15 + 1]) : (arr_33 [i_15 + 4] [15] [15] [i_14] [15])));
                            arr_63 [i_0] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_13] [i_13] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (arr_45 [i_14] [i_0] [i_0] [i_0]) : (arr_29 [i_0] [i_0] [i_13] [i_14] [i_15 + 3]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 2255321204U)) : (arr_9 [i_0] [i_13] [i_0])))));
                            arr_64 [i_15] [i_0] [i_13] [i_0] [(unsigned short)13] = ((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_13] [i_14]);
                            arr_65 [i_0] [i_0] [i_5] [i_14] [i_15 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-19927)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_43 [i_0] [12] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_15] [i_13] [i_5])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_39 [i_13] [i_5] [i_13] [i_0]) % (((/* implicit */int) (_Bool)1))))) >= (var_9)));
            }
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                arr_69 [i_0] [i_16] [(_Bool)1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [0U] [i_5] [i_5] [i_0] [i_0])) ? (arr_5 [i_5] [i_0]) : (((arr_37 [i_0] [i_0] [i_0] [i_5]) ? (arr_38 [i_0] [i_0] [i_16]) : (((/* implicit */long long int) arr_39 [i_0] [i_16] [i_0] [i_0]))))));
                arr_70 [i_0] [i_0] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_5] [i_16] [i_0] [i_5] [i_0])) ? (var_5) : (((/* implicit */int) ((9820254049787230581ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                arr_71 [16ULL] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((((arr_9 [i_0] [(unsigned short)20] [i_0]) + (9223372036854775807LL))) << (((((var_4) + (3318034414259037557LL))) - (41LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned char)174)))))))) : (((((((((arr_9 [i_0] [(unsigned short)20] [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((var_4) + (3318034414259037557LL))) - (41LL))) - (1LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned char)174))))))));
                var_25 = ((/* implicit */int) var_13);
            }
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19379)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) max((((/* implicit */short) arr_59 [i_0] [i_0] [i_0] [i_0])), (arr_53 [(unsigned short)0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) arr_43 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2])) : (min((max((18158513697557839872ULL), (((/* implicit */unsigned long long int) arr_9 [8U] [0] [8U])))), (((/* implicit */unsigned long long int) var_11))))))));
            var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((arr_14 [i_5] [i_5] [14ULL] [i_5] [i_5] [i_5]), (3566479389340138758ULL)))) ? (min((((/* implicit */unsigned long long int) var_10)), (9392022020528166659ULL))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_0] [13U] [i_0] [(short)19] [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) -1751333713)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [17ULL] [i_5] [i_5] [i_5] [i_5])) & (min((arr_35 [i_0] [(short)9] [i_0] [i_5] [i_0]), (((/* implicit */int) var_0)))))))));
        }
        var_28 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [6U] [i_0] [4ULL])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned char)6])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -49274185)) ? (var_7) : (((/* implicit */int) (unsigned char)25))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_53 [i_0] [(short)13] [(unsigned char)14] [i_0]))))))));
    }
    var_29 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)561)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 6389308954592299162LL)) : (var_2)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((short)-29538), (((/* implicit */short) (_Bool)1))))))))));
    var_30 = ((/* implicit */long long int) var_1);
}
