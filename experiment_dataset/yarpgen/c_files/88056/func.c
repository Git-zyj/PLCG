/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88056
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((((((_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -724176779)) == (var_1))))) : (var_1))) - (((arr_1 [i_0 - 4]) ^ (7860874089260777723ULL)))));
                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((unsigned char) arr_1 [i_0]))))));
                var_17 ^= ((/* implicit */unsigned long long int) (signed char)-48);
                var_18 += ((/* implicit */int) min(((((-(arr_1 [i_1]))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))), (((_Bool) max((var_5), (((/* implicit */unsigned char) var_3)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) | (((/* implicit */int) (signed char)-49)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) -9191482954021267863LL))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_8))))))));
    var_20 = ((((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */unsigned int) ((_Bool) var_2))), (var_11))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_8))))))));
    var_21 = ((/* implicit */_Bool) (unsigned char)139);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114)))))))) ? (((int) var_1)) : ((~(((/* implicit */int) max(((signed char)111), ((signed char)-48))))))));
}
