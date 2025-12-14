/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92963
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 7; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [(unsigned short)1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3558789372150190338ULL))));
                                var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 3163440382U)), (17045651456ULL)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((_Bool) (~(((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-10)) ^ (((/* implicit */int) (signed char)-66))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)384))) ^ (482285521U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_1] [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13))))))));
                    var_19 = arr_1 [i_0];
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */int) ((long long int) var_9));
}
