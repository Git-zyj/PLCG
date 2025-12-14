/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58363
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) (short)-806);
                var_16 = ((/* implicit */signed char) max(((+(1118670507))), (((/* implicit */int) (short)-791))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [15ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (short)15100)) / (((/* implicit */int) (short)530)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (!((_Bool)0)));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 3766836112U)) <= (var_1)))), (var_7)))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((-1974908392), (((/* implicit */int) (short)806))))) ? (((/* implicit */long long int) (+(3971471587U)))) : (max((((/* implicit */long long int) var_7)), (-8945858888909643142LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_4] [i_1] [i_4]) ^ (((/* implicit */unsigned long long int) -1678250560)))))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (signed char)66))))) ? (min((min((((/* implicit */long long int) (short)15100)), (-3457700229011902061LL))), (((/* implicit */long long int) (signed char)83)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 333612482U)) || (((/* implicit */_Bool) 1930412111U))))))));
}
