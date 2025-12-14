/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92807
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
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)56)), ((~((+(((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))))));
            arr_5 [i_0] |= ((/* implicit */unsigned char) ((int) -1));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_8 [i_2] [i_0] = ((/* implicit */long long int) (((~(var_0))) + ((+((-(var_8)))))));
            arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) (+((~(((long long int) var_8))))));
            arr_10 [i_0] [i_2] [i_2] = var_4;
        }
        arr_11 [i_0] [i_0] = ((/* implicit */int) var_13);
    }
    var_18 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)23)));
}
