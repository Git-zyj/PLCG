/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70918
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [(signed char)15] [(signed char)15]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_0 + 3])) : (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (3916632155711244750ULL)))));
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_7 [i_2] [i_1] [i_0 + 3])))))));
                }
            } 
        } 
        var_14 &= ((/* implicit */unsigned long long int) ((short) ((signed char) 2039356824937336607ULL)));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (short)-12637))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) (short)8556);
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122)))))) != (arr_14 [i_4]))) ? (((/* implicit */unsigned long long int) ((arr_16 [i_4] [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_13 [i_4]))))))))) : (min((((((/* implicit */_Bool) (short)8556)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (18446744073709551599ULL))), (max((((/* implicit */unsigned long long int) var_9)), (var_5)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7 - 1] [i_3] [i_5] [i_3 + 1])) + (((/* implicit */int) arr_12 [i_3] [i_4 - 2] [i_3]))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) % (max((5ULL), (2039356824937336607ULL))))))))));
                                var_19 = ((/* implicit */short) 8774137183637450162ULL);
                                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)34)) || (((/* implicit */_Bool) (~((-(arr_15 [i_6] [i_3] [i_3]))))))));
                                arr_23 [i_4] [i_6 + 1] [i_5] [(short)22] [i_4] = max(((signed char)68), ((signed char)-112));
                                var_21 = (-(15679320545573065896ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */short) var_11);
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((short) 2039356824937336615ULL)))))))))));
}
