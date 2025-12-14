/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92848
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
    var_12 = ((/* implicit */long long int) (signed char)-16);
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    var_14 = max((max((((/* implicit */unsigned int) (signed char)64)), (max((170755072U), (((/* implicit */unsigned int) (short)11152)))))), (((/* implicit */unsigned int) ((288230376151711743ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))) * (1193351114U))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((unsigned short)53118), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (short)24158)))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)27469)), (827305708U)))), (min((11486639476282738777ULL), (((/* implicit */unsigned long long int) -1702075785))))))));
                arr_6 [(short)3] = ((/* implicit */signed char) -1711523232);
            }
        } 
    } 
}
