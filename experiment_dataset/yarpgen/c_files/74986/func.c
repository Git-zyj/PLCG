/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74986
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
    var_12 = ((unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (7U)));
    var_13 = ((/* implicit */short) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) min((min((((short) 7U)), (((/* implicit */short) max(((signed char)0), ((signed char)-1)))))), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)4))))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_0 [i_0 - 1])))) ? (6386261057749075313ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)13039)) && (((/* implicit */_Bool) var_3))))))))));
    }
    var_15 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)33814)) : (((/* implicit */int) (signed char)-6))));
}
