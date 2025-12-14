/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58171
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
    var_16 = (!((((_Bool)1) || (((((/* implicit */_Bool) (short)-23675)) || (((/* implicit */_Bool) (short)-8040)))))));
    var_17 = ((unsigned long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (_Bool)0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_5 [i_2 + 1] [i_0] [i_2]))))));
                    arr_9 [i_0] [i_0] [i_0] [(unsigned short)10] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2 + 1]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_0] [(_Bool)0] [i_4] = min((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)127))))))), (min((((/* implicit */unsigned short) (short)-14420)), (arr_14 [i_4] [i_2] [i_3 - 1] [i_2] [i_1] [i_0]))));
                                var_18 *= (unsigned short)896;
                                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_0] [i_4])), (max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) 13833021212368287323ULL))))));
                                arr_16 [i_4] [i_0] [i_3] [(short)4] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((_Bool) ((((12216591917771814650ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18005))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)54756))));
}
