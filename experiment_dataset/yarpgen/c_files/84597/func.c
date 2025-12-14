/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84597
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
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 = ((long long int) 12372087072070587385ULL);
                var_11 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) / (16000135428886303627ULL))), (((/* implicit */unsigned long long int) (~(6744841257174332254LL)))))));
                var_12 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) 16000135428886303627ULL)))));
                var_13 *= ((((/* implicit */_Bool) (unsigned char)251)) ? (2446608644823247995ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23333))));
                arr_4 [i_1] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)128))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_5);
}
