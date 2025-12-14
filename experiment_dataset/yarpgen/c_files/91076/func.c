/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91076
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
    var_10 = ((/* implicit */int) var_1);
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 = ((/* implicit */signed char) ((_Bool) ((3218133548579767109LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)65))))));
        var_13 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */signed char) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (~(((int) arr_0 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1]) > (((/* implicit */unsigned long long int) 486018467U))))))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) 3808948819U))), ((+(-1LL)))))) ? (((/* implicit */unsigned int) (~((~(-35739905)))))) : (((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (486018467U))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
    }
    for (unsigned char i_2 = 4; i_2 < 17; i_2 += 2) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) 486018458U))))) ? (((/* implicit */int) arr_0 [i_2] [i_2 - 1])) : (((/* implicit */int) ((unsigned short) arr_6 [5ULL]))))) % (((((/* implicit */_Bool) ((unsigned int) 486018447U))) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_0 [i_2 - 4] [i_2])))) : (((/* implicit */int) var_1))))));
        arr_8 [i_2 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_2] [i_2]))));
        var_16 = ((/* implicit */int) ((signed char) (~(var_0))));
    }
    var_17 &= ((/* implicit */short) ((((unsigned int) (-(3808948849U)))) ^ (((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) var_4)))))))));
}
