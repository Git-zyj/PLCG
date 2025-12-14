/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63270
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_16 ^= ((short) ((((/* implicit */_Bool) ((signed char) var_7))) ? (2851375908U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-10234), (((/* implicit */short) (_Bool)1))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2851375913U))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) 1443591387U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) : (3397365001U)));
                        arr_10 [i_0] [i_1] [6U] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [11] [i_2 - 4] [i_3 - 3])))));
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2851375887U)) ? (2851375908U) : (1443591396U)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65504))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [(unsigned char)2])), (var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) == (((/* implicit */int) arr_1 [i_0 - 2]))))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) / ((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) 1443591374U)) ? (1042919720U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 278272508)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) var_12))))))))));
    var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_12)) ? (max((16723018300432277383ULL), (((/* implicit */unsigned long long int) (short)-1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_11)) - (59156)))))))));
}
