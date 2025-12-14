/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95346
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
    var_20 ^= ((/* implicit */_Bool) ((var_15) << (((((/* implicit */int) var_14)) - (19244)))));
    var_21 &= ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_11 [(short)10] [i_0] [(_Bool)1] [i_3] [i_4])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                                arr_15 [i_0] [i_0] [i_0] [(unsigned short)2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(short)19] [(unsigned char)14] [i_1])) || (((/* implicit */_Bool) ((628322981) << (((((unsigned long long int) (unsigned short)21571)) - (21570ULL))))))));
                                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)227)), (arr_4 [i_4])))) % (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)16))))))) ? (max((var_2), (((/* implicit */long long int) (~(arr_2 [i_4] [i_4])))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3])))) ? (((/* implicit */int) ((short) 0ULL))) : (((/* implicit */int) arr_9 [i_0])))))));
                                arr_16 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_3))) << (((((/* implicit */int) arr_11 [i_4] [14] [i_0] [i_1] [i_0])) - (25957)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])), (arr_2 [i_1] [(short)22])))) ^ (((unsigned long long int) arr_12 [i_0] [i_1] [8U])))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)29343)) != (((/* implicit */int) arr_4 [2U]))));
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 0ULL))));
                arr_17 [i_1] [15LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_9 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_9 [i_1])))))));
                arr_18 [i_0] [(_Bool)1] [(unsigned char)0] = ((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [(_Bool)1]), (((unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
