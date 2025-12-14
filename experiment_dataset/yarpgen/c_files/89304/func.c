/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89304
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)17)) ^ ((~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [(signed char)11] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_0)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)35871)), (288230376151711743ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) 3884856564506149686LL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((1749673284403756945LL) + (((/* implicit */long long int) 951104667)))), (((((/* implicit */long long int) ((/* implicit */int) (short)12834))) + (-3651046977498231164LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)17))));
    }
    var_14 = ((/* implicit */int) ((long long int) (unsigned char)17));
    var_15 = ((/* implicit */long long int) ((int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (1362922009656106094LL))))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) var_12)), ((+((-(((/* implicit */int) (short)12834))))))));
}
