/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6964
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
    var_12 = var_5;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_2 [i_0]) | (var_11)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1]))))));
            var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)224))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63935)) << (((((/* implicit */int) var_0)) - (43219)))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_2))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        arr_19 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) -8104569674473666200LL);
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_0] [4LL])))))));
                        var_19 ^= ((/* implicit */unsigned char) arr_2 [i_0]);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_3]))))));
            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [(unsigned char)11]))));
            var_22 = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
            var_23 = ((/* implicit */long long int) ((unsigned short) ((long long int) arr_6 [i_0] [i_0] [i_3])));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_24 = var_0;
        var_25 ^= ((/* implicit */unsigned short) ((unsigned char) max(((-(((/* implicit */int) arr_20 [i_6])))), (((/* implicit */int) min(((unsigned short)7168), (var_3)))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))))) ? (min((((/* implicit */long long int) var_0)), (-4018444561632421519LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_20 [i_6])))))));
        var_27 = ((/* implicit */unsigned short) ((unsigned char) ((arr_21 [i_6] [i_6]) / (arr_21 [i_6] [i_6]))));
    }
    var_28 ^= ((/* implicit */unsigned char) (+(var_11)));
}
