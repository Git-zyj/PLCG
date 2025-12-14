/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60458
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
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (min((var_2), (((/* implicit */unsigned int) var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((arr_2 [i_1]) << (((((/* implicit */int) (short)-512)) + (558))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((unsigned long long int) min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)1480))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) (~(262144U)));
                                var_13 *= ((/* implicit */unsigned long long int) (unsigned short)61467);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = (~((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) - (var_3)))) - (var_8))))))));
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (12723053344870275565ULL)));
}
