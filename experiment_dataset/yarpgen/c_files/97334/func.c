/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97334
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)126)), (var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_9))))) ? (min((14529345524894633521ULL), (((/* implicit */unsigned long long int) (unsigned short)6997)))) : (((/* implicit */unsigned long long int) (~(var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_16 = var_14;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) max((2147483647), (((/* implicit */int) (unsigned short)58524)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) 331659796);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), ((~(((/* implicit */int) var_13))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_3 [i_1]))));
                        arr_12 [i_4] [20ULL] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_4]))));
                        var_20 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) -2499921397634139586LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))));
        }
    }
    var_22 = ((/* implicit */signed char) var_6);
}
