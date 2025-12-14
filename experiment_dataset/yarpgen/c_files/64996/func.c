/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64996
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), (var_4))))))) : (var_2)));
                            var_11 = ((/* implicit */unsigned int) var_8);
                            arr_10 [i_2] = max((((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)5] [(unsigned char)5] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_9 [(signed char)4] [i_3] [(signed char)10] [i_1] [i_0])), ((unsigned char)17)))) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [0U] [4LL] [(_Bool)1]))))))))));
                            var_12 = ((/* implicit */unsigned long long int) arr_9 [i_0] [2] [i_0] [i_2] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_4 + 2] [i_4] [i_4])) ? (((/* implicit */int) max(((unsigned char)17), ((unsigned char)18)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) % (((/* implicit */int) (short)-2940))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_4 - 1] [i_4 - 1])) ? (arr_14 [i_4] [i_4 - 1] [i_4] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_4 - 1] [i_5] [i_1])))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1] [i_4 - 1] [i_5])) : (((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 4])) >= (((/* implicit */int) var_9)))))));
                            arr_16 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */long long int) arr_15 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_5] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            {
                arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_20 [i_6 + 2] [i_6 + 3] [i_6 + 2])), (var_0))))));
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) (unsigned char)245);
                    var_16 = ((/* implicit */long long int) var_6);
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    arr_29 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */long long int) arr_26 [i_6 - 1] [i_7]);
                    arr_30 [i_6 - 1] [i_7] [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((16777215LL), (((/* implicit */long long int) (unsigned char)7))))) ? (16568624353715202317ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4193792U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9] [i_6 - 1]))) : (arr_19 [i_9] [i_7]))))))));
                    arr_31 [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-2931)), (arr_20 [i_6 - 1] [i_7] [i_9])))) : (((/* implicit */int) arr_24 [i_6] [i_7] [i_7] [i_9]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6 + 1]))) / (var_2)))));
                }
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_7)), (var_5))), (((/* implicit */unsigned long long int) (short)22628)))))));
                            /* LoopSeq 3 */
                            for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                            {
                                arr_41 [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_26 [i_6] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [(unsigned char)12] [i_12])) ? (((/* implicit */int) arr_39 [i_6] [i_7] [i_10 + 3] [i_11] [i_12])) : (((/* implicit */int) (unsigned char)30))))) : (arr_36 [i_10] [i_7] [i_7] [(signed char)14]))), (max((max((arr_19 [i_6] [i_12]), (var_3))), (((/* implicit */long long int) (short)-30475))))));
                                arr_42 [i_6] [i_7] [i_10 - 1] [i_7] [i_12] [i_12] = ((/* implicit */unsigned short) var_2);
                                arr_43 [i_6] [i_6 - 1] [i_7] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) arr_33 [i_6] [i_6] [(_Bool)1]);
                            }
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                arr_47 [i_7] [i_7] [i_10] [i_11] = max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_4))))))), (min((((/* implicit */long long int) 1258451014U)), (var_3))));
                                arr_48 [i_7] [i_11] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_18 [i_10 - 1] [i_6 - 1])), (arr_28 [i_10 + 3] [i_10 - 1] [i_6 - 1]))), (((/* implicit */unsigned int) (unsigned char)16))));
                                arr_49 [i_6] [16LL] [i_6] [i_7] [i_6 + 2] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(max((-5075091279658057859LL), (((/* implicit */long long int) (_Bool)0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 + 2] [i_7])) ? (((/* implicit */unsigned int) var_0)) : (4193792U)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1754076155)), (arr_28 [i_6 - 1] [i_7] [i_10]))))))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_6)))))) >= (268435455LL))) ? (min((((/* implicit */long long int) (signed char)7)), (arr_45 [(unsigned short)11] [(unsigned short)11] [i_6] [i_10 + 3] [(unsigned short)11] [i_11] [i_11]))) : (arr_45 [i_11] [13U] [i_10 + 2] [3LL] [0LL] [i_11] [i_10 + 2])));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                            {
                                arr_54 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_7]))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_45 [2] [i_6] [i_6 + 1] [i_10 - 2] [i_10 - 2] [16ULL] [i_10])));
                                var_20 = ((/* implicit */unsigned short) arr_19 [i_11] [16LL]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_7), (var_7)));
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
}
