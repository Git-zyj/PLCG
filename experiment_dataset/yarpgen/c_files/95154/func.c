/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95154
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
    var_13 |= ((/* implicit */int) var_1);
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))));
    var_15 &= ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        var_17 *= ((/* implicit */unsigned short) var_6);
                        arr_9 [i_1] = ((/* implicit */unsigned long long int) min((((arr_3 [i_1] [i_2] [i_1]) ? (((((/* implicit */_Bool) (unsigned short)31591)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)182)))) : (((((/* implicit */int) (unsigned char)49)) * (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) min(((short)-9), (((/* implicit */short) (unsigned char)201))))) ? (((/* implicit */int) min(((short)-2071), (var_5)))) : (((/* implicit */int) arr_4 [i_3 - 2] [i_2 + 1]))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) max((max((((((/* implicit */int) arr_4 [i_0] [i_2])) * (((/* implicit */int) (unsigned short)17888)))), (((/* implicit */int) (unsigned short)22689)))), (((((/* implicit */_Bool) 4294967280U)) ? (min((((/* implicit */int) (unsigned short)17919)), (var_4))) : ((-(((/* implicit */int) (unsigned char)150))))))));
                        arr_12 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */short) (signed char)-62)), (var_12)))), (((long long int) arr_10 [i_0] [i_2] [i_2 + 1] [i_4] [i_1]))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_19 = ((((/* implicit */int) ((short) var_10))) + (((/* implicit */int) var_9)));
                        arr_16 [i_5] [i_0] [i_0] [i_1] [i_5] |= ((((/* implicit */_Bool) arr_10 [i_1] [i_2 - 1] [i_2] [i_5] [i_5])) ? (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_5]))) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2 - 1])));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((arr_11 [i_6] [i_5] [4U] [2U] [2U]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) : ((+(arr_10 [i_0] [i_1] [i_0] [i_5] [i_6])))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0] [i_1] [i_2] [i_5] [i_5]) : (((/* implicit */long long int) arr_6 [i_5])))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_5] [i_5] [i_5])))))));
                            var_23 ^= ((/* implicit */unsigned short) (~(var_0)));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_2 [i_0])))))));
                        }
                        for (int i_7 = 2; i_7 < 22; i_7 += 1) 
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_0)));
                            var_25 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_3 [i_1] [(short)12] [i_5])) * (((/* implicit */int) (unsigned char)206)))));
                        }
                        arr_23 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_26 -= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_26 [i_1] = ((/* implicit */unsigned long long int) (+((+(1714732312)))));
                        var_27 &= ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_1 [i_2] [i_2]))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [23U] [(short)17]))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_2 + 1]))))) : ((+(((((/* implicit */_Bool) var_5)) ? (var_0) : (var_0)))))))));
                }
            }
        } 
    } 
    var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)62)) & (((/* implicit */int) (signed char)62)))), (((/* implicit */int) ((short) var_12)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
}
