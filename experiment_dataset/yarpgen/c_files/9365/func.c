/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9365
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
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (var_2)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12412351093921902991ULL))) : (((/* implicit */unsigned long long int) -8004782267764330641LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (-264406109))))))));
        var_15 -= ((/* implicit */short) (-(min((((/* implicit */long long int) (_Bool)0)), ((-(0LL)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), ((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) var_8))))))));
    }
    var_16 |= ((/* implicit */short) (~(((/* implicit */int) var_0))));
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))), (((/* implicit */unsigned long long int) (-(var_13))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min(((unsigned short)47556), (((/* implicit */unsigned short) (signed char)-61))))) : (((/* implicit */int) var_0))))) : ((-(7408421628289295961LL)))));
    var_18 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (-8640335014212719087LL) : (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_0))));
}
