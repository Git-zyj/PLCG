/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60731
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) (short)-30964))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)22)))))), (((/* implicit */int) var_9)))))));
    var_12 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-30964)) && (((/* implicit */_Bool) 0U)))))) & (min((7160806170145201109LL), (((/* implicit */long long int) var_6)))))));
    var_13 &= ((/* implicit */_Bool) (unsigned char)150);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */int) (signed char)-107)) - (((/* implicit */int) (_Bool)1))))))));
        var_14 = ((/* implicit */signed char) ((((arr_1 [i_0]) + (2147483647))) >> (((/* implicit */int) (!(((_Bool) arr_0 [i_0])))))));
        var_15 = ((/* implicit */short) var_10);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_16 += -179397505511975798LL;
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_0 [i_1]))));
        var_18 *= max((min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-78)))), (((/* implicit */short) min((((((/* implicit */int) (signed char)-73)) >= (((/* implicit */int) arr_5 [i_1])))), ((((_Bool)1) && (((/* implicit */_Bool) (short)-21425))))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_9))));
}
