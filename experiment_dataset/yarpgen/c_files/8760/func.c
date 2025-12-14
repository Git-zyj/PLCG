/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8760
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)-67))))), ((-(((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0 - 1]))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)66)) ? (-890698223) : (((/* implicit */int) (_Bool)1)))))));
                        var_16 += (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_2] [i_1])));
                        arr_14 [i_3] = ((/* implicit */int) (unsigned char)56);
                    }
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        arr_19 [i_0 - 1] [9LL] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (min((arr_10 [i_0] [i_1 + 1] [i_2] [i_4]), (((/* implicit */int) arr_12 [i_2]))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_0] [i_4])) : (890698222)))) ? (max((arr_10 [i_0] [4ULL] [4ULL] [i_4]), (arr_10 [i_0] [i_1 - 2] [i_2 - 1] [(_Bool)1]))) : (((/* implicit */int) arr_6 [i_1 - 2] [i_0 + 1]))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 890698212)) ? (2294429286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47621)))));
                    }
                    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)10] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_0 + 1] [1LL] [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 1])), (arr_15 [i_0] [i_1] [i_1] [i_0]))))) : (arr_5 [i_2] [i_1] [i_0 + 1]))), (((/* implicit */unsigned int) (signed char)-82))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), ((-(3490681853U)))));
        arr_20 [i_0 + 1] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0]);
    }
    var_20 |= ((/* implicit */int) var_1);
}
