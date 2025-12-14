/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61782
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) arr_7 [i_4 + 2] [i_4] [i_4 + 3] [i_1] [i_0]);
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [12LL] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_7 [i_4] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_7 [i_4] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 + 2])))) & ((~(((((/* implicit */int) (signed char)8)) >> (((((/* implicit */int) var_4)) - (1629)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_17 [i_6] [i_6] [i_2] [i_5] [i_6] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_5 + 3])))));
                                var_18 = ((/* implicit */signed char) arr_8 [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0]), (arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_7] [i_7])), ((+(((/* implicit */int) arr_3 [i_7] [i_8]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_7])) || (((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7])))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7]))))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_11 [i_8])) : (((/* implicit */int) arr_11 [i_7]))))));
                arr_26 [i_8] [i_8] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8])))) + (((/* implicit */int) var_14)))) == (((((/* implicit */_Bool) ((var_1) & (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7] [i_8])) || ((_Bool)1)))) : (arr_20 [12U])))));
                var_21 = ((/* implicit */signed char) arr_23 [i_7] [i_8]);
            }
        } 
    } 
}
