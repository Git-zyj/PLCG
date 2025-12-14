/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56436
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51710)))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) arr_4 [15ULL]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_15 = var_13;
                            var_16 = ((/* implicit */_Bool) max((var_16), ((_Bool)1)));
                            var_17 += ((/* implicit */long long int) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_18 -= ((/* implicit */short) ((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)9886)) : (((/* implicit */int) var_7)))) >> (((((((/* implicit */unsigned long long int) var_1)) | (var_12))) - (13816565779383779238ULL)))))) ^ (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (var_11)))) ^ (((((/* implicit */long long int) arr_11 [i_0] [i_1])) & (arr_9 [i_1] [(_Bool)1])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((6911395101879852066ULL), (11535348971829699550ULL)));
                    var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_8) & (((/* implicit */long long int) -441265636)))) & (var_8))))));
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1]))))), (min((((/* implicit */int) var_13)), (arr_2 [i_0])))));
                    arr_15 [20LL] [i_1] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned int) arr_11 [i_0] [17ULL])), (var_6))))) & (((/* implicit */unsigned int) ((((var_13) ? (((/* implicit */int) arr_13 [i_4] [i_1] [i_0])) : (((/* implicit */int) var_13)))) + (arr_2 [i_0]))))));
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) arr_8 [i_0] [i_5])) : (((arr_1 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_5]))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((var_1) - (var_8))), (((/* implicit */long long int) arr_4 [i_0])))))));
                                arr_22 [i_0] [i_6] [i_0] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) arr_20 [i_0] [i_0] [16LL] [16LL] [i_5] [i_6 - 1] [(_Bool)1])), (((((/* implicit */int) arr_16 [i_5] [i_6 + 2] [i_6 - 3] [i_6 - 3])) << (((min((var_12), (((/* implicit */unsigned long long int) var_2)))) - (11880ULL)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    arr_25 [i_0] [i_8] [3] [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65512)) || ((_Bool)1)));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 18; i_9 += 4) 
                    {
                        arr_29 [i_0] [i_8] [i_8] [i_9 - 2] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_9)))) : (arr_11 [i_9 - 3] [i_9 - 2])))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]))) || (((/* implicit */_Bool) ((arr_1 [i_8]) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1ULL))))))))));
                    }
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 441265640)) ? (0U) : (((/* implicit */unsigned int) -441265636))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((unsigned int) var_2)) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (var_12)));
    var_26 = var_7;
}
