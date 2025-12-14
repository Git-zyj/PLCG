/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84468
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
    var_15 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_12);
        var_16 = ((/* implicit */unsigned char) ((max((arr_2 [i_0]), (arr_2 [i_0]))) ? ((~(((/* implicit */int) (unsigned char)52)))) : (((((/* implicit */int) (unsigned short)65534)) % (((/* implicit */int) (short)32767))))));
        arr_4 [i_0] = ((/* implicit */long long int) (!((_Bool)1)));
        arr_5 [i_0] [i_0] = (unsigned short)62226;
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    var_18 = ((/* implicit */long long int) var_13);
    var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(var_5)))))) ? (var_0) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
}
