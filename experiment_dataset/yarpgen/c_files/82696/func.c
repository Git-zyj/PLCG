/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82696
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
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_13)))))), (max(((-(((/* implicit */int) (unsigned char)67)))), (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((min((-1914208212), (((/* implicit */int) var_17)))) >= (-1914208228)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_1] [i_2] |= min((((((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1])) + (2147483647))) << (((18446744073709551610ULL) - (18446744073709551610ULL))))), (((((/* implicit */int) (short)-19443)) + (((/* implicit */int) (_Bool)1)))));
                            var_19 = ((/* implicit */signed char) (~(min((min((((/* implicit */unsigned long long int) arr_1 [i_1])), (18446744073709551613ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_1])))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = arr_1 [(unsigned char)5];
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((805306368U), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-32)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (34081))))) < (min((var_16), (((/* implicit */int) (_Bool)1))))))), (18446744073709551607ULL)));
}
