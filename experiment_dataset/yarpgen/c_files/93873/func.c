/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93873
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
    var_11 = ((/* implicit */short) ((long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (6635053313589574557LL) : (-6635053313589574567LL)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((int) ((short) ((short) arr_2 [i_0]))));
        arr_4 [i_0] = ((unsigned short) ((int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
    }
    var_12 = ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (-6635053313589574558LL))), (((/* implicit */long long int) ((unsigned char) var_10))))));
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((long long int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        var_14 = ((/* implicit */short) ((signed char) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
    }
}
