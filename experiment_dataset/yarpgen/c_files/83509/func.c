/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83509
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
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) ^ (4294967292U)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned short) -1397249518387346819LL);
            var_13 -= ((/* implicit */unsigned short) var_6);
            var_14 = (+(4022692922U));
        }
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_4 [i_0]))));
        var_16 ^= ((/* implicit */signed char) arr_4 [20LL]);
        var_17 *= ((((17592186044415ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 - 1] [i_0] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0] [i_0 - 2]))))));
    }
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_18 = (!(((/* implicit */_Bool) (unsigned char)196)));
        arr_8 [i_2] = ((/* implicit */unsigned int) var_5);
    }
    var_19 ^= ((/* implicit */unsigned short) var_2);
}
