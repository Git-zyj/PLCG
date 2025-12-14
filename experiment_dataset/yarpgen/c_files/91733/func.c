/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91733
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), ((~(((((/* implicit */_Bool) var_13)) ? ((~(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_4)))))))))));
                var_15 = ((/* implicit */unsigned short) arr_7 [(unsigned char)5] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_16 -= ((/* implicit */_Bool) arr_9 [i_2]);
        var_17 -= ((/* implicit */unsigned long long int) ((arr_9 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            arr_13 [i_3] [i_2] = ((/* implicit */_Bool) (~((~(var_1)))));
            var_18 = (!(((/* implicit */_Bool) var_7)));
        }
    }
}
