/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95806
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) <= (var_1))))));
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [5] [2ULL] = ((/* implicit */int) max((min((((/* implicit */unsigned int) (short)-5347)), (((unsigned int) arr_2 [i_0])))), (((/* implicit */unsigned int) (signed char)-47))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (short)-5377)) ? (-509594783) : ((~(262143))))));
        arr_6 [(signed char)18] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (short)5375))))) : (((/* implicit */long long int) min((arr_3 [i_0]), (1901836461U))))));
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((((/* implicit */int) (short)-5377)) + (2147483647))) >> (((((/* implicit */int) (short)-5371)) + (5371)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 262143)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49164))) : (-36787512339166045LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */unsigned int) var_9)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [18U])))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)5319)))), (((/* implicit */int) (unsigned char)122))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) (signed char)-26)) + (47)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((~(var_5)))))));
}
