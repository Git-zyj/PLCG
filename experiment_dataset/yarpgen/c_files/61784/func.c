/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61784
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((unsigned long long int) ((short) var_10))), (((/* implicit */unsigned long long int) var_12))));
        arr_5 [i_0 + 2] = (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((+(428898981U))) - (428898980U))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(((((int) var_7)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    }
    for (unsigned int i_1 = 4; i_1 < 7; i_1 += 4) 
    {
        arr_11 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)39911))));
        arr_12 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_9 [i_1 - 2])))))));
    }
    var_16 = var_5;
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))) & (5706609827046059675ULL)));
}
