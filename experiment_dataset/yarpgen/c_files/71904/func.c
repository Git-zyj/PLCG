/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71904
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) (unsigned short)0)), (var_8))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) ((-2384402189294679298LL) < (((/* implicit */long long int) 2912708707U))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36565))) : (-4386346067230338218LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) : (2305843009213693696ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((4294967295U) << (((arr_4 [i_0]) - (1429493489U)))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) max(((unsigned short)28970), ((unsigned short)36565)))), (((arr_4 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) var_4)) ? ((+(-4386346067230338238LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned short) var_10))))))))));
                var_21 = ((/* implicit */unsigned char) var_17);
                var_22 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                var_23 *= ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 163413857U)), (((((/* implicit */_Bool) 32512)) ? (((/* implicit */long long int) 32500)) : (var_14)))))) ? (((((/* implicit */_Bool) (unsigned short)36565)) ? ((-(-4386346067230338218LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */long long int) var_1))));
    var_25 = ((/* implicit */int) var_17);
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(var_9)))) * (var_11))))));
}
