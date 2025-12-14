/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83196
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
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */int) ((634883468) < (((/* implicit */int) (unsigned short)65527))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [(signed char)6] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [i_1])))))) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_3 [i_0] [(signed char)6])) : (((/* implicit */int) arr_9 [9ULL] [9ULL] [i_0] [i_0]))))))));
                    var_20 = ((/* implicit */unsigned char) 9223372036854775795LL);
                }
                var_21 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)6))))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_8 [i_1] [i_0]))))) ? (((/* implicit */int) ((-9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) : (max((((((/* implicit */int) var_15)) / (((/* implicit */int) (unsigned char)242)))), (((/* implicit */int) max((arr_7 [(_Bool)1] [(_Bool)1]), (arr_6 [i_1] [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_22 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (((var_11) - (((/* implicit */long long int) ((unsigned int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((arr_8 [i_1] [i_3]), (((/* implicit */unsigned long long int) arr_1 [i_1])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                    arr_15 [(signed char)7] [i_1] [(unsigned char)0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [1LL] [i_0])), (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned long long int) -860148207)) : (arr_8 [7U] [i_0])))))) ? (((((((/* implicit */int) var_4)) < (((/* implicit */int) arr_14 [i_0] [i_1] [i_3 - 1])))) ? (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [3ULL] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (1349366341) : (((/* implicit */int) (_Bool)1)))))) : (min((((/* implicit */int) arr_7 [(signed char)7] [i_1])), (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)117)) : (1349366341)))))));
                }
            }
        } 
    } 
    var_23 = var_17;
    var_24 ^= ((/* implicit */_Bool) var_2);
    var_25 = ((/* implicit */signed char) var_2);
}
