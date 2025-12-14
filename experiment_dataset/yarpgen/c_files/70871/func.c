/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70871
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((((/* implicit */_Bool) 18001155062971725274ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_21 -= ((/* implicit */short) (-(((((var_2) >> (((/* implicit */int) var_5)))) & (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18724)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_5))))))))));
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4029624671U)) == (5456626760819360512ULL))))) > (4058101461U)))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((1548821034U) != (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)5))))))))));
    }
    var_24 = var_9;
}
