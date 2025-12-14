/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7276
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * (((((/* implicit */_Bool) (short)18326)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))));
    var_19 = ((/* implicit */short) min((var_14), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-18326)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [(short)4] [(short)0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (_Bool)0))))) : (max((((/* implicit */long long int) (short)-1)), (-5280612979295257678LL)))))) ? (((((/* implicit */_Bool) ((long long int) (short)4096))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_0])), (var_0)))))) : (((/* implicit */int) (short)-18325))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] [i_3] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [(signed char)10] [i_3 + 1] [i_0 - 3] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)-18337)) >= (((/* implicit */int) arr_0 [i_0] [i_3 - 1])))))) : (((/* implicit */int) max(((short)1), (min((((/* implicit */short) var_17)), (var_5))))))));
                                arr_17 [i_4] [i_1] [i_4] = ((/* implicit */unsigned char) min((max((((/* implicit */short) arr_6 [i_3 - 2])), (min((((/* implicit */short) var_10)), (arr_5 [i_0 - 2] [i_0 - 2]))))), (var_5)));
                                arr_18 [i_0] [i_3] [i_0] [i_3] [i_0 - 1] = ((/* implicit */_Bool) ((arr_11 [i_0 - 2] [i_0] [i_3] [i_2] [i_3 - 1] [i_4]) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) min((((short) (short)13095)), (((/* implicit */short) var_15))))))));
                                arr_19 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) (((((_Bool)1) || (((/* implicit */_Bool) 5825190623712503651LL)))) ? (((/* implicit */int) arr_0 [i_2] [(unsigned char)3])) : (((/* implicit */int) min((arr_6 [i_0 + 2]), (arr_6 [i_0 + 2]))))));
                                arr_20 [i_3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)83))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((arr_10 [i_0] [i_0] [i_3] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))))) : (((((((/* implicit */_Bool) (unsigned char)90)) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 - 4] [i_0] [(signed char)3]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned char)127))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)8] [i_0 + 2] [i_2] [i_0 + 2])), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) (short)13526)))))) && (var_16));
    /* LoopSeq 2 */
    for (short i_5 = 4; i_5 < 11; i_5 += 3) 
    {
        arr_24 [i_5] = ((/* implicit */short) var_14);
        arr_25 [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)18337)))))) ? (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)(-127 - 1)))))) : ((+(arr_22 [i_5 - 2] [i_5 - 2]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) == (((/* implicit */int) arr_11 [i_5] [i_5] [(short)4] [(short)4] [i_5] [i_5]))))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_28 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)31))))) < (((/* implicit */int) (signed char)-3))))), ((unsigned char)2)));
        arr_29 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (_Bool)1))))) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) min(((unsigned char)21), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) > (((/* implicit */int) (short)24576))))))))));
        arr_30 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6]))) : (arr_26 [i_6])))) || (((/* implicit */_Bool) var_17))));
        arr_31 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) min((min(((short)-18354), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) arr_27 [i_6]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)0)))))) <= (((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_14))))))));
    }
}
