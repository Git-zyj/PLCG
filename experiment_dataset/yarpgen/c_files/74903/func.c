/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74903
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1]))))), ((~(((/* implicit */int) var_14))))))) ? (((/* implicit */int) min((((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (_Bool)1)))), ((!(var_11)))))) : (((/* implicit */int) var_1))));
                arr_6 [9ULL] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (2107192011130036279LL))), (((/* implicit */long long int) (unsigned short)4360))))) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0]))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))) && (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) var_8))))) || (arr_7 [i_3])))), (((((/* implicit */_Bool) (short)-10889)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))));
                var_18 ^= ((/* implicit */_Bool) (unsigned char)219);
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_16 [i_2] [19] [i_4] = ((/* implicit */signed char) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */long long int) arr_15 [i_3])), (-2107192011130036292LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_11 [i_2 + 1] [i_2 + 2]), (((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) (short)2639)))))))) ? (((((/* implicit */int) (unsigned char)15)) >> (((((/* implicit */int) (unsigned char)84)) - (64))))) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_4]))));
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_22 [i_2] [i_3] [i_6] [i_5 + 1] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))) != (((/* implicit */int) (!((_Bool)0))))));
                                arr_23 [i_6] [i_6] [i_4] [i_6] [i_2 + 3] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_13 [i_4]), (arr_13 [i_2 + 3])))) | (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (short i_8 = 4; i_8 < 7; i_8 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_20 &= ((/* implicit */unsigned long long int) arr_14 [i_7] [i_8] [i_7] [i_8 + 1]);
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_12 [i_8 + 1] [i_8] [i_7]))));
                }
                for (unsigned char i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_8 - 1] [i_7])), (var_2)))) || (((/* implicit */_Bool) var_8))));
                        var_23 = ((/* implicit */_Bool) (~(min((arr_9 [i_8 + 3]), (arr_9 [i_7])))));
                    }
                    var_24 = ((/* implicit */_Bool) var_1);
                }
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_46 [i_7] = ((/* implicit */unsigned char) ((unsigned short) arr_35 [i_8 - 3] [i_8 + 3] [i_8 + 4] [i_8 + 2]));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(arr_15 [i_13])))) : (min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), ((+(9223372036854775807LL)))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_11), (arr_43 [i_8 + 4] [i_8] [i_12] [(_Bool)1])))) ^ (((/* implicit */int) arr_43 [i_8 - 1] [i_8] [i_8 - 1] [i_13]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
