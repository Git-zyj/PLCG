/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86637
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) && (((/* implicit */_Bool) var_16)));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((min((arr_10 [i_0 + 1] [i_1 + 1] [i_2] [(unsigned char)0] [i_4]), (var_13))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)-24329)))))))));
                                var_19 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)243))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19974))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(_Bool)1]))))))))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */int) (unsigned short)41771)), ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16309)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))))))))));
                arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((((!(((/* implicit */_Bool) (unsigned short)23764)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8))))) : (arr_8 [i_0 + 1]))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) | ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)41766)))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) min((((/* implicit */int) var_15)), (max((((/* implicit */int) ((((/* implicit */int) (unsigned short)58490)) >= (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) var_14))))))));
}
