/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83284
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((((/* implicit */int) min(((unsigned short)5123), (((/* implicit */unsigned short) (short)19267))))), (51350078)));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned char) var_13)), (var_1))))) ? (arr_2 [i_0] [i_0]) : (((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_2 [i_0] [i_1 + 1])))))))));
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) : (arr_7 [i_0] [i_0] [i_2] [i_2]))), (((/* implicit */long long int) arr_4 [i_2]))))) : ((+(((arr_0 [i_1]) % (((/* implicit */unsigned long long int) arr_1 [i_2]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((7005423616910194504LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-19925)))))))))))));
    var_22 = ((/* implicit */short) var_3);
}
