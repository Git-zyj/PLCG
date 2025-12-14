/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9676
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = var_4;
        var_10 = ((/* implicit */long long int) (short)8966);
        arr_4 [(_Bool)1] [(unsigned short)6] = ((/* implicit */int) ((signed char) -7622025516937568670LL));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)8982)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18405)) ? (((/* implicit */int) (short)8976)) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])))))))) <= (min((((/* implicit */int) max(((short)8966), (((/* implicit */short) (_Bool)1))))), (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (short)8990)) - (8975)))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_10 [i_1] [(unsigned char)10] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)236))));
                arr_11 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 365402338U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (33554400U)))) ? (((/* implicit */int) max((var_8), ((short)8972)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)8966)))))))));
            }
        }
        var_12 = ((/* implicit */unsigned int) min((var_12), (((unsigned int) -527690754007670186LL))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_13 = ((((unsigned int) var_3)) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_3] [i_3]) <= (13U))))));
        var_14 = ((/* implicit */int) arr_12 [i_3] [i_3]);
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46132)) && (((/* implicit */_Bool) (unsigned char)67)))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min(((-(137438953440LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4] [i_4])) & (((/* implicit */int) var_2))))))))));
        var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)18405))))) ? ((+(2278083772674550077LL))) : (((-4853292343706353522LL) - (-4943558197776602047LL))))));
        var_18 = ((/* implicit */short) (~(arr_12 [(signed char)12] [i_4])));
        var_19 *= ((/* implicit */unsigned long long int) (short)8967);
    }
    var_20 = ((/* implicit */_Bool) var_0);
    var_21 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
}
