/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84973
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) var_6));
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))))))) | (min((((/* implicit */long long int) var_8)), (var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(short)8] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44616)) * (((/* implicit */int) (unsigned short)3108))));
                    var_19 = max((min((((/* implicit */unsigned int) 394477547)), (0U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823ULL)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) arr_4 [i_2] [i_1]))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((((/* implicit */_Bool) -1870204268)) ? (299610445U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))))))));
                    arr_10 [i_0] [3LL] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
}
