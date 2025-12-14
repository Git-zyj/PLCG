/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76440
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
    var_13 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))), (((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)104))))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)-5889)))))) : (max((((/* implicit */unsigned int) (unsigned char)192)), (2656039908U))))) - ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 536854528)) : (var_12))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_15 = arr_2 [i_0] [i_0] [i_1];
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_0 [i_0])))))));
            arr_4 [i_1] &= ((/* implicit */unsigned int) ((unsigned short) (!(arr_2 [(unsigned short)0] [i_1] [(unsigned short)0]))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)63393))) ? (((/* implicit */int) ((_Bool) var_3))) : (((int) 6U))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((-536854529) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) & (((/* implicit */int) (unsigned short)65532)))))));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_7 [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-24987)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (short)-28336)))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(arr_1 [i_0])));
        }
        var_19 = ((unsigned short) 2147483647);
        var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((arr_2 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_2 [16] [i_0] [i_0]))))));
    }
}
