/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93015
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) (~(((arr_3 [i_1]) & (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
                            arr_10 [i_0] [i_0] [i_2] [i_1] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 620917325)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4999))) <= (144115188075847680ULL))))) : (((unsigned int) 144115188075847680ULL))));
                            arr_11 [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_3])) ^ (((/* implicit */int) arr_4 [i_1] [i_0]))))) ? (18302628885633703935ULL) : (((/* implicit */unsigned long long int) (~(var_1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_17 [(unsigned short)3] [i_1] [(unsigned short)3] [i_5] = max((((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_4] [i_4])), ((short)-5968)))) ? (arr_14 [i_1] [i_4] [i_1]) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (var_12) : (var_17))))), (((/* implicit */long long int) max((((/* implicit */short) arr_8 [i_4 - 3] [i_4 + 3] [i_4 + 1] [i_4 + 2] [i_4 - 3])), ((short)7)))));
                            arr_18 [i_0] [i_1] [i_0] [(unsigned char)17] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_5] [i_5] [i_4 - 1] [i_4 - 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_1] [i_4 + 3] [i_4] [i_5] [i_5] [i_1])) : (((/* implicit */int) arr_7 [i_4 + 4] [i_4 - 2])))) : ((+(((/* implicit */int) (unsigned short)12951))))));
                            var_20 += ((/* implicit */long long int) (+((-((-(((/* implicit */int) (short)-20640))))))));
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5] [i_1])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 2]))))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-7)) + (2147483647))) >> (((((/* implicit */int) (short)-4639)) + (4652)))))) ? (max((var_13), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)11267), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */short) max((((/* implicit */unsigned int) var_0)), ((((-(var_13))) - (((/* implicit */unsigned int) var_1))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            {
                arr_25 [i_6] [i_6] = ((/* implicit */_Bool) ((arr_16 [i_7 + 1] [i_7 + 3]) << ((((((-(((((/* implicit */_Bool) (short)20634)) ? (var_15) : (((/* implicit */int) var_9)))))) + (1244685293))) - (49)))));
                arr_26 [i_6] [i_6] = ((/* implicit */_Bool) arr_24 [i_7 - 1]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_0);
}
