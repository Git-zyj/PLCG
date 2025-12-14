/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70465
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
    var_16 += ((/* implicit */long long int) 8191);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 = ((_Bool) max((max((((/* implicit */unsigned long long int) arr_5 [i_0] [3] [i_1] [3])), (arr_1 [i_2]))), (((/* implicit */unsigned long long int) 8206))));
                    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_4 [i_0] [i_1] [10U])))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) arr_5 [i_0] [i_0] [i_1] [(signed char)0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_2] [i_0]) : (99549048395234069LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32753))))) : (((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (-(99549048395234070LL)));
        arr_8 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 99549048395234070LL)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (_Bool)1))));
}
