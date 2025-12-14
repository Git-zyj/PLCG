/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86532
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
    var_11 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) -320989916)), (var_10))), ((-(((((/* implicit */_Bool) (unsigned short)37769)) ? (1073741823U) : (3350032334U)))))));
    var_12 = ((long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((-2979956813825363832LL), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) 0)), (3U))) > (((/* implicit */unsigned int) ((int) (signed char)-2))))))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((long long int) arr_0 [i_0 + 2] [i_0 + 2])) : (((/* implicit */long long int) ((arr_2 [i_0 - 1]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                arr_4 [i_1] [(unsigned char)14] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)9)) ^ (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0] [i_0]))) <= ((~(arr_1 [(_Bool)1] [(_Bool)1]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_2)))));
}
