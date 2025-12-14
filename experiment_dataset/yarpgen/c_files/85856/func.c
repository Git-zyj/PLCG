/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85856
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
    var_18 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 + 1]))))) >= ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (var_16))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1111155709))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) (+((+(((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 2] [10ULL])) ^ (((/* implicit */int) var_12))))))));
                                arr_13 [4U] [4U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (((~(var_16))) << ((((+(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_3])))) - (62)))));
                                var_22 = ((/* implicit */int) ((unsigned short) var_6));
                                arr_14 [16LL] [i_2 + 3] [i_2] [(unsigned short)18] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) + (var_11)))) || (((/* implicit */_Bool) (~(2738728317U)))))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */signed char) (+(1556238976U)));
                }
            } 
        } 
        arr_15 [(_Bool)1] = ((/* implicit */int) (-(max((var_16), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
    }
}
