/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67628
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
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) 907139820U)))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((int) 3387827476U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((min((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned char)0))))))), (min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (1476640004U) : (((/* implicit */unsigned int) var_11)))))))));
                                var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_3);
}
