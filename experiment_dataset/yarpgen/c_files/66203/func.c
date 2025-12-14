/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66203
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_0 [i_0 - 1] [7LL])))) ? (((/* implicit */long long int) -763131852)) : (arr_4 [i_0 + 1] [i_0] [(unsigned short)12]));
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)238)), (((((/* implicit */_Bool) ((arr_1 [4]) + (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) 2147483647)) : (arr_3 [(_Bool)1] [(_Bool)1] [i_1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                            var_19 = (-(min((((/* implicit */unsigned int) ((var_10) && (((/* implicit */_Bool) var_4))))), (var_1))));
                            var_20 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (5912281785305097301ULL))), (((/* implicit */unsigned long long int) var_8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_0 + 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_9 [i_4] [i_4] [i_4] [i_4])) % (var_12)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_4]))))))) : (((((/* implicit */_Bool) var_14)) ? (2147483647) : (arr_2 [i_4] [i_4])))));
        arr_12 [i_4] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-81)));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_22 = (_Bool)1;
        var_23 = ((/* implicit */long long int) (_Bool)1);
        var_24 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_15 [i_5])), (12608667189631922586ULL))) << (((/* implicit */int) ((_Bool) arr_4 [i_5] [(_Bool)1] [(_Bool)1])))));
    }
    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
    {
        arr_19 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 2147483647)) ? (arr_16 [i_6]) : (-2147483647)))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_26 -= ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            {
                var_27 = ((/* implicit */_Bool) min((((/* implicit */int) (short)(-32767 - 1))), (2147483647)));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8] [i_10]))) : (var_12)))));
                            var_29 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_21 [i_8] [(_Bool)1]), (((/* implicit */long long int) arr_27 [i_9]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_24 [i_7])), (var_7))))))) : (((/* implicit */int) var_11)));
                            var_30 = ((/* implicit */_Bool) (-(((unsigned int) max((-15), (arr_17 [i_8] [(_Bool)1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) (unsigned char)239);
                        arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((int) min((max((((/* implicit */unsigned int) var_15)), (var_13))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_11)) + (16032)))))))));
                        var_32 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */signed char) var_15)), (arr_24 [i_7])))), ((-(((/* implicit */int) var_5))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        var_33 = ((/* implicit */int) min((var_9), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)102)))))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7]))) : (((unsigned int) var_7))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)-72)) : (((arr_31 [(signed char)18] [i_11] [i_11]) ? (((/* implicit */int) arr_18 [i_7] [i_13])) : (((/* implicit */int) var_8)))))) : (min((((int) -394943456)), (min((((/* implicit */int) (_Bool)1)), (var_3)))))));
                    }
                    var_35 = ((/* implicit */long long int) (((((~(arr_27 [i_7]))) < (((/* implicit */int) min(((signed char)38), (((/* implicit */signed char) arr_30 [i_7]))))))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_32 [i_7] [(unsigned char)17] [i_8] [i_11]))));
                }
                for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    var_36 = ((/* implicit */long long int) var_5);
                    var_37 = (signed char)68;
                }
                var_38 = ((/* implicit */short) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_31 [i_7] [i_8] [i_8])) * (((/* implicit */int) (signed char)(-127 - 1)))))));
            }
        } 
    } 
}
