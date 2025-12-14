/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60711
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (min((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_13)))) > (((6943140649987055784ULL) & (((/* implicit */unsigned long long int) 4U)))))))))));
        var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)247)) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) * (((((/* implicit */_Bool) -1532033848)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) << (((((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))) | (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_2)))))) + (20510)))));
    }
    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_2)))))) ? (var_15) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_13))))))));
    var_20 = ((/* implicit */long long int) min((min((min((var_4), (((/* implicit */unsigned long long int) var_1)))), ((~(var_4))))), (((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */unsigned int) var_0)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))))));
}
