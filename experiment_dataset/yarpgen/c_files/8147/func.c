/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8147
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
    var_17 = ((/* implicit */short) var_13);
    var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)255)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (_Bool)1)) : (681023491)))));
                arr_7 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)12351)) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned char)0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((var_5), (arr_2 [(short)11] [i_1] [(unsigned char)9])))) : (((/* implicit */int) (short)32767)))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) (short)(-32767 - 1))), (-1889775796)))))));
                            arr_13 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)29691))));
                            var_20 *= ((/* implicit */unsigned short) (_Bool)0);
                        }
                    } 
                } 
            }
        } 
    } 
}
