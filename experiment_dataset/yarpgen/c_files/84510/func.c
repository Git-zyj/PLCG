/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84510
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)1)), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned short)32107)))) : (((/* implicit */int) var_5))));
    var_13 = (unsigned short)65535;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) min((var_7), (var_4)))), (((unsigned short) (unsigned char)11)))))));
                    arr_11 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned short) (unsigned char)77))))) + (((/* implicit */int) (unsigned short)5019))));
                    var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)32107)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_4))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned char) arr_18 [i_0] [i_3] [i_4] [i_5]);
                        var_17 ^= ((/* implicit */unsigned short) ((unsigned char) max((((unsigned short) (unsigned short)33018)), (min((var_1), (((/* implicit */unsigned short) (unsigned char)0)))))));
                    }
                } 
            } 
        } 
    }
}
