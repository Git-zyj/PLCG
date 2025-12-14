/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87062
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)0)), (14087372002989000083ULL))))));
    var_21 = ((/* implicit */signed char) var_3);
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (+(var_2))))) ? (var_1) : (var_13)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_11)))) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [7ULL] [i_0]))))), (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (-7689420282051602199LL)))));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2]);
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [8ULL] [(signed char)5] [i_3] [(_Bool)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) | (((/* implicit */int) (unsigned char)229))));
                                arr_17 [i_5] [0] [i_3] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((((((arr_11 [i_5] [i_3] [i_1] [7LL]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [(signed char)2] [i_5]))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-100)), (var_12))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26373))))))));
                                var_23 = ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 9; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (short)14784)) ? (((/* implicit */int) (short)32468)) : (((/* implicit */int) arr_5 [(unsigned char)9] [(unsigned char)9] [i_3])))) | (((int) arr_6 [i_0] [i_1] [i_3] [(_Bool)1])))), (((((/* implicit */int) arr_12 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1])) & (((/* implicit */int) arr_20 [i_6 + 1] [(short)9] [i_6] [i_6]))))));
                                var_25 = ((/* implicit */unsigned int) arr_6 [i_3] [(_Bool)1] [i_6 - 2] [i_6 - 3]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [(_Bool)1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)0] [i_1] [i_3] [(signed char)7])) ? (arr_10 [i_1] [i_0]) : (((/* implicit */int) (signed char)-98))))))))));
                    var_27 *= ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (arr_10 [i_0] [i_0])));
                    var_28 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-86))));
                }
                var_29 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) 1520226324219324685LL)) : (arr_6 [i_0] [i_0] [i_1] [9])));
            }
        } 
    } 
}
