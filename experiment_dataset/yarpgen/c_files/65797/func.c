/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65797
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [(unsigned short)14] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_17 *= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)-63)))))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) -6933862780092181182LL);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)26)) ? (((((/* implicit */_Bool) (signed char)84)) ? (((((/* implicit */_Bool) 392347002)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7740))) : (55980770875433790LL))) : (-6979531472763973129LL))) : (((/* implicit */long long int) ((int) arr_2 [i_1])))));
    }
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)23)), (max((18045927709984742559ULL), (((/* implicit */unsigned long long int) 6933862780092181182LL))))));
    var_22 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 1740366174))))), (max((-392346983), (((/* implicit */int) (unsigned short)65507))))));
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-63))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_8))))))))));
}
