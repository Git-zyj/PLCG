/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95233
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) == (max((((/* implicit */int) var_9)), (((int) arr_5 [i_0] [i_1 - 1] [i_0])))))))));
                var_13 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned int) (+(1602578729)))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) max(((signed char)-95), (((/* implicit */signed char) (_Bool)0)))))))))));
                var_14 ^= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_2 [i_2] [i_3]))))))) ? (((1729382256910270464LL) / (var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 393797065U))))))))));
                            var_16 -= (+(((/* implicit */int) ((unsigned char) var_7))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)200);
            }
        } 
    } 
    var_17 = ((/* implicit */int) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_4)) ? (1729382256910270447LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_18 = ((/* implicit */long long int) var_11);
}
