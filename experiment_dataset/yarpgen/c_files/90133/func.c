/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90133
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
    var_11 = ((/* implicit */unsigned char) (((~(((long long int) var_8)))) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_12 = ((short) ((_Bool) ((unsigned short) (unsigned char)255)));
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)12)))));
        var_15 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) var_1)))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_6 [i_0])))) ? (4294967295U) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_2)) : (((int) (unsigned char)12))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) % (var_1)))))));
                }
            } 
        } 
    }
}
