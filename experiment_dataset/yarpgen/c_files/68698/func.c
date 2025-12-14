/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68698
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((short)28408), (var_0)))))))));
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_1 [i_0 + 1]));
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (-1931285330960937624LL) : (-1931285330960937625LL))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) (~((+(1931285330960937639LL)))));
        arr_5 [i_1] = ((/* implicit */unsigned char) -1931285330960937640LL);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_1 [i_1])))) + (((/* implicit */int) arr_0 [i_1])))))));
    }
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned short) var_0)), (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_7 [i_2]))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 - 1]))));
    }
}
