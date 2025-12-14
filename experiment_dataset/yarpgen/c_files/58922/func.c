/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58922
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)8400)), (max((((/* implicit */long long int) (signed char)89)), (-8803895875216252958LL)))))) ? (((((/* implicit */_Bool) -548986950)) ? (-2147483619) : (-2147483623))) : ((-(((/* implicit */int) (unsigned char)14)))))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((6752332089430133914LL), (((/* implicit */long long int) 2147483619))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)17136))) : (((/* implicit */int) var_12)))) + (min((((((/* implicit */_Bool) arr_3 [i_0 + 2] [(unsigned short)5] [i_1])) ? (((/* implicit */int) (unsigned char)119)) : (2147483626))), (max((((/* implicit */int) (unsigned char)16)), (-1207299718))))))))));
                arr_5 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43705))))))));
                var_21 *= ((/* implicit */_Bool) ((signed char) ((_Bool) arr_3 [(short)10] [i_1] [i_1])));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (+((~(2147483606)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_16)))) : (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) (+(1345405415U)))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (short)4)) ? (-2147483619) : (2147483623)))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [14])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33438)) & (((/* implicit */int) (unsigned short)32097))))))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483619)) ? (((/* implicit */int) (unsigned short)32105)) : (((((/* implicit */_Bool) -222176020)) ? (-222176020) : (var_1))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) -2147483606)) ? (((/* implicit */int) (unsigned char)36)) : (2147483624));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (arr_11 [i_3])))) ? (((((/* implicit */_Bool) -2147483606)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [(short)10]))) : (var_16))) : (((/* implicit */unsigned int) (+(-2147483606))))))) ? (((((/* implicit */long long int) 1786036150)) & (8413564270882992849LL))) : (((/* implicit */long long int) max((2147483647), (((/* implicit */int) arr_6 [2ULL] [(short)0]))))))))));
                    var_26 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_2] [i_3])), (max((var_9), (1689837308351543687LL)))))) ? (((((/* implicit */_Bool) 222176020)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (-2147483622)))) : (8413564270882992853LL))) : (((((/* implicit */_Bool) ((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) + (-2147483616)))) : (min((var_9), (var_5))))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_10 [i_2] [i_2] [(unsigned char)10]))))));
    }
}
