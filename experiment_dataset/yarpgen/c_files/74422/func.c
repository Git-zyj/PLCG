/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74422
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
    var_15 *= ((/* implicit */unsigned char) -234169840);
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16374)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))), (max((var_2), (var_13)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (_Bool)1))));
                        arr_10 [i_0] [i_1] [i_2] [i_2 + 1] [2U] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)57929)), (max((((/* implicit */long long int) arr_8 [i_3] [i_3] [i_3 - 2] [i_0])), (6427169010832898482LL)))));
                    }
                    arr_11 [i_0] [i_1] [i_2] [i_2] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13035410369262239971ULL)) ? (68719476735LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32760)))))));
                }
            } 
        } 
    } 
}
