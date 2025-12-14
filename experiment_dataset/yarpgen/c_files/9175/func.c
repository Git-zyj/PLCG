/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9175
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
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (signed char)-1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_2 [(unsigned short)0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((var_12), (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) (signed char)-7))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((min((((/* implicit */int) arr_1 [i_0 + 2])), (var_12))) + (((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) var_0)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 5252111331997545959LL))) ? (((/* implicit */long long int) 268173312)) : (((((/* implicit */_Bool) 18126090446142724279ULL)) ? (65535LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_0] [10U] [i_3] [i_0 + 1] |= var_3;
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 - 1]))))), ((~(var_13))))))));
                                var_19 = ((/* implicit */short) var_14);
                                arr_14 [i_0] [(unsigned char)20] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
