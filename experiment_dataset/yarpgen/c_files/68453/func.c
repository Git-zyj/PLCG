/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68453
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
    var_13 &= ((((/* implicit */_Bool) (signed char)-87)) ? (var_3) : (max((((((/* implicit */_Bool) (short)3625)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (9007199254740480ULL))), (((/* implicit */unsigned long long int) max((0U), (262143U)))))));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775795LL)))))));
    var_15 = ((/* implicit */signed char) min((2147483636), (((/* implicit */int) ((((/* implicit */int) (unsigned short)62876)) >= (((/* implicit */int) var_4)))))));
    var_16 |= ((/* implicit */unsigned long long int) ((4443113937864274668ULL) > (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)2661)), ((+(((/* implicit */int) (short)-31333)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */long long int) ((((((/* implicit */_Bool) -7746524691413429169LL)) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (arr_1 [i_1 + 1]))) + (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 8447986406151477826ULL)) ? (((/* implicit */long long int) 4294967295U)) : (var_9)))))));
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-31333)) ? (268434944U) : (4294967295U)))));
            }
        } 
    } 
}
