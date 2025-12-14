/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91285
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_10 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)231)), (arr_1 [i_0 - 2] [i_1 + 1]))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                var_11 = ((/* implicit */signed char) ((var_9) >= (((/* implicit */int) min(((short)8188), (((/* implicit */short) (unsigned char)22)))))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_5 [i_0] [i_1] [i_3]))));
                var_12 -= ((/* implicit */unsigned short) var_7);
            }
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
            var_13 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (short)30362))));
        }
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned short) ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)22)))))))));
    }
    var_15 = (signed char)-109;
}
