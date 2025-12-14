/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89716
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))))), (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_9)) << ((((~(((/* implicit */int) (unsigned char)43)))) + (60))))))));
                var_11 = ((/* implicit */long long int) min((var_11), (3174009223737752275LL)));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) -3174009223737752271LL))));
                arr_5 [3LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1699)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))) : (var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(6193115277656580648LL))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_13 = ((/* implicit */int) var_2);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 770953970666010337LL))))))))))));
    }
    var_15 &= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
}
