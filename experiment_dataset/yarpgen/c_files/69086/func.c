/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69086
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)13520)), (-699220059)))) ? (((arr_1 [i_1]) ? (max((var_5), (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */int) (unsigned char)13)) + (((/* implicit */int) arr_3 [i_0]))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_1])) : (var_4))))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)9347))))) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)55613)))) : (((((/* implicit */int) var_2)) / (var_6)))))));
                var_14 ^= ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (var_5) : (var_4))), (((((/* implicit */int) var_2)) | (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((var_4) + (var_6)))) : (0U)))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (2861871625U)))) ? (((/* implicit */int) min(((unsigned short)9347), (((/* implicit */unsigned short) var_10))))) : (((((/* implicit */int) (unsigned short)18614)) ^ (((/* implicit */int) var_2))))))) : ((~(((((/* implicit */unsigned int) var_6)) & (var_1)))))));
    var_17 &= (unsigned short)9918;
}
