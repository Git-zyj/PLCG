/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93773
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
    var_15 = (short)-32765;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        var_17 = ((/* implicit */_Bool) (signed char)127);
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_8))))) && ((!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1]))))));
        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) arr_0 [(unsigned short)7]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) -1311866125107416202LL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-32765))))))), ((~(min((((/* implicit */unsigned long long int) var_3)), (arr_4 [(_Bool)0])))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) (+(var_7)))) ? ((-(var_0))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_9))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                    var_21 += ((/* implicit */int) ((((((var_12) == (((/* implicit */unsigned long long int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_1 + 1])), (var_14))))) : (var_12))) >= (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) max((min((((/* implicit */long long int) (unsigned char)182)), (var_9))), (((/* implicit */long long int) -1119735418))));
}
