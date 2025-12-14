/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57500
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
    var_17 = (unsigned char)0;
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)15897))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 *= ((/* implicit */short) max((min((var_13), (var_11))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)9050)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)198))))))));
        arr_4 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (((+(((/* implicit */int) (short)(-32767 - 1))))) < ((-2147483647 - 1))))) : ((+(((/* implicit */int) var_2))))));
        var_21 = ((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-4740)))), (((/* implicit */int) (short)18052))));
    }
    var_22 = ((((/* implicit */_Bool) 1451312161)) ? ((((_Bool)1) ? (var_12) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_6)) - (8558))))))) : (((/* implicit */int) min((max(((unsigned char)198), (((/* implicit */unsigned char) var_10)))), (((/* implicit */unsigned char) var_10))))));
}
