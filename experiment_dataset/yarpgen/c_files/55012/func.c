/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55012
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2]))) : (arr_0 [i_2])))))) ? ((~(((/* implicit */int) (short)-18109)))) : (((/* implicit */int) arr_9 [i_1])))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 2] [i_2]))))) ? (((/* implicit */int) arr_2 [(unsigned char)2])) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3 + 1] [(short)9] [(short)11] [i_5 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [(short)18])), (arr_22 [(unsigned char)14] [9U])))) : (((/* implicit */int) ((((/* implicit */_Bool) 1101102229U)) || (((/* implicit */_Bool) arr_18 [(short)2])))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_4])) - (((/* implicit */int) (unsigned char)32)))) << (((((/* implicit */int) arr_18 [i_3 + 2])) - (238)))))) : ((~(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [(unsigned short)2])))))))));
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_23 [i_6] [i_6] [i_5 + 1] [21U] [21U] [21U])), (arr_19 [i_4] [i_4] [i_5] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)120)) > (((/* implicit */int) (unsigned char)136)))))) : ((+(arr_11 [i_5 - 2])))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_20 [i_3 + 2] [i_3 + 2] [i_4] [i_4] [i_3 + 2] [i_4]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            {
                var_21 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)30720)), (var_1)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 18; i_10 += 4) 
                {
                    for (short i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        {
                            arr_34 [i_8] [i_8] [i_10] [i_11 - 1] = arr_25 [i_11 + 1];
                            var_22 = ((unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (var_12)));
                            arr_35 [(unsigned short)10] [(unsigned short)10] [i_8] [9U] [i_8] = ((/* implicit */unsigned int) (unsigned short)65535);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_12);
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((((((/* implicit */int) var_14)) + (2147483647))) >> (((var_11) - (1026248779U)))))));
}
