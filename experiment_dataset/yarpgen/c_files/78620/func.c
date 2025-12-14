/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78620
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (unsigned char)69)) + (((/* implicit */int) (short)0)))) : ((-(((/* implicit */int) var_11)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */int) min(((unsigned short)27669), (((/* implicit */unsigned short) arr_1 [i_0]))))), ((-(((/* implicit */int) var_11)))))), (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) max((-755609100895977622LL), (((/* implicit */long long int) var_2))))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) 1708720991U)) ? (((/* implicit */long long int) 2961691395U)) : (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))) != (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
                    arr_12 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_1] [i_1])), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))))) | (((unsigned long long int) (signed char)-73)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5580125956458304290ULL)) || (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (max((((/* implicit */long long int) (_Bool)0)), ((-9223372036854775807LL - 1LL))))))))))));
}
