/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73267
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [9LL]);
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_1] [11LL] = ((/* implicit */unsigned char) -6057816288310827944LL);
            var_15 -= ((/* implicit */_Bool) 183304932U);
            arr_8 [i_1] [i_1 + 1] [i_1 + 1] = (unsigned short)60633;
        }
    }
    var_16 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)149)))))));
}
