/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94607
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
    var_15 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_13)), (var_0)));
    var_16 *= ((/* implicit */_Bool) (+(var_10)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) var_9);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */short) var_8);
                        var_19 |= (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1])) <= (((/* implicit */int) arr_1 [i_1 - 1]))))));
                        var_20 *= ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)-18505))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18510)) & (((/* implicit */int) ((unsigned short) 1519909063)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))));
}
