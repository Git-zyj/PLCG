/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59010
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
    var_16 = ((/* implicit */signed char) (short)5731);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_9))));
    var_18 = ((((/* implicit */_Bool) (signed char)106)) ? (0U) : (4294967295U));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) arr_6 [(unsigned char)7] [i_1] [1LL]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (-((-(((long long int) (_Bool)1))))));
                            arr_14 [i_0] [i_1] [6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((0LL) * (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(signed char)10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [i_1]))))))) & (((/* implicit */long long int) max((arr_5 [i_0] [(_Bool)1]), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [i_0] [i_1] [i_1]))))))));
                            arr_15 [i_0] = ((/* implicit */short) min((((min((((/* implicit */unsigned int) (unsigned char)8)), (4294967295U))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60601))) - (860303987U))))), (((/* implicit */unsigned int) -1066208053))));
                            arr_16 [i_0] [i_1] [i_0] [(unsigned short)4] [i_1] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                arr_17 [i_1] [4] |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)84))));
                var_20 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0 + 1])) >= (((/* implicit */int) arr_13 [i_1])))))));
                var_21 *= ((/* implicit */long long int) max(((+(((/* implicit */int) (short)256)))), (min(((~(((/* implicit */int) var_11)))), ((-(((/* implicit */int) arr_0 [i_1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) -2052659250);
}
