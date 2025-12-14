/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99417
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
    var_12 += ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) ^ (var_7)));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)125)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned char) ((int) (~(var_10))));
                                var_17 = ((/* implicit */long long int) var_3);
                                var_18 = ((/* implicit */unsigned short) (+(var_0)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_0] = ((/* implicit */unsigned int) (((-(var_10))) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_19 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_6)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_1)))));
                    arr_20 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) || ((!(((/* implicit */_Bool) var_1))))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned char) var_8));
        arr_26 [6U] [6U] &= max((((unsigned short) min((var_4), (((/* implicit */unsigned int) var_9))))), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_5)), (var_0))) > (((/* implicit */unsigned long long int) var_6))))));
        arr_27 [i_7] [i_7] = ((/* implicit */int) ((signed char) ((var_6) >> ((-(0LL))))));
        var_21 = ((/* implicit */unsigned short) var_0);
        var_22 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_9))))) & (((/* implicit */long long int) 1644517345U))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            for (signed char i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    {
                        arr_40 [i_8] [(short)5] = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned int) (unsigned char)152)), (var_4))), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)152)))), (((/* implicit */int) (unsigned char)152)))))));
                        arr_41 [i_8] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((_Bool) ((-5189427314175577431LL) + (var_5))))), ((signed char)0)));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */signed char) ((min((var_6), (((/* implicit */unsigned int) var_3)))) / (((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) var_2)), (5189427314175577431LL)))))));
        var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | ((+(var_0)))));
    }
}
