/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78379
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((2132478149), (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))), (((/* implicit */int) var_8)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((int) min((arr_3 [i_0]), (arr_3 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 6; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_4 [i_0]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) ^ ((+(arr_1 [i_2 + 3])))));
                        var_17 = ((((/* implicit */_Bool) ((unsigned short) ((arr_4 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((min((arr_1 [i_0]), (var_7))) != (((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((var_4) - (6017922053677940833ULL))))))))) : (((/* implicit */int) var_11)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((/* implicit */int) arr_8 [7] [i_2] [7] [i_2 + 4])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [4ULL] [i_2] [i_2 + 1]))));
                            var_20 = ((/* implicit */int) var_7);
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) (short)32759);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (((((/* implicit */_Bool) ((arr_14 [i_4] [i_4] [i_6] [i_4] [i_6]) ? (var_7) : (((/* implicit */long long int) -2132478150))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) arr_9 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_2]))))) : (((((/* implicit */unsigned int) 2132478149)) / (4294967295U)))))));
                            arr_19 [i_0] [i_1] = ((/* implicit */unsigned short) (-(var_6)));
                        }
                        var_23 = ((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2]);
                    }
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) var_0)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_14)) - (140)))))) ? (((/* implicit */int) (((-2147483647 - 1)) != (((/* implicit */int) var_3))))) : (((/* implicit */int) var_1))))))))));
}
