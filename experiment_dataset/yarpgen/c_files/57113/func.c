/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57113
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (2785713024993714631LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)248)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned long long int) (short)-9351)), (6955973990325160165ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)248))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-268)) ? (((/* implicit */unsigned long long int) var_7)) : (15846191580122855546ULL))) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */int) (short)-9353)) % (((/* implicit */int) (short)-263)))) : (var_2))) + (182))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2])), (-2785713024993714631LL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-263))))) : (((((/* implicit */_Bool) (unsigned short)53840)) ? (3ULL) : (((/* implicit */unsigned long long int) -2785713024993714630LL))))));
                                arr_13 [i_0] [(unsigned short)16] [i_2] [i_2] [i_3] |= ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)8190), (((/* implicit */unsigned short) var_4))))), (max((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2])), (arr_3 [i_0 - 1])))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-3))))))), (((((/* implicit */_Bool) 2785713024993714633LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)-268)))))) : (1610612736U))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-265)) : (((int) var_15))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6481)) ? (7U) : (2148764983U)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_6] [i_2] [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) : (8281862958349701236LL)))))) ? (((((/* implicit */_Bool) 3381456913U)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) arr_12 [(unsigned char)3] [(unsigned char)3] [12ULL] [i_6] [i_0 - 1] [i_2] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)11227)) : (-2071851131))) : (((((/* implicit */_Bool) var_15)) ? (1855278573) : (((/* implicit */int) (unsigned short)19212))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 3LL))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) (short)-263)))))));
                    }
                }
                arr_20 [7] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 + 1])), (1776863475)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */int) (short)-263))))) > (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1] [i_1] [i_1] [14U])) ? (var_15) : (((/* implicit */unsigned int) var_10)))))))) : ((-(3381456923U)))));
            }
        } 
    } 
    var_26 -= ((/* implicit */short) 778828719);
}
