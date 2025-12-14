/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97329
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
    var_19 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_1)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) arr_2 [12ULL]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_0 [i_2 - 1] [i_2 - 4])))));
                        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(arr_1 [i_2]))) : (((/* implicit */long long int) 2143984657)))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)26098)) ? (755514467) : (-2143984665)));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2143984657) | ((~(2143984643)))))) ? (((/* implicit */unsigned long long int) ((-2143984666) - (((/* implicit */int) (unsigned short)46484))))) : (min((((/* implicit */unsigned long long int) ((signed char) var_15))), ((~(14210117339274698807ULL)))))));
                    }
                    var_25 = ((int) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
}
