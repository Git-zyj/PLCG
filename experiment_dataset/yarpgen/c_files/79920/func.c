/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79920
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
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((short) var_14))) : (min((((/* implicit */int) ((_Bool) var_14))), (((((/* implicit */int) (signed char)15)) - (((/* implicit */int) (short)32767))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_7), (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (var_0)))))) ? ((+(max((var_0), (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))));
        var_18 = ((/* implicit */long long int) ((((unsigned long long int) max(((unsigned char)4), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-6953)) - (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) arr_1 [(short)11] [10])))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_7 [i_2]))) | (((/* implicit */int) arr_8 [i_1] [i_2] [i_1]))));
            var_20 = ((/* implicit */signed char) (unsigned char)248);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_12 [i_1] = ((unsigned char) arr_6 [i_1]);
            var_21 ^= ((/* implicit */_Bool) ((unsigned short) (signed char)80));
        }
        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_1] [i_1])), (var_12)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_8)))) : (((/* implicit */int) (short)28611)))) - (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) ((signed char) (unsigned char)96))) : ((((_Bool)0) ? (var_7) : (var_7)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4]);
        var_23 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_4]))))));
        var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (((((/* implicit */int) var_9)) << (((var_2) + (7380058232567524084LL))))) : (((/* implicit */int) var_10))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((174678261U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)49)) ? ((-(-383277817))) : (((/* implicit */int) (short)-13698))))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_3);
}
