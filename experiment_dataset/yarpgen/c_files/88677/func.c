/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88677
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), ((+(var_4)))))) ? (min((var_3), (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)22167))))))) : (((((((/* implicit */_Bool) (unsigned short)19)) ? (6519920285060954287LL) : (var_15))) + ((-(var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)67))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_13 [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]))))) : (((/* implicit */int) min((((/* implicit */short) arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3])), (max((arr_1 [i_0] [i_1]), (arr_4 [i_3] [i_2] [i_1]))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            arr_18 [i_0] = ((/* implicit */signed char) ((short) max((((268434944LL) & (((/* implicit */long long int) 939789191)))), (((long long int) var_0)))));
                            arr_19 [i_1] [i_3] = ((/* implicit */short) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))))), (var_15))), (((/* implicit */long long int) (unsigned short)65535))));
                            arr_20 [i_4] [i_2] [i_3] [i_2] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (short)-31739);
                            arr_21 [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((((/* implicit */int) var_0)) >> (((var_6) - (2733794824U))))) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_26 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_3] [i_3] [i_3])) >> (((arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) - (3322334982U)))))), (max((((/* implicit */unsigned int) arr_24 [i_0 - 2] [i_5] [i_0 - 2] [i_3] [i_3] [i_3] [i_0])), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2])))));
                            arr_27 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) var_7))))) ? (min((var_4), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 - 2] [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1])))))));
                            arr_28 [i_0] [i_1] [i_2] [i_3] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (535822336U)))) ? ((~(((/* implicit */int) (signed char)-48)))) : (((/* implicit */int) ((signed char) 1152919305583591424ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_3] [i_1] [i_1] [i_0 - 2] [i_0 - 2]))) : ((-(min((arr_17 [i_5] [i_1]), (((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5] [i_0])))))));
                            arr_29 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_17 [i_0] [i_0 - 2])))) ? ((+(var_13))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (max(((unsigned short)65516), (((/* implicit */unsigned short) var_0))))))))));
                        }
                        arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] |= (-((+(((((/* implicit */_Bool) arr_17 [i_1] [i_2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_0 [i_0])))))), (((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    var_19 *= ((/* implicit */int) max((min((arr_31 [i_7]), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7]))) : (arr_32 [i_6] [i_7]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_6 + 1] [i_8])))))));
                    arr_39 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (unsigned short)0);
                    arr_40 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((long long int) arr_33 [i_6]));
                    arr_41 [i_6] = ((/* implicit */unsigned short) arr_36 [i_6] [i_7]);
                    arr_42 [i_6] [i_6] = arr_38 [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1];
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (unsigned short)2))))) ? (((/* implicit */int) ((signed char) 25))) : ((~(((/* implicit */int) var_10))))))));
}
