/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99199
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */int) (short)23184)) | (134217728))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max(((unsigned short)45484), (((/* implicit */unsigned short) var_5)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) > (((/* implicit */unsigned int) min((((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_9)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_13 = ((short) max((((/* implicit */long long int) ((short) var_5))), (-8190296192925833369LL)));
        var_14 += ((/* implicit */unsigned long long int) ((((((-134217753) + (((/* implicit */int) (unsigned char)1)))) + (((134217728) + (((/* implicit */int) var_5)))))) - ((((-(((/* implicit */int) arr_2 [i_1] [i_1])))) + (((/* implicit */int) var_2))))));
        var_15 = ((/* implicit */short) arr_5 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) min((((short) (unsigned char)120)), (((/* implicit */short) var_2))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_10 [i_1] [(signed char)8] [i_1] = ((/* implicit */short) var_7);
            var_16 |= ((/* implicit */long long int) var_8);
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_7))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_2])) >> (((((/* implicit */int) (signed char)118)) - (116))))) > (((/* implicit */int) ((_Bool) (signed char)41))))))));
        }
    }
    var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((_Bool) var_9))) | (((/* implicit */int) ((_Bool) var_10)))))));
}
