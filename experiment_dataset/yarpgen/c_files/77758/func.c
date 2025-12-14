/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77758
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
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_15 ^= ((/* implicit */int) ((short) (~(arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] [i_4]))));
                            var_16 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_3]);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) 2473578498U)) && (((/* implicit */_Bool) arr_7 [i_4])))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63596))))))));
                        }
                        var_17 = ((/* implicit */unsigned short) ((1821388797U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (unsigned short)2043)) : (((/* implicit */int) (unsigned short)25988))))))));
                        var_19 = ((/* implicit */signed char) min((var_19), ((signed char)-91)));
                        arr_16 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((min(((-(((/* implicit */int) arr_15 [i_5] [i_2] [i_0])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)63612)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))) - (((/* implicit */int) (signed char)99))));
                    }
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (unsigned short)64916))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3107445963U))))), ((unsigned short)63492)))))))));
                }
            } 
        } 
    } 
}
