/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80200
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (-2147483632)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65509)) : (0)))) : (((((/* implicit */unsigned long long int) var_16)) ^ (var_17))))) : (((/* implicit */unsigned long long int) (~((~(var_3))))))));
    var_21 = var_6;
    var_22 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned short)6))))) == (((/* implicit */unsigned long long int) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) < (max((((/* implicit */long long int) var_3)), (var_8)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max(((+(6ULL))), (((/* implicit */unsigned long long int) min((max((var_11), (((/* implicit */int) var_13)))), (arr_9 [i_3] [i_3] [i_3]))))));
                            var_25 = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
}
