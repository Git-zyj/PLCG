/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62113
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_15), (((/* implicit */short) ((_Bool) var_14)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)234))))))) ? (((/* implicit */unsigned int) ((arr_3 [i_1 - 1]) / (((/* implicit */int) var_9))))) : ((-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) 8388607)) : (1590117319U)))))));
                var_19 = ((/* implicit */short) ((unsigned long long int) (short)-19704));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) + (((((/* implicit */_Bool) (short)24590)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-20918)))))))) ? (((((((/* implicit */int) (unsigned char)22)) <= (((/* implicit */int) (short)8804)))) ? ((-(1152912708513824768ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9693)) ? (((/* implicit */int) (unsigned char)240)) : (arr_3 [19LL]))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1])) >> (((((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1])) - (203)))))) <= (((((/* implicit */_Bool) ((arr_5 [i_0] [4U]) ? (((/* implicit */int) (short)-1424)) : (((/* implicit */int) var_10))))) ? (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)22)) / (((/* implicit */int) (_Bool)1))))))))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), ((+(2257262686U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((long long int) var_14));
}
