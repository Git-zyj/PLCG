/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92830
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (short)-26822);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-5048)) ^ (var_5))) < (((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 2]))));
            var_20 &= ((/* implicit */signed char) arr_1 [(signed char)2] [(signed char)2]);
        }
        for (int i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
            var_22 = ((/* implicit */int) ((short) arr_0 [i_2 + 4]));
        }
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_23 *= ((/* implicit */short) (-(1928068046)));
                var_24 = var_11;
                arr_14 [i_0] [6] [(unsigned char)4] [(unsigned char)4] = (+(1269671615));
            }
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                arr_17 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) : (var_14))) == (((/* implicit */unsigned long long int) (+(var_5))))));
                arr_18 [i_0] [i_0] [i_5] = var_11;
            }
            arr_19 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-13872)) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)1] [i_0] [i_0] [(short)1]))) >= (arr_1 [i_0] [i_3])))));
            var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */unsigned int) (~(-1825440359)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) | (arr_2 [12] [12])))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((var_0) >> (((((/* implicit */int) (unsigned short)9382)) - (9378))))) : (arr_3 [i_3])));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */int) (((+(660621658591190245ULL))) >> (((arr_3 [i_0 + 3]) - (1357156268U)))));
        arr_21 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 3])) && (((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1]))));
    }
    var_27 = ((/* implicit */unsigned int) var_9);
    var_28 = ((/* implicit */unsigned int) var_7);
    var_29 = ((/* implicit */unsigned int) var_8);
}
