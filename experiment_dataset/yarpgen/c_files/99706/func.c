/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99706
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
    var_19 = ((/* implicit */unsigned short) var_13);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) -6029041331533006862LL)) & (1670360111415301431ULL))) * (((/* implicit */unsigned long long int) 6029041331533006861LL)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(6029041331533006866LL)))) ? (((4543674863222379088LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (3796307455U))))))) ? (((/* implicit */long long int) 3015699892U)) : (-6029041331533006844LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((9425997387944383008ULL), (((/* implicit */unsigned long long int) var_11))))))))) <= (4294967295U)));
                arr_6 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))));
                arr_7 [i_0 - 1] [(_Bool)1] &= min((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0 + 3])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_1 [i_0 + 3]))) : (((793118566997199683LL) >> (((4590344166637204779LL) - (4590344166637204731LL))))))), (((((/* implicit */_Bool) -5004542814551610548LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2048))) : (4590344166637204779LL))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) -6029041331533006830LL);
}
