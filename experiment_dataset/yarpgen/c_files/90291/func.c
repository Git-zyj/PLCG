/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90291
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
    var_13 = ((((/* implicit */_Bool) var_1)) ? (var_2) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (var_10)))), (min((var_2), (((/* implicit */unsigned long long int) 2234220836U)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_14 *= ((/* implicit */unsigned char) arr_3 [i_0] [2]);
            arr_5 [i_0] = ((/* implicit */unsigned short) ((max((arr_0 [i_0]), (arr_0 [i_1]))) % (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (arr_3 [i_0] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_9 [2U] [2U] [i_2] &= max((((/* implicit */unsigned long long int) var_3)), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
            var_15 = ((/* implicit */long long int) (unsigned short)10313);
        }
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
        var_16 *= var_0;
    }
}
