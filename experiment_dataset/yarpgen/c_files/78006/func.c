/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78006
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0]))) != (((/* implicit */int) ((((/* implicit */int) (signed char)-32)) >= (((/* implicit */int) arr_1 [i_0])))))))) > (((/* implicit */int) ((unsigned short) max((arr_4 [i_0]), (((/* implicit */long long int) (unsigned char)67))))))));
                        var_12 = ((/* implicit */unsigned char) (-((-((-(var_3)))))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 893371230)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2])) : ((-(((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-82))))))));
                        var_14 = ((/* implicit */unsigned char) ((((long long int) -4568589037838870403LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_0])))));
                        var_15 = ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (short)-1)));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1125899906826240LL), (3310163902272224071LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (min((var_3), (((/* implicit */long long int) var_0))))))) ? ((-(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1])))) : (((int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_5 [i_0] [i_0])))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(var_7))))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) arr_0 [i_0 - 1] [i_0 - 1])), (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) var_3)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-2009388182276531414LL))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_9)))))))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(8353312036176013109LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */int) max((((/* implicit */short) var_5)), (var_9)))) + (((/* implicit */int) ((signed char) 4250396125885602818ULL))))) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_7))))))));
}
