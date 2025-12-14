/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65047
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) || (((/* implicit */_Bool) 3023297049U))));
    var_12 = ((/* implicit */unsigned int) (-(var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [11] [11LL] [6] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) == (((/* implicit */int) arr_3 [i_0] [(unsigned short)7] [i_0])))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) : (((((/* implicit */int) arr_0 [i_0])) | (((((/* implicit */int) var_6)) << (((2259562991U) - (2259562990U)))))))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_0 [i_1]))))) ? (max((((/* implicit */unsigned int) (unsigned short)55720)), (536868864U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))))));
                var_14 -= ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [12LL])))) ^ (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_15 = (-(((((/* implicit */int) var_7)) * (((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))))));
}
