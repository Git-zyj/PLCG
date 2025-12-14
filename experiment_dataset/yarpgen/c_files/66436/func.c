/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66436
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
    var_10 &= ((/* implicit */unsigned long long int) var_0);
    var_11 = ((/* implicit */signed char) var_1);
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned long long int) (signed char)4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (var_9) : (((/* implicit */int) var_3)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) || (((/* implicit */_Bool) (unsigned char)114))))), (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (max((-1878995819), (((/* implicit */int) (unsigned short)16679)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)164)) ? (arr_0 [i_1]) : (arr_0 [i_0 - 2])))) | (max((arr_1 [i_0 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)7]))))))))));
                var_14 &= ((/* implicit */_Bool) ((max((-11LL), (((/* implicit */long long int) (unsigned short)65534)))) % (((/* implicit */long long int) ((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_2 [i_1])))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (unsigned short)44387)))));
            }
        } 
    } 
}
