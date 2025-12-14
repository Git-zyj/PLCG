/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59742
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned char) (-(((long long int) min((((/* implicit */unsigned long long int) arr_0 [9])), (18446744073709551606ULL))))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 6; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((short) var_11))) ? (arr_1 [i_1] [i_1]) : (((unsigned long long int) arr_0 [i_1])))) != (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (1864754336411888985ULL))), (((/* implicit */unsigned long long int) (~(655910634109111862LL)))))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) arr_0 [(short)17]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_12 [i_4] [i_2] [(unsigned char)2] [2U] [i_2] &= ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551612ULL))))) != (((/* implicit */int) ((unsigned char) (unsigned short)27649))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 + 3] [(_Bool)1] [i_3])) ? ((~(arr_11 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25717)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) ((var_6) != (((/* implicit */long long int) var_4))))), (((unsigned int) (short)15)))));
                        var_18 = ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1] [i_3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-8))))))) / (max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_5] [i_2])))));
                        arr_15 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */short) arr_8 [i_1] [i_5] [7U] [7LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27649)) ? (arr_11 [i_5] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)7))))))))) : (((((/* implicit */_Bool) ((short) -6047368005932672973LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_5))))) : (((12599214109469481313ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                        arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-403))))) ? (((/* implicit */unsigned long long int) min(((+(arr_10 [5ULL] [5ULL] [i_3]))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */short) arr_3 [i_1])))))))) : (((unsigned long long int) ((((/* implicit */int) (short)31623)) << (((((var_9) + (3546096957053903879LL))) - (14LL))))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) arr_4 [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_4 [i_6 + 3])))))) : (((((/* implicit */_Bool) arr_4 [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 + 1]))) : (18446744073709551606ULL)))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_9))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(max((((_Bool) var_12)), (((0U) > (((/* implicit */unsigned int) 1048575)))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 0U)), ((~(((long long int) 1048575))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)170)), (var_1)))))) : (max((((var_6) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */long long int) 153190601)))))))));
                        arr_32 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((-1LL), (((/* implicit */long long int) arr_4 [i_1]))))))) ? (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) (short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) : (18446744073709551603ULL)))))));
                        arr_33 [i_10] [i_10] [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 1496752808737437671LL)))))), (((((/* implicit */_Bool) ((493071344811658749LL) << (((((((/* implicit */int) (short)-15)) + (75))) - (57)))))) ? ((-(((/* implicit */int) (unsigned short)25855)))) : (((/* implicit */int) min(((short)3186), (((/* implicit */short) (unsigned char)13)))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_11 = 2; i_11 < 8; i_11 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) max((min((((/* implicit */int) (signed char)99)), (-2147483628))), (((((/* implicit */_Bool) (short)-7594)) ? (((/* implicit */int) arr_26 [i_11] [i_11])) : (2147483620)))));
        arr_37 [i_11] = ((/* implicit */unsigned short) ((unsigned char) (((!(((/* implicit */_Bool) (short)-8)))) ? ((-(((/* implicit */int) arr_26 [i_11] [i_11])))) : ((~(((/* implicit */int) (_Bool)0)))))));
    }
}
