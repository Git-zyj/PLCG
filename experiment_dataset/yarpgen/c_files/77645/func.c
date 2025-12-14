/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77645
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) ((signed char) (short)20293))) - (67)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)64)) << (((7943346422390934794LL) - (7943346422390934776LL)))))))) : (var_16)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((((arr_1 [i_0 + 1] [i_0]) == (((/* implicit */unsigned long long int) -7943346422390934786LL)))) ? ((((((-(((/* implicit */int) arr_3 [i_0])))) + (2147483647))) << ((((+(var_16))) - (14357515196369553333ULL))))) : (((/* implicit */int) (unsigned char)3))))));
                var_20 = ((/* implicit */signed char) (unsigned short)2272);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20294)) ? (9045925856828650711ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20298)))));
}
