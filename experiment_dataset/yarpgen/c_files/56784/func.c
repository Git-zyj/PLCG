/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56784
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
    var_17 = ((/* implicit */short) var_13);
    var_18 = ((/* implicit */signed char) min((var_10), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_2)))), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) var_12)), (((var_10) * (((/* implicit */unsigned long long int) 2147483647)))))) : ((((!(((/* implicit */_Bool) var_6)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((595045864) > (((/* implicit */int) var_13))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                arr_6 [i_0] = ((/* implicit */short) ((var_3) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) var_11)) | (arr_1 [i_1])))))) : (((((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) var_3))))) ? (arr_3 [i_1] [i_1] [i_0 + 3]) : (((/* implicit */unsigned long long int) (-(-595045858))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10261))) % (var_2)))));
            }
        } 
    } 
}
