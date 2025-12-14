/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82171
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
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (-(4438795478196109360LL)))))) ? (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_4))))) ? ((+(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_6)))))) : (((/* implicit */int) ((short) var_9)))));
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)236))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) ((unsigned int) (unsigned short)41167));
                                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_4 - 1] [i_4 + 1] [i_1] [i_4 - 3] [i_4 - 2]))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [22])))) ? (((((/* implicit */int) var_11)) | (arr_10 [i_0] [i_0] [i_0]))) : ((~(((/* implicit */int) (unsigned char)236))))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-8764)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) : (2803581728U)));
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) -1447237507720946222LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41170))) : (1447237507720946208LL)))));
                    arr_19 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned char) (short)-1013))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)));
                    arr_20 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(var_0))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_5])))))) ? ((-(((((/* implicit */_Bool) -1751522029090046400LL)) ? (-1751522029090046400LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31366))))))) : (((/* implicit */long long int) (-(var_1))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 23; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) var_12);
                                arr_26 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (unsigned char)59);
                                var_21 = ((/* implicit */unsigned short) min((((-6861779890004741569LL) - (((((/* implicit */_Bool) (unsigned short)25350)) ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1]))))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_6 - 3] [i_1] [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_11 [i_6 - 3] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                                arr_27 [i_0] [i_1] [i_1] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (unsigned short)6447))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)151)) : (arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20614)) && (((/* implicit */_Bool) 4687584179260954029LL)))))))));
                            }
                        } 
                    } 
                    arr_28 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)20)), ((unsigned short)22680)))) ? (-3771715331029074997LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40186)) ? (((/* implicit */int) (unsigned short)17211)) : (-1684168035))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 47989532)) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (-9163652433594914450LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))));
                }
                for (unsigned int i_8 = 3; i_8 < 23; i_8 += 4) 
                {
                    var_22 = arr_14 [i_0] [i_1] [i_1] [i_8 - 2] [i_0];
                    arr_32 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_14);
                }
                var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned short)4796))) && (((/* implicit */_Bool) -5860301570713500373LL)))))));
                arr_33 [i_1] = ((/* implicit */int) ((((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_1] [i_0] [i_1] [i_1])))))));
                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) 2394527130U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0] [i_1]))))))))));
                arr_34 [i_0] [i_0] [i_1] = arr_21 [i_0] [i_1];
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_6);
}
