/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67606
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-2899507469482726420LL)))))) ? (var_3) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
    var_13 = (~(((/* implicit */int) (!(var_10)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4 - 1] = ((/* implicit */signed char) max((arr_5 [i_0] [i_1 + 1] [(signed char)0]), (((/* implicit */unsigned long long int) arr_1 [i_4 - 2]))));
                                arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(2232078817U))))));
                            }
                        } 
                    } 
                    var_14 &= (+(arr_1 [i_1 - 1]));
                    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1])) ? (arr_7 [i_0] [7ULL] [i_0] [i_1 - 1]) : (arr_7 [i_0] [12LL] [i_2] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_1 + 1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                arr_21 [(signed char)6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (((/* implicit */int) arr_2 [i_5] [i_5])) : (((/* implicit */int) arr_2 [(short)0] [i_6])))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)19465)))))));
                                var_17 = ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) arr_28 [i_5] [i_9] [i_7 - 2] [7ULL])));
                                arr_30 [i_5] [i_6] [(_Bool)1] [(unsigned char)9] [i_9] = ((/* implicit */signed char) (unsigned short)24175);
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (signed char)-3))));
                                var_19 |= ((/* implicit */unsigned long long int) ((short) (~(arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(arr_22 [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_3 [i_7 - 3] [3LL] [i_5])) : (((/* implicit */int) arr_28 [i_5] [i_6] [7LL] [i_5])))))))) ? (((/* implicit */int) arr_23 [i_5] [4LL] [i_5])) : (((/* implicit */int) min((((/* implicit */short) (signed char)-104)), ((short)25152))))));
                }
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_38 [(signed char)5] [i_6] [i_10] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)13825))))), (arr_0 [i_5])))) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_11] [i_12]))));
                                var_21 = ((/* implicit */unsigned short) arr_1 [i_11]);
                                var_22 -= ((/* implicit */short) (unsigned short)32768);
                                var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2899507469482726420LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25153))));
                                var_24 += ((/* implicit */short) arr_7 [i_11] [i_6] [i_10] [(_Bool)0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = var_3;
}
