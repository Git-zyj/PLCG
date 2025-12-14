/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83947
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) (unsigned short)23527);
                var_13 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42013)) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (signed char)120)) ? (1546758578831270983LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))) <= (max((((((/* implicit */_Bool) var_11)) ? (5509883084763403988LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 - 1]))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15975)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) || (((/* implicit */_Bool) ((signed char) arr_5 [i_0 + 2] [i_1] [i_1])))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) min((var_12), (var_12)))) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1]))))))) : (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)3859))))) ? (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-14)))) : ((~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_18 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_1 [i_2] [0ULL])) : (((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (((/* implicit */long long int) var_10)) : (var_11)))))) ? (min((min((((/* implicit */long long int) arr_6 [i_3])), (arr_17 [i_2] [i_3 - 3] [i_4]))), (min((((/* implicit */long long int) arr_5 [(short)7] [i_3] [i_3])), (arr_4 [i_2] [(unsigned short)3] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))));
                    arr_19 [i_2] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((645562842U), (arr_14 [i_2] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3649404453U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_2] [i_4]))))) : (((var_11) / (((/* implicit */long long int) arr_13 [9U] [i_3]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (short)21707)) : (((/* implicit */int) (short)15981)))) > (((/* implicit */int) max(((short)-17102), (((/* implicit */short) arr_9 [i_2])))))))) : (((((/* implicit */_Bool) (unsigned short)37898)) ? ((+(((/* implicit */int) (signed char)126)))) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((max((var_11), (((/* implicit */long long int) var_10)))) - (5780048059822928761LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(9095749453484149928LL)))) ? (((/* implicit */int) ((_Bool) 6198596398673041330LL))) : (((/* implicit */int) ((unsigned char) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17101)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (short)29003)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))));
}
