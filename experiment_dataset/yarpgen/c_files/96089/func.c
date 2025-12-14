/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96089
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (arr_5 [i_1] [i_0] [i_0])))))), (arr_0 [i_0])));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)53))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-102))))) : (4294967040ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4294967011ULL), (4294967040ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744069414584576ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) ^ (arr_4 [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
    var_21 = min((min((((unsigned long long int) var_5)), (var_4))), (((/* implicit */unsigned long long int) var_9)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << ((-(((/* implicit */int) var_12))))));
}
