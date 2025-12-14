/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65394
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) var_9))) : ((+(var_0))))) % ((((~(((/* implicit */int) (signed char)127)))) ^ (((/* implicit */int) (unsigned char)153))))));
    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) (unsigned short)1023))))) ? (min((8852192268037788938LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25241)))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-31453)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) (_Bool)1))))))))) <= (((4294967295U) & (1U))))))));
}
