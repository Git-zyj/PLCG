/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94829
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */unsigned char) var_14);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (-1935528272) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)8176))))) : (var_14)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) var_5);
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (0U)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)32704)))) : (((((/* implicit */int) (unsigned char)135)) | (((/* implicit */int) var_11))))));
                                var_18 *= var_2;
                                arr_18 [(unsigned short)8] [(unsigned short)8] [i_2] [i_2] [i_2] = ((((var_11) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) << ((+(0U))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) var_14);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_20 *= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_5))));
    }
    var_22 = ((/* implicit */unsigned char) var_8);
}
