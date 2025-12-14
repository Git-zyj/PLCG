/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80526
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (6315660199252156743LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) / (((/* implicit */long long int) ((/* implicit */int) (short)30383)))))) ? ((((((-(((/* implicit */int) (short)30383)))) + (2147483647))) << (((((/* implicit */int) min(((unsigned char)90), (var_3)))) - (64))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)29002)) < (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (signed char)108)) - (100))))))));
    var_22 = ((/* implicit */short) ((int) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_23 += ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-36)) + (2147483647))) >> ((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)102))))))));
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)79)) != (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_1 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)30382)))))))) : (((((/* implicit */_Bool) (-(var_19)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned char)80)))) : ((~(((/* implicit */int) (unsigned char)163))))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [6LL] [i_0] = ((/* implicit */int) arr_8 [i_3] [i_2] [i_2] [i_1] [10U] [i_0]);
                            arr_12 [i_1 + 3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_1 + 2] [i_1 - 1] [i_2 - 1] [i_3 - 1])))));
                            arr_13 [i_0] [i_1 + 3] [(unsigned char)12] [i_3] [(_Bool)1] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63432))) % (2705299659U)))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36541))) : (arr_9 [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_1 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
