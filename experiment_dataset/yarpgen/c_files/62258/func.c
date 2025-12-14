/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62258
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-105)) >= (63))))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((signed char) (unsigned short)54702))))))))));
    var_13 += ((/* implicit */signed char) var_8);
    var_14 -= ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4225217130U)) ? (((/* implicit */int) (unsigned short)30314)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((_Bool) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 3944546000U)))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned short)1056)) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_8))))))))));
        var_18 = ((/* implicit */long long int) (_Bool)1);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) max((arr_4 [i_1]), (((/* implicit */unsigned int) (unsigned short)22449))));
        var_19 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((arr_3 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_6 [i_1])))));
    }
}
