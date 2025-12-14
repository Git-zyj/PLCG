/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56593
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
    var_16 ^= var_0;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = 1507026424;
        var_18 += ((/* implicit */long long int) (short)9);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(105111951)))))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        arr_5 [7ULL] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_14))))));
        var_20 = ((/* implicit */unsigned int) (short)-10);
        arr_6 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20455)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (unsigned short)49152))))) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) var_6))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_7 [i_2]), (var_3))))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_0);
                                var_22 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                                var_23 += ((/* implicit */long long int) arr_7 [0U]);
                                arr_20 [i_4] [i_2] [2U] [12] [i_4] = var_11;
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) (short)-10);
                }
            } 
        } 
        arr_21 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((595336661U), (((/* implicit */unsigned int) (short)-5218))))) ? (((/* implicit */int) (unsigned short)2508)) : (((/* implicit */int) max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (short)-32758))))))), (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2]))));
    }
    var_25 = ((/* implicit */long long int) (short)-31584);
}
