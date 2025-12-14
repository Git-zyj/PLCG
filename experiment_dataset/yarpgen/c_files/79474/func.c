/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79474
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((arr_0 [i_0 - 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0 + 3] [i_1])))))));
                var_12 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_2 [i_0 - 2]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_11)) & (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((signed char) 7008385710973657965LL))))) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : (((unsigned long long int) (unsigned short)27046))));
    var_14 &= (_Bool)0;
}
