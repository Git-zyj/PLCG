/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95224
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
    var_17 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((+(var_12))))) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)66)) - (((/* implicit */int) var_15))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_18 -= ((/* implicit */long long int) min((((((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned char)231)))) - (arr_12 [(unsigned short)10] [i_1]))), (((((((/* implicit */int) var_14)) + (2147483647))) << (((var_12) - (482793139U)))))));
                            arr_14 [(unsigned short)15] [i_0] [(signed char)0] [(unsigned char)14] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((var_5) / (((((/* implicit */int) var_15)) * (((/* implicit */int) var_10)))))) & (((/* implicit */int) (unsigned char)10))));
                            arr_15 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) -827285036);
                        }
                        arr_16 [i_0] [i_1] = ((/* implicit */_Bool) arr_1 [(unsigned char)11]);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_9))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (signed char)-66);
        var_21 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_0]))))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 536870910)) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (14746016829432585229ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14746016829432585222ULL)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) var_4))))))));
}
