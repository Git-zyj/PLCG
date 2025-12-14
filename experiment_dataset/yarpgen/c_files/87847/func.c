/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87847
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
    var_17 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned int) arr_0 [i_0]);
        var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3831699946U)) && (((/* implicit */_Bool) (unsigned short)29972))))) : (((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) var_16)) : (((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)29972)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29972)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            arr_5 [6U] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0]);
            var_21 += ((/* implicit */_Bool) var_2);
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) var_12)))))));
            var_23 = ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_1] [i_0]) : (889235770U));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */_Bool) 463267357U)) ? (((/* implicit */int) (unsigned short)35563)) : (((/* implicit */int) (_Bool)0)))) >> (((/* implicit */int) (unsigned char)0))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)24672))))), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8853))) : (463267366U))))) + (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_7 [(unsigned char)22])))) - (((/* implicit */int) arr_7 [i_2])))))))));
        var_25 = ((/* implicit */unsigned int) (((+(463267357U))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_11)))))));
        arr_9 [i_2] = ((/* implicit */unsigned short) 3673462065U);
        var_26 = ((/* implicit */_Bool) max((var_26), (((1852732752U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((((/* implicit */_Bool) 463267347U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))))))));
    }
}
