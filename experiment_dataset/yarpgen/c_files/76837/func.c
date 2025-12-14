/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76837
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_0] [2LL] |= ((/* implicit */unsigned long long int) min((arr_4 [i_0] [(unsigned short)16]), (((/* implicit */unsigned int) min((arr_5 [i_0]), (((/* implicit */short) ((((/* implicit */int) (unsigned char)247)) <= (((/* implicit */int) var_9))))))))));
                arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) min((arr_0 [i_0]), (arr_5 [i_1])))), (min((min((arr_6 [i_0]), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned int) ((signed char) (!((!(((/* implicit */_Bool) (unsigned char)177)))))));
    var_11 = ((/* implicit */short) var_0);
    var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4994571167071979376LL) : (((/* implicit */long long int) var_8))))) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) (signed char)73)))))), (((/* implicit */int) var_1))));
}
