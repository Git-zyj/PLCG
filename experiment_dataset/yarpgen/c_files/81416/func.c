/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81416
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)11167), (var_1))))) : (min((var_13), (((/* implicit */long long int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */int) (_Bool)1)) : (2147483624)))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) var_9))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536868864)) ? (3598242214U) : (((/* implicit */unsigned int) 2147483624))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((((_Bool)1) ? (((/* implicit */unsigned int) -2147483640)) : (3598242236U)))))) ? (((/* implicit */long long int) min((2147483624), (-2147483624)))) : (((((/* implicit */_Bool) var_0)) ? (var_13) : (var_11)))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_11))), (((/* implicit */long long int) min((var_2), (((/* implicit */short) var_10)))))));
    }
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1700665700)), (330347667U)))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) max((((/* implicit */short) var_5)), (var_2)))) : (((((/* implicit */_Bool) (unsigned short)14275)) ? (-2147483624) : (((/* implicit */int) (_Bool)0))))))));
    var_15 = var_8;
}
