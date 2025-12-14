/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69216
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
    var_16 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
    var_17 |= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) -559833301)) ? (var_8) : (((/* implicit */unsigned long long int) -559833301))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_18 += ((((/* implicit */_Bool) 534039443)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) min((-2029335127), (arr_4 [i_1])))) ? ((~(arr_0 [i_0 + 1] [i_0 - 2]))) : (((/* implicit */long long int) arr_6 [i_1 - 1] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_3 [i_3] [i_3]);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_1 + 3])) | (arr_2 [i_0 - 3] [i_1 + 3])))) || (((/* implicit */_Bool) min((((/* implicit */int) (short)32755)), (arr_1 [i_0 - 2] [i_1 + 2])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)0)), ((+(6878064704515571142LL)))));
                    var_22 = arr_0 [i_1] [i_0];
                }
                for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */short) var_15);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_1] [i_6] [15ULL] [i_1 + 2]))), (arr_5 [i_0] [i_0] [i_6])))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) 67108863U))))) ? ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) -559833301)))) : (((/* implicit */unsigned long long int) -1069615001)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 3] [i_1] [i_0 - 3] [i_6])))))));
                    var_25 ^= ((/* implicit */unsigned short) arr_1 [21LL] [i_1 - 1]);
                    var_26 *= ((/* implicit */short) (unsigned short)64148);
                }
                arr_19 [i_0 - 2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (((+(4227858432U))) != (((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_1 + 1]))))) == (min(((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), ((+(var_4)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) | ((~(((/* implicit */int) (short)-32756))))))) ? (var_8) : (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))))));
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_12))));
}
