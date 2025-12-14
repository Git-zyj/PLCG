/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80620
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(-1)))), (((((/* implicit */_Bool) arr_4 [(short)0] [i_0] [(unsigned char)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))) : (9223372036854775807LL))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0]))))), (7209093746758734033ULL))), (((((/* implicit */_Bool) ((unsigned int) -5219960443518167443LL))) ? (11237650326950817583ULL) : (min((11237650326950817589ULL), (((/* implicit */unsigned long long int) -1))))))));
                    var_13 = ((/* implicit */unsigned int) max((((((_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((unsigned char) arr_2 [i_0]))))), (((/* implicit */int) arr_5 [i_2] [4ULL] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 411388473U))))));
}
