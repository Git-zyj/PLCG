/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67874
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~((+(var_11)))));
                arr_6 [i_0] &= ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)5))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_10))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57346)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_5] [i_6] [i_4 + 3] = ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) var_0))))))));
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)205))));
                }
            } 
        } 
        arr_19 [i_4] = var_0;
        var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_9))))));
    }
    for (long long int i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_6))));
        arr_22 [i_7 + 1] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_12))))));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_25 [i_8] |= ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
        var_23 |= ((/* implicit */unsigned short) var_8);
        var_24 |= ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        var_25 = (!(((/* implicit */_Bool) var_14)));
        var_26 = ((/* implicit */unsigned short) (-((-(var_15)))));
    }
}
