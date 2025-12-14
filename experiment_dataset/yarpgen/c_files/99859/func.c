/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99859
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 1878288061314798972LL);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 12947677118545283256ULL))) && (((/* implicit */_Bool) (~(1878288061314798972LL))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_4))))), (((short) arr_4 [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1)))))))));
                    var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1878288061314798972LL)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_3])) : (((/* implicit */int) (signed char)61)))))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) var_2);
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) / (min((((/* implicit */int) max((var_11), (((/* implicit */short) var_5))))), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_11))))))));
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_0)) : (var_15)))))));
}
