/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96413
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
    var_15 = (short)-4377;
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((unsigned int) max(((short)19032), (((/* implicit */short) (unsigned char)89))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (_Bool)0)))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (-5838381688525422259LL)))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-19032)))) : (((((/* implicit */int) (unsigned char)116)) >> (((((/* implicit */int) var_3)) + (6979)))))))) ? (((/* implicit */int) (unsigned char)23)) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -6584222209674596118LL)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)78)))) : ((+(((/* implicit */int) (short)19032))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [(short)8]), (((/* implicit */unsigned short) var_0)))))) >= (((long long int) (short)-19028)))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43284)) * (((/* implicit */int) (unsigned char)140))))) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned char)106))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_8)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)95))))))))) : ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_6)))));
    }
    for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) 
    {
        arr_6 [i_1 - 3] = ((/* implicit */long long int) arr_5 [i_1] [(unsigned char)9]);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_20 += ((/* implicit */unsigned short) ((unsigned char) (+(-2108480693453306181LL))));
            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (short)20291))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_22 &= ((/* implicit */unsigned short) ((unsigned long long int) ((2125209511691855438ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
            arr_11 [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned long long int) (unsigned short)3);
        }
        arr_12 [i_1] = ((/* implicit */short) arr_5 [i_1 - 1] [i_1 - 1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned char) -1LL);
            arr_16 [i_4] = ((/* implicit */_Bool) ((long long int) arr_7 [i_1 - 3] [i_1 - 2]));
            arr_17 [i_4] = ((/* implicit */unsigned short) arr_8 [i_1 - 2]);
        }
        var_23 = var_9;
    }
}
