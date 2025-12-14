/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92170
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (max((((((/* implicit */_Bool) 0ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)36353))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */int) (signed char)62)) % (((/* implicit */int) var_3))))))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 - 1])), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (1681903808506797873ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))) / (arr_3 [i_0] [i_0] [i_0 + 1])))))))));
                var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-79))))) ? (arr_4 [i_0] [i_1]) : (max((arr_4 [i_0 + 3] [i_1]), (arr_4 [i_0] [i_0])))))));
                var_20 = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            {
                arr_10 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-112))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_12))))) % (((unsigned long long int) arr_8 [i_2] [i_3]))))));
                arr_11 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3])) || (((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3]))))))))), (((((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) + (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_13)))))))));
            }
        } 
    } 
}
