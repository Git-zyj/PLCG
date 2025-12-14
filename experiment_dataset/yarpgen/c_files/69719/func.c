/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69719
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
    var_15 ^= ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */int) (signed char)-5)) | (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)126)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = var_4;
        var_16 = ((/* implicit */int) var_8);
        var_17 = ((/* implicit */signed char) var_4);
        arr_3 [(unsigned short)2] |= ((/* implicit */unsigned int) ((signed char) ((int) arr_1 [(signed char)6])));
        var_18 *= ((/* implicit */unsigned int) (short)-22989);
    }
    for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) arr_5 [i_1 + 2])))))) >= (var_12)));
        arr_7 [3] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_0 [i_1 + 2]), (arr_0 [i_1 - 2]))));
    }
    var_19 = ((/* implicit */signed char) var_11);
}
