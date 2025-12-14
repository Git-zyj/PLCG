/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9370
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)53716))));
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2197039136U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25040))) : (var_17)))) * ((+(18446744073709551605ULL))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_16))))) >= (((((/* implicit */int) var_16)) * (((/* implicit */int) var_15)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_3] = ((((/* implicit */int) (((~(((/* implicit */int) var_1)))) >= (((/* implicit */int) var_7))))) >= (((/* implicit */int) (unsigned short)53716)));
                            arr_14 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)11820))));
                            arr_15 [i_0 + 1] = ((/* implicit */unsigned int) (((((~(((((((/* implicit */int) (short)-25040)) + (2147483647))) << (((11767941007317997654ULL) - (11767941007317997654ULL))))))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 + 1])) >= (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1])))))));
                            arr_16 [i_0] [i_0 + 1] [(unsigned char)17] [i_0 - 1] = ((/* implicit */unsigned char) (~(((var_5) << ((((-(((/* implicit */int) var_11)))) + (223)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((_Bool) var_17)))));
    var_20 += ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            {
                arr_22 [i_5 + 1] [i_5] = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) (unsigned char)39)))))) << (((((/* implicit */_Bool) 760293474695285583LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))))))));
                var_21 = min((var_12), (((/* implicit */unsigned int) var_7)));
            }
        } 
    } 
}
