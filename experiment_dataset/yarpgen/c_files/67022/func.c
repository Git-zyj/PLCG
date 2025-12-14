/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67022
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
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 137438953471ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (137438953473ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8)))))))), (((/* implicit */unsigned long long int) ((long long int) var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned char) (signed char)54);
                            var_17 = ((/* implicit */short) min((5081481222214195564ULL), (((/* implicit */unsigned long long int) 5513162085265774120LL))));
                        }
                    } 
                } 
                var_18 = ((max((arr_1 [i_0 + 1]), (arr_8 [i_0]))) ? ((-(((/* implicit */int) (signed char)66)))) : (((/* implicit */int) var_10)));
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0]))))), (((((/* implicit */_Bool) min((137438953452ULL), (((/* implicit */unsigned long long int) (signed char)-39))))) ? (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [i_0] [i_1] [i_0] [(unsigned short)8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]) - (17548928566433483581ULL))))))))));
            }
        } 
    } 
}
