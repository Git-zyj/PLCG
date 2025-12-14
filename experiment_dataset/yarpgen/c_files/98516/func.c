/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98516
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) | (3523342793688391027ULL))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)77)), ((short)-1)))), (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)67)))))))));
                    arr_9 [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)-68)), ((short)3667)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) min((min((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-56)) + (2147483647))) >> (((-8966966870158014870LL) + (8966966870158014873LL)))))))), (((((/* implicit */_Bool) 5109119166774850646LL)) ? (16486457707037556164ULL) : (((/* implicit */unsigned long long int) max((473911608), (-1020097645))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30149)) ? (((/* implicit */unsigned int) 590685712)) : (var_0)));
}
