/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9791
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
    var_20 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) var_3);
                var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 132872011U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-125))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)65508)), (4465558843117879097LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_0 [i_0 + 1])))))))) ? (((((/* implicit */_Bool) 3355133732185397499ULL)) ? (((((/* implicit */_Bool) 3779431400066163926LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))) : (5136467883749514981ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((min((var_8), (((/* implicit */long long int) var_3)))) % (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)46))))))))));
                var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) min((48765251U), (((/* implicit */unsigned int) 18)))))), ((~(3697230405U)))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (1956608860136806137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1])))))) || (((_Bool) (signed char)-8)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) min((var_17), (((/* implicit */long long int) (unsigned char)251))))))))));
    var_27 = ((/* implicit */signed char) var_5);
}
