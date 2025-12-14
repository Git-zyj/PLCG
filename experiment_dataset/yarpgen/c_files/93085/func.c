/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93085
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((0), ((-2147483647 - 1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1 + 1]);
            arr_7 [i_1] [i_1] = (~(((unsigned long long int) 3472376681U)));
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_19 [i_0] [i_2] [i_0] [i_3] [7U] = ((/* implicit */signed char) arr_15 [7ULL] [i_3 + 1]);
                        var_12 = ((/* implicit */signed char) max((var_12), (((signed char) max((((signed char) var_5)), (((signed char) arr_12 [i_0] [i_0] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */unsigned int) var_2);
    var_14 = ((/* implicit */_Bool) var_0);
}
