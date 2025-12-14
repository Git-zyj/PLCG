/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59871
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
    var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)52)))) ? (((/* implicit */int) (short)6921)) : (((/* implicit */int) var_10))));
    var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-6921)) && (((/* implicit */_Bool) (short)6922)))) ? (max((((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))))), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)16)))) && (((/* implicit */_Bool) var_7)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)105)) ^ (((((/* implicit */int) (short)6931)) & (((/* implicit */int) (unsigned char)10))))))) ? ((~(((/* implicit */int) arr_2 [(unsigned short)3])))) : ((~(((/* implicit */int) (signed char)-30))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)244)))))) ? (max((((/* implicit */unsigned int) var_4)), (200593658U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    }
}
