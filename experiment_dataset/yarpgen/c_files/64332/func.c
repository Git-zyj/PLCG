/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64332
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
    var_12 = ((/* implicit */_Bool) (short)30641);
    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) 1230420030753353545LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (-1230420030753353545LL))) ^ (((/* implicit */long long int) ((((int) var_1)) & (((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((778372317U), (((/* implicit */unsigned int) (signed char)-94))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) max(((unsigned short)3511), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) var_10))))));
        var_15 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_1 [i_0])) & ((+(var_8))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [18U]) : (((/* implicit */int) (unsigned char)202)))) + (2147483647))) >> (((var_1) / (arr_4 [(_Bool)1]))))));
        var_16 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) ((_Bool) arr_5 [i_1]))), (max((((/* implicit */unsigned int) arr_3 [8])), (var_5))))), (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (arr_3 [i_1]))))));
    }
}
