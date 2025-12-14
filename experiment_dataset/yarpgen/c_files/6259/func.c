/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6259
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((arr_2 [i_0]), (arr_2 [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-3171), (((/* implicit */short) (unsigned char)115))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [(short)9]))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) (short)32745)) << (((268369920) - (268369908)))))))) | (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -7406918975833778879LL)) ? (((/* implicit */int) (signed char)36)) : (-268369921)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (1861007933U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) (signed char)-59)))) : (((arr_7 [i_1] [i_1]) | (arr_7 [i_1] [i_1])))));
        var_16 = ((/* implicit */signed char) ((_Bool) 2147483647));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [8])) ? (((/* implicit */unsigned long long int) max((var_10), (arr_11 [i_2])))) : (max((max((((/* implicit */unsigned long long int) arr_6 [i_2])), (7476147709134480006ULL))), (((/* implicit */unsigned long long int) ((short) arr_6 [i_2])))))));
        var_17 = ((/* implicit */unsigned char) arr_1 [i_2]);
    }
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) >> ((((~(var_7))) - (11477982424839240702ULL))))) | (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */int) max(((~(((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) (~((~(-268369921))))))));
    var_20 = (-(((/* implicit */int) (unsigned char)47)));
}
