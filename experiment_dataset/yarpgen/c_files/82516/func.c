/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82516
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) ((4294967282U) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 |= ((/* implicit */long long int) var_9);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 3897355349U))) * (((/* implicit */int) ((1ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52696))) : (7514707730054046872LL)))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_10 [i_3] = ((unsigned long long int) var_6);
        arr_11 [i_3] = ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_5)))))) ? (min((((var_14) - (var_14))), (((((/* implicit */_Bool) 18446744073709551575ULL)) ? (var_14) : (var_14))))) : (max((((/* implicit */unsigned long long int) (-(-137876400)))), (min((((/* implicit */unsigned long long int) (unsigned char)196)), (18446744073709551602ULL))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (signed char)-125))))))));
    }
}
