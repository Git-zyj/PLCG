/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7806
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
    var_20 = ((/* implicit */unsigned long long int) var_0);
    var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_10)))) % (-2097152)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_22 = 6237727797454894674LL;
                var_23 = ((/* implicit */unsigned short) max((max((((unsigned int) arr_4 [i_0 - 2] [i_0 - 1])), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned char)95), (var_0)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned short)5234))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((min(((unsigned short)5234), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) (unsigned char)123)))))));
    var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (7929984275570315981LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58862)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))) : (var_4)))));
}
