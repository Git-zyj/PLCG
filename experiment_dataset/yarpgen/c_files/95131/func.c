/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95131
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
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    var_14 = ((/* implicit */unsigned short) (signed char)58);
    var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_6)))))))) >= (min((((/* implicit */int) var_2)), (((((-1574002578) + (2147483647))) >> (((var_12) + (1208378881)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = (((-(((((/* implicit */int) (unsigned char)237)) * (((/* implicit */int) arr_1 [i_0] [i_0])))))) >> (((((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))) - (1599))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [(unsigned char)7] [i_2] [(unsigned char)7] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [(unsigned short)1] [i_0]))));
                            arr_10 [i_0] [i_0] [0] [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))))) : (1161327750)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)62))))) ? (arr_8 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_1 [i_0] [(unsigned short)4]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 -= ((/* implicit */long long int) 3780832674U);
}
