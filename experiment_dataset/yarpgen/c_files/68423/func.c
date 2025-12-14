/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68423
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_4 [i_1])) & (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)121)))))), (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483644)), (arr_9 [i_3] [(signed char)13] [(signed char)16] [i_3 + 2])))) ? (((unsigned long long int) (_Bool)1)) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3 - 1])) ? (arr_9 [i_3 + 1] [i_3] [7ULL] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) == (max((((/* implicit */unsigned long long int) var_12)), (arr_9 [i_3 - 2] [i_2] [i_0] [i_0])))))) >= (((int) (signed char)-3))));
                            var_22 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 + 2])) ? (arr_9 [i_3 + 1] [i_3] [i_3 + 1] [i_3]) : (arr_9 [i_3 - 2] [i_3] [i_3 + 1] [i_3 + 1]))), (((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((((/* implicit */_Bool) 25165824)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1]))))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) var_15)))))))));
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) max((((/* implicit */int) arr_8 [i_0] [i_1])), (var_12))))) * (((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)2)) : (134217727))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */_Bool) min((0), (var_5)));
}
