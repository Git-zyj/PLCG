/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97366
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
    var_17 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 1848069876U);
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_4))));
                                arr_14 [i_0 + 1] [i_0] = (-9223372036854775807LL - 1LL);
                                arr_15 [(unsigned char)2] [i_1] [i_2] [(unsigned char)2] [i_3 + 1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_3 + 3] [i_0] [i_4])) ^ (((/* implicit */int) (unsigned short)32704))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 + 1]))) : (((var_14) << (((((/* implicit */int) var_12)) - (143))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 3856000991U))));
                    var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_1] [i_0])) ? (8712248276724292536LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-1)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_0] [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174)))))) || (((/* implicit */_Bool) var_0))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) var_13)))))) ? ((((!(((/* implicit */_Bool) var_11)))) ? (1197491540U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) (unsigned short)39494))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((short) var_15)))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 4; i_7 < 16; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (short i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((short) var_2));
                        var_25 = (short)-13;
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_26 -= ((/* implicit */short) var_5);
                        var_27 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_27 [i_7] [i_7 - 4] [i_11]))))));
                    }
                    var_28 -= ((/* implicit */unsigned short) min(((~(arr_31 [i_7] [i_8] [i_8] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)33695)) : (((/* implicit */int) (short)7)))))));
                }
            } 
        } 
    } 
}
