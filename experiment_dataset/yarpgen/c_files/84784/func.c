/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84784
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
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (var_0)));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)17)))) / (((((/* implicit */int) var_11)) << (((/* implicit */int) arr_1 [10U] [i_1 - 1]))))))))))));
                arr_4 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)17)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [18] [18]))) != (134086656ULL))))))) ? (134086656ULL) : (134086656ULL));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_14);
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6144)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)37875))))) : (((18446744073575464959ULL) + (((/* implicit */unsigned long long int) 457533882U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_2)))) != (((/* implicit */int) ((134086665ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))))))))));
    var_21 = ((/* implicit */_Bool) var_1);
}
