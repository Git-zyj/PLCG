/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70844
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
    var_16 -= ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) ((unsigned char) (unsigned char)180));
                var_18 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((var_2), (arr_0 [i_1])))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_1)))))))));
                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) var_6)) ^ (((((/* implicit */_Bool) 0ULL)) ? (5380506461281114513ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) (_Bool)0);
                                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((5380506461281114516ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 + 1]))))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_4] [i_3 + 1] [i_3] [i_2 + 2] [(unsigned char)16])), ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [9])) : (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_3 + 1] [i_4])))))))));
                                var_22 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_1 [i_1])))) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)9178)))) : ((~(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (5380506461281114513ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (937922254U)));
    var_24 = ((/* implicit */long long int) min((var_24), (((long long int) max((min((((/* implicit */unsigned short) var_5)), ((unsigned short)44653))), (((unsigned short) var_2)))))));
}
