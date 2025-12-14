/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70899
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551606ULL))) >> (min((((/* implicit */unsigned int) (unsigned short)63654)), (3U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1568018108U)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned short)1))))) && ((_Bool)0))))) : ((-((~(174468630U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) ((288160007407534080ULL) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_19 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-2376396703464356115LL))))));
                    }
                    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1] [i_2 - 1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)9208)) & (((/* implicit */int) var_12))))) ? (min((1320697997200193027ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) var_16)))))))));
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (unsigned char)234);
    var_23 = ((/* implicit */unsigned char) var_12);
}
