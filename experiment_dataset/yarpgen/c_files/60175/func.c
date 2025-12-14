/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60175
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
    var_19 = ((/* implicit */short) ((_Bool) var_8));
    var_20 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (~((~(min((arr_1 [i_0]), (arr_1 [i_0])))))));
        var_22 = ((/* implicit */unsigned short) (_Bool)1);
        var_23 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        arr_6 [0] &= ((/* implicit */unsigned char) min((((unsigned short) ((int) var_17))), (((/* implicit */unsigned short) (unsigned char)7))));
        arr_7 [(_Bool)1] [i_1] = ((/* implicit */int) (unsigned char)24);
        var_24 = ((/* implicit */long long int) min((((/* implicit */short) var_14)), (min((((short) var_7)), (((/* implicit */short) (!(((/* implicit */_Bool) var_17)))))))));
        var_25 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_2 [i_1]))))))));
        var_26 = ((/* implicit */unsigned short) arr_2 [i_1]);
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */short) var_14);
        var_27 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_1 [i_2 + 2])))));
    }
}
