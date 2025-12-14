/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80684
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
    var_16 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = (-(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10259))))), (arr_0 [i_0] [i_0]))));
        var_18 &= ((/* implicit */unsigned int) ((arr_1 [i_0]) < (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(17510131275152913704ULL))))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) 10165151393542848189ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((15762598695796736ULL), (((/* implicit */unsigned long long int) ((746268529) <= (var_5)))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_8 [i_3])))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] [2U] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_4]))));
        var_22 = ((/* implicit */int) max((var_22), ((-((+(((/* implicit */int) arr_8 [i_4]))))))));
    }
}
