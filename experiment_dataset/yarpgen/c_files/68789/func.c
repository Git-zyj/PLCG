/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68789
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((4503582447501312ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), ((-(var_7))))))));
    var_14 = min(((~(((((/* implicit */_Bool) 18442240491262050304ULL)) ? (var_0) : (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) (unsigned short)0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned short) min((4503582447501312ULL), (((/* implicit */unsigned long long int) (short)14563))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(arr_1 [i_1] [i_0]))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-8))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (4503582447501307ULL)))) && (((/* implicit */_Bool) ((-502765110) + (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_0]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) -502765110)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3264521057044598357ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) 2142102274226325704ULL)) ? (4503582447501312ULL) : (((/* implicit */unsigned long long int) 2147483647))))))));
}
