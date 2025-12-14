/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56634
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
    var_12 &= ((/* implicit */int) var_7);
    var_13 = ((/* implicit */_Bool) ((int) (((+(((/* implicit */int) var_6)))) >= ((~(((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 += (~(arr_1 [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0]))));
                                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) (short)-29154)) ? (15492332854686512566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))))), (((((/* implicit */int) arr_5 [(unsigned char)17])) - (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) 15492332854686512566ULL)) ? (((/* implicit */int) var_9)) : (var_0)))))));
                }
            } 
        } 
    } 
    var_18 = var_4;
    var_19 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned short)16352)) && (((/* implicit */_Bool) (unsigned char)239)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-23462)))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8007))) <= (209836581U)))) & (((/* implicit */int) (unsigned char)222))))));
}
