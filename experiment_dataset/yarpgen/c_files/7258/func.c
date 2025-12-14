/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7258
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
    var_16 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_2 [(signed char)12])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)214)))))) - (((/* implicit */int) (unsigned short)48277))));
                    var_18 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_2)))) == (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (var_15)))) ? ((-(((/* implicit */int) (unsigned char)127)))) : (((/* implicit */int) ((_Bool) arr_5 [i_1] [(_Bool)1] [i_2] [i_2])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -2018577865)) && (((/* implicit */_Bool) -641244165))))) != (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_1] [i_3])))))) + (((((/* implicit */_Bool) ((-641244154) / (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_10 [i_1] [i_1])))))))));
                        var_19 = ((/* implicit */unsigned char) (_Bool)0);
                        arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((641244168) % (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_1])))) + (((((/* implicit */_Bool) -1204237687)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned char)219))))));
                    }
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)0))) != (((/* implicit */int) (_Bool)1)))))));
}
