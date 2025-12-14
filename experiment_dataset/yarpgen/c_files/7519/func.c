/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7519
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (arr_2 [i_1]))))));
                var_12 = ((/* implicit */unsigned long long int) (+(arr_0 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = var_9;
                            arr_9 [i_3] [i_3] [i_2] [(short)0] [i_3] &= arr_8 [i_0] [i_0] [i_3];
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [(short)8])) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2U] [i_1] [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ^ (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    for (short i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (((unsigned int) -1537921700575205447LL))))) % (((/* implicit */int) var_8))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(arr_6 [i_0] [i_1] [i_4] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
