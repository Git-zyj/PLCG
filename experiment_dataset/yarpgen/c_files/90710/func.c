/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90710
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) var_11))))));
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (signed char)16))) + (((/* implicit */int) max(((signed char)-2), ((signed char)29))))));
                    var_15 += ((/* implicit */unsigned short) (~(((((/* implicit */int) ((unsigned char) var_8))) | (((/* implicit */int) ((signed char) (signed char)2)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) var_6);
        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_13))) >= ((+(((/* implicit */int) var_3))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_0))))));
                                arr_24 [i_3] [i_6] [i_5] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                                arr_25 [i_3] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_12))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : ((+(var_4)))));
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) var_1)))));
                    var_19 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) var_8)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) ((_Bool) (+(-1LL))));
                                var_21 -= ((/* implicit */signed char) (+((+(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
