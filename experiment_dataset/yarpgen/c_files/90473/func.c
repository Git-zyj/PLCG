/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90473
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [(unsigned char)0] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) arr_5 [3] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (var_11)))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_1]))))) : (((/* implicit */int) (!(arr_3 [(_Bool)1]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_12 [i_3] [8ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((var_13) | (arr_2 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) var_0)) : (arr_1 [i_0] [i_1 + 2]))));
                        arr_13 [i_0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)7] [i_1] [i_0]))))))) - ((-(((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_3] [i_0])) ? (var_11) : (((/* implicit */int) var_5))))))));
                        arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2]))) / (arr_2 [i_1 - 2] [i_1 - 1])))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((var_15) - (((/* implicit */long long int) var_10)))))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)11166)))))))));
                        arr_17 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_15 [i_0] [i_1] [i_0] [i_1]))) ? (((/* implicit */int) arr_11 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 2])) : ((~(((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_15) - (3860596614278977709LL)))))))));
                        arr_18 [i_1] [i_0] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [(unsigned char)3] [i_1 + 2] [(unsigned char)3] [i_4] [i_4] [i_0])) ? (arr_2 [i_1 + 1] [i_1]) : (((/* implicit */long long int) (+(var_0))))));
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))), (min((((/* implicit */long long int) (short)-11166)), (var_2)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
}
