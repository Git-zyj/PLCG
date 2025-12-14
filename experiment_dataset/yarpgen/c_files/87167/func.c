/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87167
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))) == (arr_5 [i_1 + 1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((unsigned int) ((((/* implicit */_Bool) min(((short)-9900), (((/* implicit */short) arr_10 [i_0] [i_0] [i_2]))))) ? (((long long int) var_14)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)61)) : (var_7))))));
                                var_20 = ((/* implicit */unsigned short) (-(((unsigned int) max((((/* implicit */unsigned long long int) var_14)), (var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)4095)) * (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((((/* implicit */int) (short)12207)) << (((/* implicit */int) (_Bool)1)))) >= (min((-177710521), (((/* implicit */int) var_13))))))) : (max(((-(((/* implicit */int) (unsigned char)254)))), (arr_0 [i_2])))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) min((((/* implicit */short) var_13)), (var_2))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)14369))))) / ((+(var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_6 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)203), ((unsigned char)187)))) ? (((/* implicit */int) ((short) var_16))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-102)))))))) ? (((/* implicit */int) (unsigned char)154)) : (((int) var_10))));
    var_23 = var_6;
}
