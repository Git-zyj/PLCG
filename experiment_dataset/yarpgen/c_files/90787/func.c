/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90787
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
    var_16 = (!(((/* implicit */_Bool) var_5)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_3 [i_1 + 2]))));
                var_18 *= ((((/* implicit */unsigned long long int) 0U)) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551606ULL))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [(signed char)11] [i_2] [i_1] [(signed char)11])) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)-1))))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)255)))))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 3])) != (((/* implicit */int) (_Bool)1))))) % (((/* implicit */int) (short)30927))));
                            arr_11 [i_0] [i_0] [i_1] [9U] [i_0] [i_3] = ((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_0]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) 4294967275U)) : (arr_9 [i_1] [i_1 - 1] [i_1] [i_1 + 3]))) / ((-(arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 4] [i_1 + 2]))))))));
            }
        } 
    } 
}
