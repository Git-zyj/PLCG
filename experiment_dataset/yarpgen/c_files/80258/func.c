/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80258
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
    var_16 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)14))))) * ((-(16067223428274510649ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_1] [i_2 - 1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_1 [i_0 + 3] [i_2 - 1]))))));
                    arr_8 [(unsigned char)8] [i_1] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) var_10)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 2])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 3])) ? (arr_2 [i_0 - 3] [i_0 + 3]) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0 + 1] [i_0 + 3]) > (var_14))))))))));
                                arr_13 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */unsigned long long int) arr_3 [12] [12])) : (arr_5 [i_0 + 1] [i_0 + 1] [i_2] [i_3])))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned short)4616)) - (((/* implicit */int) var_3))))))) != ((-(arr_9 [i_0 + 1] [i_4])))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((int) ((arr_11 [i_0 + 2] [i_2 - 2] [i_2 + 1]) <= (arr_11 [i_0 - 1] [i_2 - 2] [i_2 - 2]))));
                }
                for (int i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    arr_18 [10ULL] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(var_14))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-125)))))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 3] [i_5 + 1])) ? (((unsigned long long int) arr_16 [(unsigned short)3] [i_1] [i_1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_12))))) : (((/* implicit */unsigned long long int) min(((-(var_13))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) arr_16 [(short)4] [i_1] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (int i_7 = 4; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (unsigned short)30285)), (var_14)))))) ? (max((arr_22 [i_6] [i_7 - 4] [i_6] [i_6] [5] [i_7 + 2]), (((((/* implicit */_Bool) arr_11 [i_7] [i_5 + 1] [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))) : ((-(((/* implicit */int) arr_16 [i_0] [i_1] [i_1]))))));
                                var_20 = ((/* implicit */short) ((var_13) ^ (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 1; i_8 < 16; i_8 += 3) /* same iter space */
                {
                    arr_28 [i_8] [i_1] [i_0] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_0 - 3])) ? (arr_17 [i_0 + 2]) : (arr_17 [i_0 + 2]))) ^ (((arr_22 [i_1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1]) ^ (((/* implicit */int) arr_1 [i_0] [i_8 + 1]))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_10 [i_8 - 1]), (arr_10 [i_8 + 1])))) + (((((/* implicit */int) arr_10 [i_8 + 1])) << (((((/* implicit */int) arr_10 [i_8 + 1])) - (9870)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        arr_32 [i_8] [i_1] = ((/* implicit */unsigned long long int) (((~(arr_12 [i_0 - 3] [i_0 + 3] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_9 + 2]))) << (((((arr_12 [i_0 - 1] [i_0 - 2] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 + 1]) | (var_14))) - (4285134197U)))));
                        arr_33 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))) ^ (((((/* implicit */_Bool) (unsigned short)8836)) ? (max((((/* implicit */long long int) var_11)), (-7890037199358400338LL))) : (((/* implicit */long long int) arr_17 [i_8 + 1]))))));
                        var_22 = ((/* implicit */unsigned char) (+((-(arr_9 [i_8 - 1] [i_0 - 1])))));
                        var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_8] [i_8] [i_8 - 1] [(unsigned char)1])) + (((/* implicit */int) arr_14 [i_8] [(signed char)0] [i_8 - 1] [16]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_8 - 1] [i_8 - 1]))) | (var_9)))));
                    }
                }
                var_24 = (-(((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_16 [i_0 + 3] [i_1] [i_0 - 1])))));
                arr_34 [i_0 - 2] [i_0] [i_0 - 3] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_2)) % (((/* implicit */int) (signed char)64)))) % (arr_22 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_3 [i_0] [i_1])))));
                var_25 = ((/* implicit */signed char) var_12);
                var_26 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) - (arr_12 [i_0] [i_0 - 3] [i_0 - 1] [(signed char)16] [i_1] [i_1])))) ? (min((arr_31 [i_0] [i_1] [i_1] [i_1] [i_0 + 2]), (((/* implicit */long long int) arr_10 [i_0])))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0])))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1))))))) && ((_Bool)1)));
}
