/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86029
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_14))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_14 [i_0] [(short)5] [(short)5] [i_2] [i_1] [8ULL] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_1] [9]);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max(((((_Bool)0) ? (arr_12 [i_1] [i_1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1]) : (arr_12 [i_0] [i_2] [i_3 + 2] [(_Bool)1] [i_3 - 1] [i_3 - 1]))), (((((/* implicit */int) ((signed char) (_Bool)0))) - (((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (_Bool)0)))), (arr_8 [i_4] [i_2] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_13))));
                            arr_17 [i_1] [8ULL] [8ULL] [7ULL] [i_5] = ((/* implicit */unsigned int) var_12);
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)238))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)195))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_3 - 1] [9ULL] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223)))));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [6LL] [(signed char)0] [i_1] [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (short)(-32767 - 1)))) + (((((/* implicit */_Bool) (unsigned char)227)) ? (arr_8 [i_3 - 1] [4ULL] [i_3 - 1] [i_3 - 1]) : (((/* implicit */int) max((var_13), (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [(unsigned short)5]))))))));
                    }
                    arr_20 [i_1] [(signed char)4] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)36560))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_1);
}
