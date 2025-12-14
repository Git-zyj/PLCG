/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5691
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
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((10798816448374233733ULL) | (13302685971474138905ULL)))) ? (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */int) var_3))))) : (((18ULL) * (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))) : (((((var_17) || (((/* implicit */_Bool) var_18)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)21834)))))))));
    var_22 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_23 += min((((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0] [i_1] [i_1] [i_1] [i_1 - 1])) && ((!(((/* implicit */_Bool) var_16)))))), ((!(((/* implicit */_Bool) (signed char)-69)))));
                            var_24 ^= ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_5 [i_0 - 1] [i_1 - 1] [i_0 - 1])), (var_0))) << (((min((((/* implicit */int) (short)24084)), (arr_8 [i_0 + 1] [i_1 - 1] [i_0 - 2] [i_3]))) - (24084)))));
                        }
                    } 
                } 
                arr_11 [i_0 - 2] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)49744))));
                var_25 += ((((/* implicit */int) (unsigned short)49744)) - (((/* implicit */int) (unsigned short)18140)));
                var_26 += ((/* implicit */unsigned long long int) (unsigned short)49775);
                var_27 = ((/* implicit */signed char) (unsigned short)45514);
            }
        } 
    } 
}
