/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94404
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
    var_17 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) (~(arr_1 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)30341)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)42))))))) : (((((/* implicit */_Bool) (short)3663)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))) : (9319522473482174543ULL)))));
            var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (_Bool)1))), (max((var_9), (((/* implicit */int) (short)3683))))));
        }
    }
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), ((+(((int) (short)-1))))));
}
