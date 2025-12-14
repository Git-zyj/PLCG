/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76049
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
    var_10 &= var_5;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 830157527U)), (((8333716792720569573LL) / (((/* implicit */long long int) ((/* implicit */int) (short)19386)))))))))))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((1006632960), (((/* implicit */int) (unsigned short)1)))))));
        var_13 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19387))) : (12031838797741175321ULL)))) ? (((/* implicit */int) min(((short)-19386), (((/* implicit */short) (unsigned char)242))))) : (((/* implicit */int) (unsigned char)187)))))));
        arr_4 [i_0] = ((/* implicit */int) min((((max((((/* implicit */long long int) 65535)), ((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)68)), ((~(((/* implicit */int) var_0)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) min((max((((/* implicit */unsigned int) (_Bool)1)), (524288U))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)232)), (var_4))))))), (((((/* implicit */_Bool) var_9)) ? (4798290068792782236LL) : (((/* implicit */long long int) min((var_9), (var_5))))))));
        arr_9 [i_1] |= ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)132))))), (6047552268922817615ULL)))));
    }
}
