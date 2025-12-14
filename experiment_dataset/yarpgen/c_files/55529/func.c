/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55529
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
    var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned char)101)), (-7022170689568629005LL))))))));
    var_20 = ((/* implicit */_Bool) min((max(((unsigned short)53970), ((unsigned short)22481))), (((/* implicit */unsigned short) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) (~(-7022170689568629005LL)));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (~(-1692210767)));
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)22481))));
    }
}
