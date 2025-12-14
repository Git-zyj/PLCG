/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/887
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = -1359921372;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2 + 1] [i_2] [i_1] [i_2 + 1] [i_2] [i_0] = ((/* implicit */_Bool) 0);
                            var_17 = ((/* implicit */int) ((min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) > (var_3)))), (-1359921372))) == (((/* implicit */int) (!(var_1))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_8 [0] [i_1] [i_2 - 1] [(short)5] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned long long int) max((min((var_4), (max((((/* implicit */long long int) 0)), (8191LL))))), (((/* implicit */long long int) (unsigned short)46152))));
    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) 10335249745660795240ULL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned short)39456), (((/* implicit */unsigned short) (_Bool)0))))), (((int) 8191LL))))) : (min((((/* implicit */unsigned long long int) var_6)), (var_8)))));
}
