/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90728
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                var_11 = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))), (((((/* implicit */_Bool) (unsigned short)22680)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)65535))))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) / (((unsigned int) (unsigned char)205)))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) ((unsigned short) 5913423390825221764ULL)))))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((max((var_9), (((/* implicit */long long int) var_0)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_6))))))))), (((unsigned char) max((var_4), (var_10))))));
    var_14 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((unsigned int) (unsigned short)64468)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
}
