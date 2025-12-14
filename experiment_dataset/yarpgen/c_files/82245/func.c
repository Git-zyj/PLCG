/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82245
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((var_5) >> (((var_11) + (4668341008700202857LL)))))) ? (((/* implicit */int) (!(var_10)))) : (var_9))))))));
    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_11), (((/* implicit */long long int) var_10)))) / (((/* implicit */long long int) ((int) 1152687192U)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_2))))) : (((var_8) ? (15198466564506929106ULL) : (((/* implicit */unsigned long long int) var_5)))))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((unsigned long long int) 9792977288981007936ULL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_4] [i_0] = (((~(arr_9 [i_4] [i_2] [i_2] [i_4] [i_3] [i_1 - 2]))) * (((((/* implicit */_Bool) 0ULL)) ? (9641421943256726027ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                                var_14 = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2]);
                }
            } 
        } 
    } 
}
