/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87343
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0 - 1] [i_1])))) : (((4398046510976LL) - (((/* implicit */long long int) ((/* implicit */int) ((short) var_15))))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) | (((/* implicit */int) var_4))))))) >= (((((/* implicit */_Bool) ((long long int) (signed char)109))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (arr_1 [i_1])))))));
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 8596138300843895229ULL)) ? (((/* implicit */long long int) 536870656)) : (-11LL)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        var_18 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_9)))));
        var_19 ^= ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)23012))))));
    }
}
