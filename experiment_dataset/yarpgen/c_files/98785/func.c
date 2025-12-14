/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98785
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((min((((/* implicit */int) var_0)), (((((/* implicit */int) var_14)) & (((/* implicit */int) var_1)))))) - (((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */int) (unsigned short)53462)) : (((/* implicit */int) var_4)))))))));
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((unsigned short)0), ((unsigned short)53462))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_11)))))) ? ((~(((/* implicit */int) ((short) arr_0 [i_0]))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-22407)) - (((/* implicit */int) arr_5 [i_2] [(unsigned short)8] [(unsigned short)8] [i_0]))))) ? (((((/* implicit */int) (short)22406)) ^ (((/* implicit */int) (unsigned short)16384)))) : ((-(((/* implicit */int) (short)32767)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_14)))))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (short)-733)))), (((/* implicit */int) min(((unsigned short)53473), (((/* implicit */unsigned short) arr_1 [i_0])))))))) ? ((~(((((/* implicit */int) arr_2 [i_2])) & (((/* implicit */int) (unsigned short)53462)))))) : (((/* implicit */int) min(((short)22425), ((short)-22407))))));
                }
            } 
        } 
    } 
}
