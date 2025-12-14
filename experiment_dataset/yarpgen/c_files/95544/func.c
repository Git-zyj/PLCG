/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95544
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) -5493330211700276632LL))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [4LL] [i_0 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5493330211700276616LL)) ? (134217727U) : (4160749568U)))) ? (min((arr_2 [6ULL]), (arr_2 [(signed char)16]))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [(signed char)22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_15 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((var_1) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)16]))))) : (var_4)))));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))), (((var_6) ? (((/* implicit */unsigned long long int) var_10)) : (arr_2 [i_0])))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0]), (var_6)))))));
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) 9223372036854775807LL);
                            arr_17 [(_Bool)1] [i_1] [i_2 + 3] [i_0] [(signed char)17] [i_1] [5ULL] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5493330211700276616LL)) ? (((/* implicit */long long int) var_10)) : (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_3])))), (arr_16 [i_0 - 1] [17U] [7LL] [13U] [i_0 - 1]));
                            var_17 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((4450321958753534979LL) ^ (((((var_5) + (9223372036854775807LL))) << (((/* implicit */int) var_1))))))), ((+(1125899906842112ULL)))));
                            var_18 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((arr_0 [(_Bool)1]) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (signed char)-40))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (5493330211700276621LL)))) >= (max((17705657212423347180ULL), (var_2))))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_3] [(signed char)22] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4 + 1]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (var_5))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((arr_0 [(unsigned char)18]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6LL]))))))));
            var_21 = ((/* implicit */signed char) ((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        }
    }
}
