/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61319
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (((((/* implicit */_Bool) (unsigned short)9444)) ? (3U) : (3U)))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) arr_3 [i_4]);
                                var_16 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) arr_4 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */short) var_4);
    var_18 = ((/* implicit */int) (_Bool)1);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_8))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_6)))))))) ? ((((!(((/* implicit */_Bool) 7340032LL)))) ? (((/* implicit */long long int) max((4294967293U), (((/* implicit */unsigned int) var_6))))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) << (((var_12) - (1951634530U)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min(((unsigned short)18558), (((/* implicit */unsigned short) (signed char)-49))))))))));
}
