/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80189
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) (_Bool)1);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    var_18 &= ((/* implicit */short) arr_0 [i_1]);
                    var_19 += ((/* implicit */short) (-(((/* implicit */int) (!((_Bool)1))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((unsigned short) (unsigned short)65525))))) / (((((/* implicit */int) var_1)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-5695128296548304128LL))))))));
}
