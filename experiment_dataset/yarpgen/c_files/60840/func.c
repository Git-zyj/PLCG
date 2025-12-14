/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60840
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
    var_17 = ((signed char) (signed char)(-127 - 1));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */int) ((unsigned short) -1))) << (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (_Bool)1))))));
        var_18 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned long long int) arr_7 [i_3 + 1] [i_3 - 2]));
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                var_20 |= ((/* implicit */short) ((((((/* implicit */int) var_2)) << (((/* implicit */int) arr_10 [i_1] [i_2] [18U])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            }
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
                arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) arr_9 [i_4]);
            }
            arr_17 [i_1] [14ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_4 [(signed char)16]) : (((/* implicit */long long int) ((570572014U) * (var_5))))));
            arr_18 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((-(var_6))));
            arr_19 [i_1] [i_2] [16U] &= ((unsigned long long int) (-(((/* implicit */int) (unsigned short)33921))));
        }
        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-102))));
        var_23 = ((/* implicit */unsigned long long int) (short)16352);
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) | (((/* implicit */int) (signed char)127)))))));
        var_25 = ((/* implicit */int) arr_8 [i_1]);
    }
    var_26 = ((/* implicit */short) (~(((/* implicit */int) (!(var_9))))));
    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
}
