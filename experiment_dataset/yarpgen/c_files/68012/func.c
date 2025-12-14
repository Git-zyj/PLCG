/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68012
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) ? (((((/* implicit */_Bool) 2147483647)) ? (1043078565U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22370))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22370)))))) ? (((((/* implicit */_Bool) (signed char)-98)) ? (((((/* implicit */_Bool) var_6)) ? (-1197408772) : (((/* implicit */int) (unsigned char)153)))) : (((/* implicit */int) (unsigned short)18)))) : (((/* implicit */int) (unsigned char)246))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20987)) ? (((/* implicit */unsigned long long int) -1197408775)) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13259015769774151419ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_6))));
                    arr_10 [3] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18547)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (short)-18548)))) : (((/* implicit */int) (signed char)-115)))))));
                                var_20 = ((/* implicit */int) (short)14244);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (unsigned short)68);
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) (_Bool)0);
    }
    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -1318140583)) ? (((/* implicit */int) (short)22380)) : (var_14)));
}
