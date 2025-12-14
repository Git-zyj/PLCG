/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57016
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [12LL] [i_1] [i_1] = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_1] [8])));
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] [i_3] [i_3] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54629)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25880)) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((18446744073709551615ULL) - (18446744073709551612ULL)))))))))));
                            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) (-(13127723321536692469ULL))))), (var_5))))));
                            arr_12 [i_0] [18ULL] [i_2] [i_3] [i_3] = ((/* implicit */short) (~(arr_7 [1ULL] [i_1] [i_1] [(short)7])));
                            arr_13 [15ULL] [i_1] [i_1] [i_3] [i_1] [9] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (short)22927))));
}
