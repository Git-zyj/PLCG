/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93334
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
    var_10 = ((/* implicit */signed char) max((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) 1314619399)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32446)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_11 [i_2]);
                    var_11 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) ((unsigned short) -1314619399))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) 12ULL);
    var_13 = min((-8697777241126920275LL), (((/* implicit */long long int) (+((+(((/* implicit */int) (short)32450))))))));
}
