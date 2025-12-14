/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96377
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
    var_17 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((2047ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)113)) + (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) > (((/* implicit */int) (_Bool)1)))))))))))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 2])) + (((/* implicit */int) (unsigned char)149))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)153)) / (((/* implicit */int) (signed char)8))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) 47264528);
    }
}
