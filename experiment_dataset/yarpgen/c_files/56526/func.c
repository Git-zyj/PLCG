/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56526
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-80)) * (((/* implicit */int) (signed char)-38))))) : ((-(var_11))))) % (((/* implicit */long long int) ((/* implicit */int) (signed char)69)))));
                                var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_4 + 2] [9LL] [i_4 - 1] [(signed char)0]) | (var_1)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_10 [i_2] [i_4 + 3] [i_4] [i_4 - 1] [(signed char)6]) : (arr_10 [i_1] [i_4 - 1] [i_4] [i_4 + 2] [i_4]))) : (arr_12 [i_2] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 1] [i_4])));
                                var_14 |= (signed char)35;
                                var_15 &= ((/* implicit */signed char) (+(((/* implicit */int) max((arr_13 [i_0] [i_0] [i_4 + 3]), (var_9))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) ((signed char) 1152921504606846976ULL));
                    var_17 = arr_8 [i_0] [i_1] [i_2];
                    var_18 = ((/* implicit */long long int) 9179454876400095011ULL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(min((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_6)))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_5 - 2])) ? (((/* implicit */unsigned long long int) arr_20 [i_5 + 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_5] [i_5]))) : (var_2)))));
                var_21 = ((/* implicit */signed char) var_10);
                var_22 = (signed char)(-127 - 1);
                arr_21 [i_5] = var_10;
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)115))));
}
