/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86149
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) var_1);
                    arr_12 [i_0] = ((/* implicit */_Bool) var_9);
                }
                arr_13 [i_0] [i_0] = (((((_Bool)1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) / ((-(max((((/* implicit */long long int) (_Bool)1)), (var_4))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        var_20 = (short)20561;
        var_21 += ((/* implicit */_Bool) (unsigned char)245);
        var_22 = ((/* implicit */unsigned char) (_Bool)1);
        arr_16 [i_3] [i_3 + 2] = ((/* implicit */short) (~(var_0)));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) max(((~((-(((/* implicit */int) (_Bool)1)))))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))));
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))), (max((((/* implicit */unsigned int) var_1)), (arr_17 [i_4] [i_6])))));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = ((long long int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_30 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), ((short)-20562)))) ? ((~(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_17))))))) ? (((/* implicit */int) ((unsigned char) var_0))) : ((-((-(((/* implicit */int) (_Bool)1))))))));
                arr_31 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_16)) - (-1LL)));
                var_25 = ((/* implicit */long long int) var_8);
                var_26 = var_10;
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        arr_35 [i_9] = ((/* implicit */_Bool) ((((-1957239816462642769LL) + (9223372036854775807LL))) << (((var_0) - (2088509795U)))));
        var_28 = ((/* implicit */unsigned char) (~((~(max((-2380279112365086061LL), (((/* implicit */long long int) var_11))))))));
        var_29 = ((/* implicit */unsigned char) 4076267183138760410LL);
    }
}
