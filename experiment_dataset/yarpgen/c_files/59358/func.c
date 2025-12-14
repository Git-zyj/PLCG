/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59358
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
    var_16 = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) var_2))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((var_11) >> (((var_3) - (11635942378654566425ULL))))))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_9)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) var_4);
        var_20 = ((/* implicit */unsigned char) ((_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((3715412428U) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
        arr_2 [i_0 - 1] |= ((/* implicit */short) ((_Bool) (short)-11239));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((short) ((unsigned long long int) var_4)));
            var_22 |= ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) != (arr_3 [i_2 + 2]));
            var_23 = ((/* implicit */signed char) var_12);
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (arr_5 [i_2 + 2] [i_1]) : (arr_5 [i_2 + 2] [i_1]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (2893458037U))));
            var_25 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) max((arr_8 [i_3] [i_1]), (((/* implicit */signed char) var_12)))))))));
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 3] [i_4 + 3])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)2044))))))));
                arr_16 [i_1] [i_1] [i_1] [i_1] |= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2019))))) ? (max((18446744073709551598ULL), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4 - 1] [i_4 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(_Bool)1] [i_4 - 1] [i_4 + 2])))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_27 -= min(((~((~(((/* implicit */int) arr_8 [(unsigned short)7] [(unsigned short)7])))))), (((/* implicit */int) var_14)));
                            var_28 = max((max((max((((/* implicit */unsigned int) arr_8 [i_1] [11LL])), (arr_13 [0ULL] [i_3]))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)2019)), (var_13)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((var_9), (min((arr_18 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_2))))))), (((unsigned long long int) max(((short)32767), ((short)-2020))))));
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34489)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_5 [i_7] [i_7 - 1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_2))))));
                var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) (unsigned char)210))), (min((((/* implicit */unsigned long long int) arr_4 [i_7])), (var_3)))))) || (((/* implicit */_Bool) arr_8 [i_3] [i_1]))));
                arr_23 [i_1] [i_3] [i_7] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) == (13508137055014474210ULL)))));
            }
            var_32 = ((/* implicit */_Bool) min((arr_13 [i_3] [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_8] [i_1])) ? (arr_27 [i_8]) : (((/* implicit */int) (short)-2045)))))));
            /* LoopSeq 1 */
            for (int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                arr_30 [i_9 + 2] [i_8] [i_1] = ((/* implicit */unsigned char) ((((_Bool) (signed char)-76)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_21 [i_9 + 2] [i_9 + 1] [i_8]))));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_25 [i_8]))));
            }
        }
        arr_31 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_10), ((short)32767)))) >= (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)62813)) ? (((/* implicit */int) (unsigned short)2733)) : (((/* implicit */int) arr_22 [i_1]))))))));
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_14 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)28), (((/* implicit */unsigned short) arr_10 [i_1] [i_1]))))))))) ? (((/* implicit */unsigned long long int) min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)28))))) : (((((/* implicit */unsigned long long int) 6LL)) ^ (var_3)))));
    }
}
