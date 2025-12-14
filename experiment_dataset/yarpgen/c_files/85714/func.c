/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85714
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned short) (+(((((/* implicit */int) ((unsigned short) arr_4 [i_0] [(short)2] [i_0]))) | (arr_5 [i_1] [2ULL] [2ULL])))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [3]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42078))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)135)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)135)), (var_11))))))) ? (var_12) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)104)) != (((/* implicit */int) (unsigned char)145)))))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_12)) : (var_6))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_8)))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)129)) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) % (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
