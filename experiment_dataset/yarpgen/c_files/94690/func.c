/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94690
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
    var_20 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (short)23213)))))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [10] = ((/* implicit */long long int) var_9);
                            arr_11 [23ULL] [i_1] [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [16LL] [i_1] [i_2] [(signed char)9])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) | (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((~(2018560364))) : (((/* implicit */int) arr_7 [i_2] [i_1])))) : (((/* implicit */int) arr_0 [17]))));
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2018560369), (2018560337)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (((((arr_6 [i_0] [(unsigned short)9] [i_0] [0]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_7 [3LL] [22ULL])) + (32653))) - (34))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [(signed char)16] [4LL] [(signed char)14] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_2]))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    arr_16 [i_0] &= ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0 + 1] [i_0] [12LL]))));
                    arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2018560391) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_14 [i_5] [i_5] [i_5]))) >= (((/* implicit */int) ((signed char) arr_4 [i_0] [(signed char)15] [i_1] [i_5]))))))));
                    arr_20 [6] [i_1] [20U] = ((/* implicit */short) 2018560368);
                    var_23 = ((/* implicit */signed char) -2018560365);
                    var_24 = ((((/* implicit */_Bool) (signed char)-114)) ? (((var_0) << (((/* implicit */int) arr_15 [i_0 - 1] [i_5] [(short)2])))) : (((/* implicit */int) arr_18 [i_0 + 1])));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    arr_23 [(short)4] [(signed char)11] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0]))));
                    var_25 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_14 [i_6] [i_0 + 3] [(_Bool)1]))))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */short) var_6);
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_9] [(short)22] [i_7] [i_1] [15LL] [(signed char)22])) || (((/* implicit */_Bool) ((arr_21 [i_0 + 1] [i_1] [(short)7]) % (arr_21 [i_0 - 2] [(unsigned short)22] [23LL]))))));
                                arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_1] [i_7] [18LL] [i_8] [i_9])) ? (arr_21 [i_0] [(short)8] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (signed char)94))))))))) ? (max((((unsigned int) (signed char)-92)), (((/* implicit */unsigned int) arr_25 [i_0] [(short)8] [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_18 [i_0 + 3])) >> (((arr_21 [(unsigned short)15] [(short)6] [i_7]) - (4767981417608489118LL))))) < (((/* implicit */int) arr_15 [i_0] [i_7] [(unsigned short)14]))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -2018560369)) < (arr_3 [i_0 + 1] [i_1] [i_7]))))));
                    var_29 = max((arr_19 [i_0] [1LL] [i_0 + 3] [(_Bool)1]), (((/* implicit */unsigned short) min((arr_27 [i_0 - 2] [i_0] [i_0 + 3] [i_0 - 1]), (arr_27 [i_0] [i_0 + 2] [i_0 + 3] [i_0])))));
                    var_30 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_0 [i_0 + 3])), ((~(((/* implicit */int) (signed char)114))))))));
                    arr_31 [i_7] [i_1] [i_7] = min((((/* implicit */long long int) arr_15 [i_0] [i_7] [(unsigned short)2])), ((~(-963387750718419046LL))));
                }
                var_31 = ((/* implicit */long long int) 0);
                arr_32 [(short)19] = ((/* implicit */int) ((-963387750718419046LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
            }
        } 
    } 
}
