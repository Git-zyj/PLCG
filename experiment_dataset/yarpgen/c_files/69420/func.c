/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69420
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-2147483633) : (-798807109)));
        var_20 = ((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */long long int) var_19))));
        var_21 -= ((/* implicit */unsigned int) var_11);
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_6 [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_2))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */unsigned int) -798807096))))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)61677)) : (((/* implicit */int) (signed char)-96)))), (((/* implicit */int) ((_Bool) (signed char)99))))) : (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_2 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_23 = (unsigned char)65;
        var_24 = ((/* implicit */int) 3952003448U);
    }
    var_25 = ((/* implicit */unsigned char) 3780556072U);
}
