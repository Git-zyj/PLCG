/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65722
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
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) > (min((17046776978637469540ULL), (((/* implicit */unsigned long long int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) max(((+(arr_0 [i_1 - 2] [i_1 + 1]))), (((/* implicit */unsigned long long int) ((((unsigned int) var_6)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max(((-(arr_2 [i_0] [i_1] [i_0]))), (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (1833033388179285069ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    var_16 ^= ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) 0U))))))));
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_3)))));
}
