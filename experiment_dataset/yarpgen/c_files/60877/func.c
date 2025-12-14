/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60877
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
    var_14 = max(((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 14398145482431382550ULL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) var_0)))) : (((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_8) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((~(var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((var_0) ? ((~(3874802931U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */short) (signed char)-74)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15251534627087815528ULL)) ? (((((/* implicit */unsigned long long int) ((var_12) * (arr_3 [i_0] [i_1] [i_2])))) / (var_2))) : (4048598591278169066ULL)));
                    var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_8)))) << (((max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_0 [i_1] [i_0])))) - (4294967212U)))))) ? (((((var_10) && (var_10))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_0 [i_2 + 3] [i_0])))) : (((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_8)))) << (((((max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_0 [i_1] [i_0])))) - (4294967212U))) - (4158468756U)))))) ? (((((var_10) && (var_10))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_0 [i_2 + 3] [i_0])))) : (((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_3)))))));
                    var_18 = ((/* implicit */signed char) ((var_8) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) max((var_9), (var_0)))))))));
                    var_19 = ((/* implicit */_Bool) var_6);
                    var_20 = ((/* implicit */unsigned long long int) min((arr_3 [i_2] [i_1] [i_0]), (((var_9) ? (arr_3 [i_2 + 2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((var_5) == (((/* implicit */unsigned long long int) var_12)))) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_4))))) : (var_12)));
    var_22 = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && ((_Bool)0)))), ((~(((/* implicit */int) var_4))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((/* implicit */int) var_3))))), (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
}
