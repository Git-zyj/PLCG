/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93741
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
    var_11 &= ((/* implicit */signed char) -772114740);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (((/* implicit */_Bool) 844122063166585549ULL))))) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) > (772114739)))))), (772114754)));
                    var_12 -= ((/* implicit */short) ((((((/* implicit */_Bool) -772114740)) ? (772114775) : (((/* implicit */int) (unsigned short)0)))) * (((/* implicit */int) arr_1 [i_1]))));
                }
                var_13 -= ((/* implicit */unsigned int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) 772114734)))))))));
                var_14 = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_8);
}
