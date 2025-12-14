/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85377
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_2]) : (arr_6 [i_1]))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (arr_6 [i_0])))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) var_1)))))))))) & (min((arr_6 [(unsigned short)3]), (((/* implicit */long long int) var_11))))));
                }
                for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((min(((~(12425751637559295635ULL))), (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */long long int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    arr_13 [(_Bool)1] [i_1] [11] = ((/* implicit */long long int) ((min((arr_4 [i_3 - 3] [i_3 - 3] [i_3]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_1])))))) > (((/* implicit */unsigned long long int) var_3))));
                }
                arr_14 [i_1] [i_0] = ((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned long long int) ((int) arr_3 [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_20 = ((short) min((((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14))), (((/* implicit */long long int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                                arr_29 [i_5] = ((/* implicit */unsigned short) arr_21 [i_5] [i_5] [12LL] [i_5]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) max(((~(arr_27 [i_4 + 1] [i_4 + 1] [i_4 - 2]))), (((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */short) arr_23 [i_4 - 1])))), (((/* implicit */short) arr_23 [i_5])))))));
            }
        } 
    } 
}
