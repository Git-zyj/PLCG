/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7071
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_0])) ? (6658071981944094334ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155)))))) ? (arr_3 [i_1 + 4]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)155), (((/* implicit */unsigned char) arr_5 [1U] [i_1] [i_2])))))))), (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) & (var_2))), ((~(var_2)))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            arr_16 [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 3] [i_1] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1 + 3] [i_2] [i_4]);
                            arr_17 [i_0] [i_1] [(unsigned short)2] [i_1] [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((6806870197345940286ULL) == (((/* implicit */unsigned long long int) arr_11 [i_1 - 2] [i_1 + 1] [i_4 + 1])))))) - (min((((((/* implicit */_Bool) (unsigned short)1024)) ? (arr_9 [1LL] [i_1] [1LL] [(unsigned char)6]) : (((/* implicit */long long int) 3841816974U)))), (min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_3])))))));
                            var_12 ^= ((/* implicit */unsigned char) var_8);
                            var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)248)), (arr_7 [i_1])));
                        }
                        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_1 + 2])) ? (max((arr_6 [i_1 + 2] [i_3] [i_5]), (arr_6 [(short)3] [i_1] [(unsigned char)0]))) : (11788672091765457283ULL)))) ? (max((arr_2 [i_1 + 2]), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_0 [i_2])))))));
                            arr_22 [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                            var_15 = ((/* implicit */short) arr_2 [i_0]);
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((6658071981944094358ULL) >> (((6658071981944094345ULL) - (6658071981944094299ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [10])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [(short)10] [i_3] [i_5])) : (((/* implicit */int) arr_21 [i_0] [i_5] [6LL] [i_3] [8U])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_3] [i_2] [i_3] [i_0]))) : (((((/* implicit */_Bool) ((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))))) ? (6658071981944094332ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_3])))))))));
                        }
                        arr_23 [(_Bool)1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) (unsigned char)135));
                        var_17 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((11788672091765457281ULL), (((/* implicit */unsigned long long int) (signed char)127)))))))), (((unsigned short) (~(4064ULL))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) max((70368744177663LL), (((/* implicit */long long int) arr_14 [i_2] [i_1] [i_1] [i_6]))));
                                var_19 = ((/* implicit */long long int) arr_2 [(signed char)4]);
                                var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7 + 2])) ? (var_0) : (arr_2 [i_0]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1 + 4] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 - 2]))))) | (9223372036854775807LL))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_2);
}
