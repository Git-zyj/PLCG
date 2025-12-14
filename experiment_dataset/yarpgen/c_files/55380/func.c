/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55380
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
    var_18 = ((/* implicit */unsigned char) 4294967295U);
    var_19 = ((/* implicit */short) (unsigned short)63);
    var_20 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -7021564493715843884LL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (short)7449)))), ((+(((/* implicit */int) (short)7449))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_0]))))));
        var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)8] [i_0]))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7449))) : ((~(12934461179534125419ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)32754)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_2)) ? (12934461179534125419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (short)-12120))))) ? (((((/* implicit */_Bool) (short)-32758)) ? (5512282894175426196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)255)) - (244)))));
                    var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)175)) ? ((-(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_3]))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)222)) : (2147483618)));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]))));
    }
}
