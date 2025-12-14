/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79103
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) 4294967295U)))), (((arr_0 [i_0]) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((4259245992401104024ULL), (((/* implicit */unsigned long long int) 645068259)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6U])) ? (((/* implicit */unsigned long long int) arr_2 [(signed char)12])) : (var_16)))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -704340240)))))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) var_14);
                    arr_10 [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */signed char) (((_Bool)1) ? (arr_4 [3U] [3U]) : (max((((/* implicit */int) var_9)), (704340240)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_0]))) : (((((/* implicit */_Bool) 1474471670U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2554432075806198640ULL))))))));
                                var_21 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) (!((_Bool)0))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) -645068259)) : (arr_6 [i_4])))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)31)))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_18 [i_7]))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_24 [i_6 - 2] [15ULL] [i_6 + 2])), (1314448997)))) ? ((+(((/* implicit */int) arr_24 [i_5] [i_5] [i_6 + 2])))) : ((+(((/* implicit */int) arr_23 [i_5] [i_6] [i_6 + 2] [i_6 + 2])))))))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 1])) ? (arr_19 [i_6 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 2])))))) ? (((((/* implicit */_Bool) arr_20 [i_6 - 2] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) : (arr_19 [i_6 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 - 1]))))))));
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */_Bool) var_8);
    var_28 ^= ((/* implicit */_Bool) var_2);
}
