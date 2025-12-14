/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69393
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */int) ((((/* implicit */int) arr_3 [8])) <= (((/* implicit */int) arr_3 [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) 4488532029629079043LL)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_3 [i_0]))));
                                var_18 = ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_7 [i_1] [(signed char)23] [i_3]) : (((/* implicit */unsigned long long int) arr_6 [i_3])))), (((/* implicit */unsigned long long int) arr_4 [i_0])))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [(unsigned char)14] [i_3] [2U] [i_2] [(unsigned short)14] [i_1] [(unsigned short)12])) % (((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0])))))))) && (((/* implicit */_Bool) var_6))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                            {
                                arr_15 [i_5] [i_5] [(unsigned short)18] [i_5] [i_0] &= ((/* implicit */unsigned int) var_14);
                                arr_16 [i_5] [i_5] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [20ULL] [i_1] [i_2] [i_0] [i_5] [i_3])))))));
                            }
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)14]))));
                            var_21 = ((/* implicit */unsigned char) var_10);
                            arr_17 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_13 [i_0] [i_1] [i_1] [i_2] [i_1]), (arr_13 [i_1] [i_2] [i_1] [(unsigned char)7] [i_1])))) / (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_1]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) var_4);
                /* LoopNest 2 */
                for (unsigned char i_6 = 3; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((int) (signed char)119));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_7]))));
                            arr_23 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_6 - 2] [i_1] [i_6] [i_7] [i_0])) | ((-(((/* implicit */int) arr_10 [i_7] [i_1] [i_1] [i_0] [i_0]))))));
                            arr_24 [i_1] = ((/* implicit */unsigned int) max(((~(arr_12 [i_7] [i_6] [i_1] [i_1] [14U]))), (((/* implicit */int) (signed char)-108))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned short) arr_12 [(signed char)22] [i_1] [(short)3] [i_9] [i_9]);
                                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)24658))));
                                arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_31 [i_10 - 3] [i_10 + 1]);
                                var_27 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_0] [i_10 - 3]))));
                                var_28 -= ((/* implicit */short) arr_29 [i_10] [i_8] [i_8] [8ULL]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-105))));
                    arr_33 [i_8] &= ((/* implicit */unsigned long long int) ((arr_0 [i_1]) & (((/* implicit */unsigned int) var_11))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            {
                                arr_38 [i_8] [i_11] [i_1] = ((/* implicit */long long int) var_3);
                                arr_39 [i_12] [i_1] [(unsigned char)14] [i_8] [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) ((unsigned char) arr_25 [5LL] [i_12])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            {
                var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_4 [i_13])), (max((arr_37 [i_14] [i_14] [i_14]), (((/* implicit */unsigned long long int) arr_4 [i_13]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    var_31 *= ((/* implicit */signed char) ((var_3) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_13] [i_14])) * (((/* implicit */int) arr_3 [i_15])))))));
                    var_32 = ((/* implicit */unsigned long long int) (signed char)-58);
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_28 [i_13] [i_14] [i_15] [i_15] [i_13] [i_13]))), (max((((/* implicit */unsigned int) arr_26 [i_13])), (arr_8 [i_14])))))) ? (((/* implicit */unsigned long long int) min((arr_6 [i_15]), (arr_6 [i_13])))) : (var_2)));
                }
            }
        } 
    } 
    var_34 |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((int) var_15))) * (((unsigned int) var_3)))) << (((((/* implicit */int) var_13)) - (15396)))));
    var_35 *= ((/* implicit */_Bool) max((var_6), (var_10)));
}
