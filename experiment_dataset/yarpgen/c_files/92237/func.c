/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92237
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_14 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_2] [(short)5])) : (arr_0 [i_1 - 1] [i_0])))) ? (arr_3 [2ULL] [i_1 + 1] [(_Bool)1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 - 4] [i_3] [i_3 - 2] [i_3 + 1]))))));
                            var_15 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])))))) * (((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_3 - 2] [i_2])))) : ((+(var_7)))))));
                            arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) min((((var_4) / (arr_5 [i_0] [i_1 - 1] [i_1] [i_0]))), (min((arr_5 [i_1] [i_1 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    for (int i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_16 = ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_0] [(_Bool)1] [i_5]));
                            var_17 = ((/* implicit */short) arr_2 [(unsigned char)5] [i_1 + 1]);
                            var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((1236019156), (1822082873))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_22 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]));
                            arr_23 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) max((((short) ((((/* implicit */_Bool) arr_21 [i_0] [i_6 + 2] [i_6 + 2] [i_6 + 2] [1U])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_10 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) <= (min((((/* implicit */unsigned long long int) arr_11 [i_0] [0] [i_1 - 1] [i_6] [i_7 + 1] [i_6])), (arr_21 [i_0] [i_6] [i_0] [i_6] [i_6 + 2]))))))));
                            arr_24 [i_1] [i_7] [i_6] [i_1] [6U] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_10 [i_6 - 3] [i_6 - 3] [i_1] [i_1])) ? (arr_10 [i_6] [i_6 + 1] [4] [i_0]) : (arr_10 [i_7] [i_6 + 1] [i_1] [i_1])))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((short) arr_4 [i_7] [i_6 - 2] [i_1])))), (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_6 - 1] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_8 [i_6 - 1] [(_Bool)1] [i_6])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_6])))))))));
                        }
                    } 
                } 
                arr_25 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [(_Bool)1])) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((var_7) ^ (var_7)));
    var_21 = ((/* implicit */signed char) var_3);
}
