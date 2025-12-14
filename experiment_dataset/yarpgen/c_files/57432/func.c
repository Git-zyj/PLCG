/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57432
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        var_19 -= ((/* implicit */_Bool) ((signed char) (unsigned char)128));
        var_20 += ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_3))))));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (short)32256))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(-2114471103))))));
        arr_7 [(unsigned short)11] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) 1775916494U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))))))), (((/* implicit */long long int) (-(2114471119))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) & (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!((_Bool)1)))), (min(((unsigned short)240), (((/* implicit */unsigned short) var_1))))))) : ((~(((/* implicit */int) max(((short)-32267), (((/* implicit */short) var_12)))))))));
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!((!(((/* implicit */_Bool) (-(-2114471097)))))))))));
}
