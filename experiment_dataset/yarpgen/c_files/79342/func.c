/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79342
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((unsigned short) (+(var_6))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 909344084)) ? (((/* implicit */int) (short)16437)) : (((/* implicit */int) (short)16439)))) != (((/* implicit */int) min(((short)16432), (((/* implicit */short) var_7))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 += ((/* implicit */long long int) min(((+(((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (short)-16412);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)16430)), (arr_2 [i_0])))))) : (var_16)));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((arr_5 [i_0] [i_1] [i_2]) + (2147483647))) << (((((/* implicit */int) (signed char)64)) - (64))))) / (((/* implicit */int) (short)-16439))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44547)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 2] [i_0]))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_2 [i_0]))))) : (((((/* implicit */_Bool) 4294967290U)) ? (var_8) : (((/* implicit */unsigned long long int) var_10))))))));
                    arr_9 [i_2 - 2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(arr_5 [i_0] [i_1] [i_2 + 2]))) - (max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */int) var_11))))))) * (arr_4 [i_0] [i_1] [i_2])));
                }
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-16440)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))))))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-16433))))) % (min((var_1), (arr_10 [i_4]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (short i_7 = 3; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_20 [(short)14] [(short)14])))))));
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) arr_10 [11LL])), ((+((~(var_3)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((int) arr_16 [i_3] [i_4] [i_5]));
                    var_26 = var_12;
                    arr_23 [i_3] [15U] [i_3] [i_3] = ((/* implicit */signed char) (short)14910);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (max((((/* implicit */unsigned int) arr_11 [i_3] [i_3])), (min((((/* implicit */unsigned int) (short)-16439)), (var_9)))))));
    }
    /* vectorizable */
    for (long long int i_8 = 3; i_8 < 18; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_8 + 1] [i_8 - 3]))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)16437)) - (((/* implicit */int) var_11)))) / ((-(var_16))))))));
    }
}
