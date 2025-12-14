/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92835
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)4272)) : (((/* implicit */int) (short)4272)))) / (((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)60)) | (((/* implicit */int) var_5))));
        arr_2 [i_0] = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) var_3);
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45604)) ^ (((/* implicit */int) (unsigned short)19921)))))));
    }
    var_22 = ((/* implicit */_Bool) (signed char)60);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned short) (unsigned char)45);
                arr_14 [i_3] [i_2] = ((/* implicit */signed char) ((unsigned short) arr_7 [0LL] [i_3]));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)34006)))))))) : (((/* implicit */int) (unsigned char)240))));
                var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
            }
        } 
    } 
}
