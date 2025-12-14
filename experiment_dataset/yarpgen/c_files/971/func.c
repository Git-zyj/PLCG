/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/971
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
    var_17 = ((/* implicit */_Bool) -15);
    var_18 = ((/* implicit */_Bool) 15872U);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((short) var_9));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (1135488124156492805ULL) : (var_13)));
            var_21 |= ((/* implicit */unsigned short) ((_Bool) arr_3 [i_1]));
        }
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned long long int) (signed char)-95))))) ? (min((2287853080U), (((/* implicit */unsigned int) (unsigned short)255)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)106)), ((short)-32762)))))));
            var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)65281)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), ((_Bool)0))))) : ((+(0ULL))))), (((/* implicit */unsigned long long int) max(((signed char)-5), (((/* implicit */signed char) arr_8 [i_0] [(unsigned char)9])))))));
        }
        arr_11 [i_0] = ((/* implicit */short) min((min((((int) arr_4 [i_0])), (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_5 [i_0] [i_0] [7U])))));
    }
}
