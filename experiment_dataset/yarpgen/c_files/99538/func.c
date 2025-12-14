/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99538
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
    var_20 = ((/* implicit */signed char) min(((short)17687), (((/* implicit */short) (signed char)-85))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3346796936U)) ? (((/* implicit */int) (short)17669)) : (((/* implicit */int) var_17))))) ? (((((/* implicit */int) (short)-17687)) + (((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) var_1)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)17687))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (short)17717))))) << (((33554431LL) - (33554431LL)))));
                    arr_9 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)17687)) == (((/* implicit */int) (short)17687))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) 1771700347U))));
                }
                for (short i_3 = 4; i_3 < 19; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_5] [i_4] [i_3] [i_1] [i_0] = ((/* implicit */short) var_6);
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-85)), (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)86))))));
                                var_25 &= ((/* implicit */signed char) ((short) (_Bool)1));
                                var_26 = ((/* implicit */unsigned int) -6328631581245217846LL);
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)35))))));
                    var_27 = ((/* implicit */int) var_17);
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_1] [i_6] = ((short) (+(((/* implicit */int) (signed char)71))));
                    var_28 &= ((/* implicit */unsigned long long int) (+((+(8433816990671150125LL)))));
                }
                for (long long int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)127);
                    arr_27 [i_1] = ((/* implicit */signed char) ((short) (_Bool)1));
                    var_29 ^= ((/* implicit */signed char) max((((/* implicit */short) (signed char)-88)), ((short)-17687)));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19691)) | (((/* implicit */int) (!(var_1))))))) ? (((((/* implicit */_Bool) (-(2407076191U)))) ? (((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18)))) : ((~(((/* implicit */int) var_17)))))) : ((~(((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_18))))))));
                }
                var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 1099511627775ULL)))));
                var_32 -= ((/* implicit */_Bool) var_13);
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_13))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 1) 
            {
                {
                    var_34 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) 18446742974197923857ULL)))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            {
                                arr_40 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (((unsigned int) (short)17687)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : ((((_Bool)1) ? (8212798542875862414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((var_1) ? (-6761269475683646583LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)38))))) ? ((~(1771700371U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2610835114U) / (32767U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) 1684132182U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))))))));
                            }
                        } 
                    } 
                    var_36 -= ((/* implicit */short) (-(((/* implicit */int) (signed char)66))));
                }
            } 
        } 
    } 
}
