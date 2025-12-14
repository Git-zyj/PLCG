/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66174
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) (signed char)24));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) : ((((~(3ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-24), (((/* implicit */signed char) arr_9 [i_0] [i_1] [i_3] [i_3]))))))))));
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) arr_9 [i_3] [i_2] [i_1] [i_0]))))) ? (max((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [i_3] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), ((_Bool)1))))))) * (2098880817U)));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (signed char)23))));
            }
        } 
    } 
    var_23 &= ((/* implicit */_Bool) ((var_0) << ((((-(((/* implicit */int) (signed char)-21)))) / (max((-289892254), (((/* implicit */int) (unsigned short)31744))))))));
    var_24 = var_4;
    var_25 = (!(((((/* implicit */_Bool) (signed char)24)) || (((/* implicit */_Bool) (short)27384)))));
}
