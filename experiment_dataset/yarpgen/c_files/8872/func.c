/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8872
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -763819026)) ^ (max((10158055931453237497ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))) ? (var_5) : (((/* implicit */int) ((short) ((short) -763819019))))));
    var_18 = (+((~(((var_6) ? (-763819013) : (((/* implicit */int) (unsigned char)137)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) min((((/* implicit */unsigned short) var_2)), (((unsigned short) var_6))));
        var_20 = ((/* implicit */short) ((int) arr_2 [i_0]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((var_14) << (((9223372036854775807LL) - (9223372036854775763LL)))));
                        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) -763819026)))) : (((long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) var_8)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_0);
                    }
                } 
            } 
        }
        arr_13 [i_0] = ((/* implicit */short) var_2);
    }
}
