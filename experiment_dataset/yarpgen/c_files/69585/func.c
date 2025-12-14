/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69585
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned short)9))))));
        var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (5867211519816025013LL)))) && (max(((_Bool)1), ((_Bool)0)))))), ((~(((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */short) (((~(((/* implicit */int) ((_Bool) arr_0 [(signed char)9] [i_0]))))) ^ ((~(((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */short) (_Bool)1);
        arr_4 [i_0] [i_0] = min((((/* implicit */long long int) (((-(9021985949336494471LL))) == (((/* implicit */long long int) ((/* implicit */int) (short)15360)))))), (((((/* implicit */_Bool) (~(-9021985949336494471LL)))) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-7317527970740738536LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) 28672)) : (8658418796084592971ULL)));
}
