/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88363
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
    var_20 = ((/* implicit */short) var_3);
    var_21 = ((/* implicit */unsigned long long int) var_13);
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10630713684576111695ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30235))) : (1724052539U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_12)) ? ((~(var_6))) : (((/* implicit */unsigned long long int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+((~(arr_3 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_24 = ((/* implicit */int) var_7);
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) (+((+(178811073)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3 - 1]))))) | (((arr_11 [i_0] [i_1] [i_2] [i_0] [i_3 - 1]) - (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3 + 1])))));
                    }
                    for (int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_0] [i_2] [i_4] = max(((-(((((/* implicit */_Bool) (short)-28252)) ? (((/* implicit */int) arr_0 [(short)3])) : (arr_1 [i_2]))))), (((/* implicit */int) var_18)));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) 1))));
                    }
                }
                var_27 = ((/* implicit */short) max((max((arr_8 [i_0] [i_1] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (((+(arr_13 [i_0] [i_0] [i_0]))) < (((/* implicit */int) var_17)))))));
            }
        } 
    } 
}
