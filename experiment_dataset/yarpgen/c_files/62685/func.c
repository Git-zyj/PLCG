/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62685
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
    var_14 = ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_0))), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((5315876293242943620LL) > ((-9223372036854775807LL - 1LL))))) > (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_10))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_0] [i_0] [i_0 + 2] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 2])))));
                            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((arr_2 [i_2] [11ULL]) & (max((((/* implicit */unsigned long long int) arr_4 [6LL])), (arr_2 [i_2] [i_0 + 2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_0 + 2])))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0 + 4]);
                                arr_15 [i_3] [i_3] [12U] [i_2] [i_2] [i_1] [i_0 + 4] = ((/* implicit */long long int) arr_3 [i_0] [13U]);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)0] [i_3 + 1] [i_3 + 1]))) != (arr_8 [i_1 + 2] [i_4] [i_4] [i_4] [i_4 + 1])));
                            }
                            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)26567), (arr_11 [i_5] [i_5] [i_5] [7U] [i_5] [i_5 + 1] [i_1 + 2])))) - (((((/* implicit */int) arr_11 [2LL] [0ULL] [i_5] [i_5] [i_5] [i_5 + 3] [i_1 - 1])) / (((/* implicit */int) arr_11 [3U] [i_5] [i_5 - 2] [i_5] [5U] [i_5 - 2] [i_1 + 2]))))));
                                arr_20 [i_1 - 2] [i_1] [i_2] [i_3 - 4] [i_5] = arr_18 [(signed char)9] [0LL] [i_1 + 2] [0LL] [i_3] [i_5];
                            }
                            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                arr_23 [10LL] [i_6] [i_2] [i_2] [(_Bool)1] [i_6] [i_0 + 2] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0] [(unsigned char)13] [i_0])))))) / (min((arr_8 [i_0] [i_1 - 1] [(unsigned char)2] [13ULL] [i_6]), (((/* implicit */long long int) arr_0 [i_6])))))), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_7 [i_2] [i_3] [i_6])), (arr_19 [i_6] [i_3 + 1] [i_2] [i_1 - 2] [i_0]))) << (((((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2] [i_0 + 1] [i_3 - 4] [i_1 + 2] [i_1 - 2])) - (25798))))))));
                                arr_24 [i_6] [i_2] [i_2] [i_3] [(signed char)10] = ((/* implicit */signed char) min((((arr_2 [i_0 + 2] [i_1 - 2]) & (arr_2 [i_0 + 4] [i_1 + 1]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1] [i_1 + 2]) != (arr_2 [i_0 + 4] [i_1 + 2]))))));
                                arr_25 [i_0] [i_6] [i_6] [i_3] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_6 [i_3 - 2] [i_0 + 3] [i_1 - 2] [(unsigned char)8])) | (((/* implicit */int) arr_6 [i_3 - 3] [i_0 + 2] [i_1 + 1] [i_3 - 3])))), (((/* implicit */int) arr_6 [i_3 - 2] [i_0 + 1] [i_1 + 2] [i_1 + 2]))));
                            }
                            arr_26 [15U] [15U] [i_1] [i_2] [(short)14] = ((/* implicit */unsigned int) arr_17 [i_0 + 2] [i_1] [i_1] [8LL] [i_3 - 1]);
                            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_11 [i_0 + 1] [(signed char)8] [i_0 + 1] [i_0] [(unsigned short)1] [(signed char)8] [(unsigned char)4]), (((/* implicit */unsigned short) min((arr_3 [i_0 + 2] [i_0 + 2]), (arr_17 [i_1 - 2] [6] [6U] [i_1] [13U]))))))), (arr_19 [i_0] [i_0] [i_0 + 3] [(unsigned short)4] [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_30 [i_1 + 2] [i_8 + 1] [12LL])) | (((/* implicit */int) arr_30 [i_1 + 2] [i_8 + 1] [i_8])))) >= (((/* implicit */int) ((arr_16 [5ULL] [i_0 + 1] [i_8 + 1] [5ULL] [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_8 + 1] [i_8] [i_8 + 1] [i_7] [i_8 + 1])) == (arr_22 [i_8 + 1] [(unsigned short)11] [i_1] [(short)13]))))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_8])) ^ (((/* implicit */int) arr_3 [(short)1] [(short)1]))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [(unsigned char)10] [i_0] [i_0] [i_0] [i_0]))) & (arr_31 [8U] [8U] [i_7] [i_8])))), (((arr_22 [i_0] [i_1] [i_0] [i_8 - 2]) & (arr_22 [(unsigned char)8] [i_7] [i_0] [i_0])))))));
                            var_21 = max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0 + 3] [i_8 + 1] [8U])), (((arr_22 [i_8] [i_8] [i_7] [i_0 + 3]) ^ (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0 + 3] [i_8 + 1] [(unsigned short)6])))));
                            var_22 = arr_0 [i_7];
                            arr_33 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) ^ (((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [(unsigned char)11] [(unsigned short)3] [i_7])) / (((13489471735109040224ULL) * (((/* implicit */unsigned long long int) 934085879))))))));
                        }
                    } 
                } 
                var_23 = max((max((min((((/* implicit */unsigned int) arr_32 [i_0])), (arr_18 [(_Bool)1] [i_0 + 1] [i_0] [(short)5] [i_0 + 1] [i_0]))), (((/* implicit */unsigned int) max((arr_30 [i_0] [i_1 - 2] [i_0]), (arr_7 [10ULL] [i_0] [(signed char)4])))))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 1542766130251417937LL)), (arr_27 [i_1 + 1] [5U] [i_0] [15LL]))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) >> (((-4195441400367607056LL) + (4195441400367607069LL))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_11);
}
