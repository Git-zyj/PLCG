/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6370
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 459590270U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21736))) : (min((var_7), (((/* implicit */unsigned long long int) var_13))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) % (((/* implicit */int) var_12))))) >= (((long long int) arr_1 [(_Bool)1] [(_Bool)1]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((signed char) (short)3950))) : (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) var_4);
                        arr_12 [i_2] = ((/* implicit */int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_2] [i_2])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (short)-21719)) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_2])))) : (((/* implicit */int) ((unsigned char) (short)21736)))));
                            var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2] [i_2 - 1]))));
                            var_18 = ((/* implicit */int) arr_5 [i_3] [i_4]);
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) arr_4 [i_0] [(unsigned short)11]);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-21736)) ? ((-(arr_8 [i_2]))) : ((-(arr_1 [i_3] [12])))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)53)) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1] [i_1 + 2]))));
                    }
                } 
            } 
        } 
        arr_18 [9] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [11])) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
    }
    var_23 = ((/* implicit */short) var_3);
}
