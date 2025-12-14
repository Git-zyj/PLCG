/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96347
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
    var_15 ^= ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((_Bool) arr_2 [i_2])))))));
                        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_0 [i_2]), (((((/* implicit */int) (signed char)-121)) != (((/* implicit */int) (signed char)-121))))))) >> (((min((((/* implicit */long long int) ((arr_6 [i_2] [i_2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))), (min((7817761282582384415LL), (((/* implicit */long long int) (signed char)-121)))))) + (124LL)))));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_1 [8LL] [i_0 + 1]), (((/* implicit */unsigned char) (signed char)-121)))))));
    }
    var_19 -= ((/* implicit */signed char) var_3);
}
