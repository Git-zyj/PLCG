/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64623
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
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((long long int) ((max((arr_0 [i_2]), (var_14))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (signed char)71))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 - 1] [(signed char)14]))))) ? (7260729318999140269ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((signed char) ((((/* implicit */int) (short)-23729)) - (((/* implicit */int) ((signed char) (short)23729)))))))));
    var_25 = ((/* implicit */_Bool) (signed char)-100);
    var_26 -= ((/* implicit */signed char) (short)23739);
    var_27 = ((/* implicit */signed char) ((17299248058757599156ULL) - ((((-(var_15))) - (((/* implicit */unsigned long long int) ((int) var_16)))))));
}
