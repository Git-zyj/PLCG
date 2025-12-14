/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99362
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_0 [(unsigned char)2])))) : ((+(arr_3 [i_0 - 2] [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) (unsigned short)38429);
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49191)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned short)49189))))) ? (min((arr_0 [i_3]), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 + 1]))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_11 [(signed char)21] [(signed char)21] [i_3 + 1] [2LL] [2LL] [i_3]))))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */short) arr_2 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((-((-(((/* implicit */int) (_Bool)1))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (unsigned char)164))));
}
