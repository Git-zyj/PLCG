/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67909
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (448011277U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26221))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (+((~(((/* implicit */int) (_Bool)0)))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)41)) ? (var_9) : (((/* implicit */int) (unsigned char)254)))) + (((/* implicit */int) (unsigned short)60213))));
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36864))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((min((var_5), (((/* implicit */long long int) (_Bool)1)))) & (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) -1LL)))))) : ((~(((long long int) (unsigned short)60213)))))))));
    var_22 = ((/* implicit */signed char) 3824587966U);
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 7502229153892581059ULL))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_24 &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)32999)) * (((/* implicit */int) (short)0))));
                var_25 &= ((/* implicit */signed char) var_17);
            }
        } 
    } 
    var_26 -= ((/* implicit */_Bool) var_15);
}
