/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67936
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
    var_16 = var_14;
    var_17 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) (unsigned short)15872);
                    var_19 |= ((/* implicit */int) min(((-((+(var_12))))), ((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+((~((+(arr_3 [i_0])))))));
                                var_21 = ((((((/* implicit */_Bool) min((886787054), (arr_3 [i_0])))) ? ((+(((/* implicit */int) var_9)))) : (arr_3 [i_3]))) < (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0])) <= (((/* implicit */int) var_5))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [4] [i_1] [8] [i_3])) | (((/* implicit */int) ((arr_4 [i_2] [i_3] [i_2]) == (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))))))));
                                arr_12 [i_0] [i_0] [3LL] [i_2] [2LL] [i_3] [i_4] = ((/* implicit */long long int) (short)8963);
                                var_23 |= ((/* implicit */_Bool) max(((-(0LL))), (((/* implicit */long long int) 0U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
