/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60808
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) (unsigned short)32724);
        arr_3 [i_0] = (short)-7928;
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 255);
        var_16 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (unsigned short)32803)), (min((2287114591U), (((/* implicit */unsigned int) (short)7915))))))));
        var_17 = ((/* implicit */_Bool) (~(2677578407U)));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_18 = var_1;
        arr_7 [(short)6] = ((short) (unsigned char)255);
        var_19 = ((/* implicit */unsigned int) arr_0 [i_1]);
        arr_8 [(signed char)0] = ((/* implicit */unsigned long long int) (short)24696);
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_20 = (short)-5389;
        var_21 = ((/* implicit */signed char) ((3275881945U) - (1917129102U)));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)-24032)) ^ (((/* implicit */int) (short)32482))));
                    var_22 = ((/* implicit */signed char) ((0ULL) >= (((/* implicit */unsigned long long int) 1232634857U))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) var_12);
}
