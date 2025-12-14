/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97217
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
    var_19 -= ((/* implicit */_Bool) (short)20);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [(unsigned char)9] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-21)) | (((/* implicit */int) (short)24873))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (_Bool)1))))) << (((17393763726772053686ULL) - (17393763726772053686ULL))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_21 &= min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8120045084094644757ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [10U] [i_1])) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_22 = 8120045084094644744ULL;
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (((~(9155601565989220775ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32759)))))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_1] [i_2]))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)212)), ((short)-32759))))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_10 [i_3] [i_1])))))))));
            var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-64))))) ? (((/* implicit */long long int) arr_7 [i_3] [i_1])) : (((((/* implicit */_Bool) (short)32757)) ? (max((arr_6 [i_1] [16]), (((/* implicit */long long int) (short)-24873)))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)20)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            var_26 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_4 + 1] [i_4 + 1]));
            arr_13 [i_4] [i_4 - 1] = ((/* implicit */unsigned short) (signed char)-32);
        }
    }
    var_27 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)224))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) & (((/* implicit */int) (short)-17830))))) : (var_10))))));
    var_28 *= ((/* implicit */unsigned int) max((1764799279435325758ULL), (((/* implicit */unsigned long long int) var_2))));
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (-(1966080U))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) ((_Bool) var_7))))))));
}
