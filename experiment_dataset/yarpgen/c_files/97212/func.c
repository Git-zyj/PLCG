/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97212
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
    var_16 = (short)-30264;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        var_17 *= ((/* implicit */short) min((((var_14) >> (((((((/* implicit */_Bool) var_9)) ? (arr_9 [i_3 - 1]) : (((/* implicit */int) var_13)))) - (696544285))))), (((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_10))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_14))));
                    }
                    for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))));
                        var_20 = var_15;
                        var_21 = ((((((((/* implicit */int) var_1)) / (var_4))) == ((+(var_14))))) ? (max((((/* implicit */int) ((short) (short)-31724))), ((+(((/* implicit */int) arr_6 [i_4 - 1] [i_2] [i_1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (arr_8 [i_0] [i_1])))) && (((/* implicit */_Bool) arr_10 [i_1]))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (arr_5 [i_2] [i_1] [i_0])));
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2]) >= ((+(((/* implicit */int) var_9))))))) : (-1505760673));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_24 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)31723)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_5] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-1))))))) ? (min(((~(((/* implicit */int) var_2)))), (((-1826217960) | (((/* implicit */int) (short)31728)))))) : (arr_3 [i_0]));
                            var_25 &= var_11;
                            var_26 = ((/* implicit */short) ((int) ((max((((/* implicit */int) (short)31724)), (var_10))) << (((var_15) + (600193703))))));
                        }
                        var_27 = ((/* implicit */short) ((int) max((((/* implicit */int) (short)-31736)), (74077287))));
                    }
                }
                for (short i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                {
                    arr_22 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) max((-616030026), (-1)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_28 = (+((-(var_5))));
                                var_29 *= ((/* implicit */int) ((((((/* implicit */_Bool) 74077287)) ? (arr_16 [i_7] [i_9] [i_9] [i_8 + 1] [i_9 + 1]) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-17722)) : (((/* implicit */int) var_8)))))) > (((-1526055317) - (((/* implicit */int) arr_18 [i_7] [i_8] [i_0] [i_7]))))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */short) var_14);
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_12)), (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */int) max((var_1), (var_13))))))) ? (((/* implicit */int) ((arr_0 [i_0]) <= (var_15)))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) var_7))))) | (arr_1 [i_0] [i_1])))));
                var_32 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (arr_20 [i_0] [i_1] [i_1] [i_0]) : (var_14))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            }
        } 
    } 
    var_33 ^= ((((((/* implicit */int) (short)2104)) << (((((/* implicit */int) (short)-32759)) + (32767))))) << (((((((/* implicit */int) var_12)) + (27498))) - (18))));
}
