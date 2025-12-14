/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81960
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
    var_14 = ((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65024)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))) : (1073741312U))))))))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((var_3) < (((/* implicit */int) (signed char)64)))) || (((/* implicit */_Bool) (unsigned short)65024))))), ((-(((/* implicit */int) (short)-1726))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)64)), (var_3)))) : (((((/* implicit */_Bool) var_11)) ? (1108307720798208ULL) : (((/* implicit */unsigned long long int) 564729101)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-2048), ((short)-2043)))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_17 += ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) 2229197033U))), (max(((unsigned short)512), (((/* implicit */unsigned short) (_Bool)1))))));
        var_18 = (~(1073741312U));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_19 -= (unsigned char)141;
        var_20 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)46)), (((72057594029539328ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13258)))))))) ? (((((/* implicit */_Bool) -1420977034)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((1240291370U), (((/* implicit */unsigned int) (short)8192)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    }
}
