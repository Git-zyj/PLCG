/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80135
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)2040))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-9653)))) : (min((((/* implicit */int) var_3)), ((~(((/* implicit */int) arr_1 [i_0] [i_0 - 3]))))))));
        var_11 = ((/* implicit */int) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) (unsigned short)35212)))))))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (1224691847U))))));
        }
    }
    var_14 = ((/* implicit */long long int) var_10);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 4194303U))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (unsigned short)37626))))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) 9503508664810145716ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(max((((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */unsigned int) -187783694)) : (411480153U))), (((/* implicit */unsigned int) (short)10962)))))))));
    var_17 = ((/* implicit */long long int) var_8);
}
