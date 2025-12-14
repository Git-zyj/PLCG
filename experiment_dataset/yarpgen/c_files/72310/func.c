/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72310
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 531287931U))));
    var_21 = ((/* implicit */long long int) var_13);
    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -8980930325581480881LL)) ? (((((/* implicit */_Bool) 1305703537U)) ? (1401771599808597624LL) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46018)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_23 = ((arr_12 [i_0] [i_2] [i_3]) | (((((/* implicit */_Bool) 403539677550175494LL)) ? (-870840760408928364LL) : (((/* implicit */long long int) 1180024185U)))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 942426599))))))))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 2437632838U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((7340032), (((/* implicit */int) (unsigned short)44878))))))))))))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((6494147559786200301LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20680))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_0 [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((arr_6 [6U]) < (arr_0 [3LL] [i_4 + 1]))))) * (arr_3 [i_3]))))))));
                            }
                        } 
                    } 
                    arr_13 [4LL] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) + (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1402964523U)))))) : (arr_10 [i_0] [i_0] [(unsigned short)12] [i_2] [i_0 - 1] [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0]) : ((~(arr_9 [i_2]))))) : (arr_12 [i_0 - 1] [i_0 - 1] [i_2]));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2790220298U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42166))) : (4294967295U)));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        var_28 = ((/* implicit */int) ((unsigned short) (+(((-7340033) & (((/* implicit */int) (unsigned short)44876)))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2935227517214141887LL)))))) * (((3483009508U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20680))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        arr_17 [i_2] [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) arr_2 [10LL]));
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_21 [i_2] [i_1] [7LL] = ((unsigned short) min((0LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [6LL] [2LL] [6LL])) && (((/* implicit */_Bool) -1682193405470890604LL)))))));
                        var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_0 + 1])) : ((~(114688U)))))));
                    }
                }
            } 
        } 
    } 
}
