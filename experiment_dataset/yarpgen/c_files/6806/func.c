/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6806
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((-5166211833212890869LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))))) : ((-(((/* implicit */int) (signed char)-105))))));
        var_10 = ((/* implicit */unsigned short) min((var_10), (arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((-1466292577685779566LL), (((/* implicit */long long int) (unsigned short)65533)))))))) >> (((/* implicit */int) arr_4 [i_1]))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? ((~(((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */signed char) arr_4 [i_1]))))))) : (((((/* implicit */int) var_4)) / (((((/* implicit */int) var_6)) | (((/* implicit */int) var_0))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((long long int) (unsigned short)2)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
    }
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))));
}
