/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71085
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))));
    var_12 = ((/* implicit */int) ((unsigned short) var_6));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (((unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [7] [i_1] = ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14084660928690308525ULL)) ? (((/* implicit */int) (_Bool)0)) : (-483071458)));
                            arr_12 [i_0] [18ULL] [i_2 - 3] [i_3] [i_2 - 1] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-26) - (((/* implicit */int) arr_10 [(unsigned short)5] [i_2]))))) ? (((((/* implicit */int) arr_0 [(short)5])) & (((/* implicit */int) var_1)))) : (((((/* implicit */int) (_Bool)0)) % (25)))))) * (arr_8 [i_0] [(short)13])));
                        }
                    } 
                } 
                arr_13 [17ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_10 [i_1 - 2] [i_1 - 1])))));
            }
        } 
    } 
}
