/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74394
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) 2926316303689891043LL);
                arr_6 [i_1] = ((/* implicit */signed char) 2068596662);
                var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (min((((/* implicit */long long int) (-(258791895U)))), (min((((/* implicit */long long int) arr_2 [i_1 + 1])), (var_5)))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (short)32765))));
    var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (_Bool)1))))) ? ((~(((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22))))))), (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-32748))))));
    var_18 = ((/* implicit */long long int) (_Bool)1);
}
