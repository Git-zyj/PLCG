/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81676
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
    var_12 = ((/* implicit */unsigned char) (signed char)-61);
    var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)4571)))) : ((~(((/* implicit */int) (short)-4576))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)237))))) ? ((((-(((/* implicit */int) var_10)))) % (((((/* implicit */int) (_Bool)1)) & (-1793233711))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1883912752))))))))));
        var_15 += ((/* implicit */signed char) min(((!(((/* implicit */_Bool) -5174216716445515883LL)))), ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) 5174216716445515883LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) ^ (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_10))))))) : (((/* implicit */int) var_5))));
}
