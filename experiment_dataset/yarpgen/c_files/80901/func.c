/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80901
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
    var_16 = ((/* implicit */unsigned char) var_2);
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) -837952087873963768LL)) ? (-837952087873963739LL) : (5695679769458367906LL))) : (837952087873963756LL)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)99)) >> (((((/* implicit */int) (signed char)-117)) + (128)))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_12)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 837952087873963751LL)) && ((_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_3 [i_1] [i_0 + 1] [i_1])))) ? (((((/* implicit */_Bool) 1218403236332308308ULL)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((15918261570067440820ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (15918261570067440820ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (var_0))))) : (arr_3 [i_1] [i_0] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) : (25ULL))), (((/* implicit */unsigned long long int) var_15))));
}
