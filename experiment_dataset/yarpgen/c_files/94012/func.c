/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94012
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_1 + 1] [i_1]), (((/* implicit */unsigned char) ((_Bool) arr_3 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45054)) ? (((/* implicit */int) (unsigned short)45034)) : (((/* implicit */int) (short)9473))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_13))))) : (arr_1 [i_1 + 1]))) : (arr_1 [i_1]))))));
                var_16 = arr_0 [i_0] [i_1];
                arr_4 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (min((((/* implicit */int) ((unsigned char) var_7))), ((~(((/* implicit */int) arr_0 [i_1] [i_0])))))) : (((/* implicit */int) ((short) min((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2 - 1]))));
        var_18 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_6 [i_2] [i_2])) ^ (((/* implicit */int) arr_5 [i_2]))))));
        arr_7 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))) * (((/* implicit */int) arr_6 [i_2 - 3] [i_2 + 2]))));
    }
    var_19 -= ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)121)))))) == (((/* implicit */int) var_12)));
}
