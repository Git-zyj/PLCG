/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61347
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
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [12ULL] = ((/* implicit */long long int) (+((-((-(((/* implicit */int) var_13))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])), (0ULL)))) ? (((((/* implicit */_Bool) -6420341150010363956LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [3ULL])))) : (arr_1 [i_0] [i_1 - 1])))) ? (max((max((23ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))), (((/* implicit */unsigned long long int) 449033062)))) : (((/* implicit */unsigned long long int) 2076686392U))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_1 + 4] [i_1] [i_1])))) ? (var_16) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)3894)))))));
            }
        } 
    } 
}
