/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79259
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_8 [10] [i_2 + 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_2 [i_2 - 1])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)19)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_1] [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_6 [12ULL] [12ULL] [i_2 + 1] [i_3])))) | ((~(((/* implicit */int) arr_6 [i_1] [i_2 + 2] [(unsigned short)12] [i_2 + 2]))))));
                                var_21 ^= ((/* implicit */signed char) max(((short)(-32767 - 1)), ((short)27233)));
                                arr_14 [i_3] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */signed char) 15583552259725749190ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned long long int) var_6));
    var_23 = ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2863191813983802426ULL)));
    var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))));
}
