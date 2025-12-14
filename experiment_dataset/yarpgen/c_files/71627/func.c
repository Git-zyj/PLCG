/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71627
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
    var_14 = ((/* implicit */signed char) var_13);
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((long long int) var_6)) <= (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))), (((unsigned int) var_6))));
    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_2)) >> (((max((var_1), (var_12))) + (1982050273648388888LL))))), (((((/* implicit */int) var_6)) >> (((((var_3) & (((/* implicit */long long int) 1819890566U)))) - (1214857844LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned short)2302)))), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_1) & (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                    arr_10 [i_0] [i_2] [9] [i_0] = ((/* implicit */long long int) (~(var_11)));
                    arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) var_13))))) : (((/* implicit */int) (unsigned short)63236))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))));
                    arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2484884420U)) && (((/* implicit */_Bool) 1982613269U))));
                    var_18 = ((/* implicit */signed char) var_0);
                    var_19 = ((/* implicit */unsigned short) ((short) 1819890552U));
                }
            }
        } 
    } 
}
