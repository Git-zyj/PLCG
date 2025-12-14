/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82457
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (arr_1 [i_0 + 3]) : (5350371684882971143ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) : (var_13))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)19347))))))))));
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((835320811U) ^ (arr_0 [i_0] [i_0])))))) && (((/* implicit */_Bool) var_4))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2426622023561460940LL)), (((unsigned long long int) 4095LL))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (unsigned short)40051))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned char)48))))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12U]))) : (arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) var_13)) ? (-7100617428398472056LL) : (7100617428398472048LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? ((((~(var_7))) ^ (((/* implicit */unsigned long long int) arr_9 [i_1])))) : (((/* implicit */unsigned long long int) ((-6422550507839407647LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-30257))))))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [20LL])) : (((/* implicit */int) ((short) var_4)))))) ? (max((arr_0 [i_4] [i_4 - 1]), (((/* implicit */unsigned int) (unsigned short)31340)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)30250))))))))));
                            arr_18 [i_1] [i_5] [(unsigned short)0] [i_4] [(unsigned short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) arr_16 [i_5])), (max((((/* implicit */unsigned long long int) var_2)), (15006357660044932557ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 2] [i_3]))) * (((((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_15 [i_1] [(short)2] [(unsigned short)12] [i_4 - 1] [(unsigned short)12]))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_12 [i_1] [i_2 + 2] [i_1])) / (((/* implicit */int) max(((short)-30250), (((/* implicit */short) arr_5 [i_1] [i_1]))))))));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_25 [i_1] [i_1] |= ((/* implicit */unsigned char) ((short) arr_1 [i_1]));
                arr_26 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (_Bool)1);
            }
            arr_27 [i_6] = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_16 [i_1])) : (arr_8 [i_1]))))), (((/* implicit */long long int) (unsigned short)52254))));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        var_18 &= ((/* implicit */short) arr_20 [i_8] [i_8] [i_1]);
                        arr_37 [i_1] [0U] [(unsigned short)6] [i_1] [0U] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -1238741579)) ? (-1) : (((/* implicit */int) (unsigned char)255)))));
                        arr_38 [5U] [5U] [i_8] [13U] [13U] = ((/* implicit */long long int) var_13);
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_19 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((-5108772276237871368LL) / (var_5)))) ? (((arr_32 [i_1]) * (350293872U))) : (max((var_8), (arr_0 [5ULL] [i_9])))))), (((max((var_5), (((/* implicit */long long int) arr_15 [i_9] [10LL] [12LL] [i_9] [i_9])))) + (((/* implicit */long long int) ((/* implicit */int) arr_33 [13LL] [13LL] [i_9] [i_9 + 2])))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) arr_36 [i_1] [i_1] [i_9] [2]))))) - (182575042)))) ? (max((((((/* implicit */int) var_10)) - (((/* implicit */int) arr_31 [i_1] [(unsigned char)3] [i_1])))), (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_11]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)15)))))))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16731))) | (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [11U] [13] [i_9] [i_9]))))))) : (var_9))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                    arr_41 [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)30257)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((short) var_13)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_10)), (((min((var_0), (((/* implicit */unsigned long long int) var_9)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_12))))))))))));
}
