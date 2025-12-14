/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97054
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
    var_16 = ((/* implicit */unsigned short) (~(var_6)));
    var_17 = ((/* implicit */unsigned short) (short)-16384);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 |= ((/* implicit */unsigned short) 11886841764255498386ULL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)5))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_10))))));
                var_20 -= ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) max(((unsigned short)22), (var_2))))))));
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65501))));
            }
            for (short i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (max(((unsigned short)26870), (((/* implicit */unsigned short) (_Bool)0))))));
                var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7509))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 6867575298555584430ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))))));
            }
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48824))) : (11579168775153967189ULL)))))));
        }
        var_25 = ((/* implicit */short) var_13);
        var_26 ^= ((/* implicit */short) 1888611607888686058ULL);
    }
}
