/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74737
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((min((var_13), (max((9223372036854775807LL), (-1654977997056665722LL))))), (min((((((/* implicit */_Bool) var_9)) ? (1654977997056665719LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) var_2))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) var_6))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3775128130U)))) < (arr_0 [i_0])));
        arr_3 [6U] |= ((((/* implicit */int) (unsigned char)138)) ^ (((/* implicit */int) (unsigned char)152)));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) <= (((/* implicit */int) ((_Bool) arr_4 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (1654977997056665722LL)))) ? (var_5) : (((/* implicit */int) arr_5 [i_1])))) : (1456739274)));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (((~(var_5))) | (min((-598415660), ((~(((/* implicit */int) (_Bool)1))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_12))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (2131589829U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2196))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))) ? (var_9) : (((((/* implicit */_Bool) (short)-2172)) ? (var_6) : (((/* implicit */unsigned int) var_5)))))))));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_11))));
}
