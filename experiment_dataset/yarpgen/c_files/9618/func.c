/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9618
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((6045372506841279759LL) & (-6045372506841279739LL)));
                            var_14 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-13)) ^ (((/* implicit */int) ((6045372506841279750LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_3)))))) * (((((/* implicit */_Bool) 6045372506841279772LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (6045372506841279766LL))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 4; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_15 [i_5] [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) : (arr_7 [(short)0] [i_5 - 3] [i_0 + 2] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 232651152U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)104))))) ? (max((((/* implicit */unsigned long long int) (signed char)-104)), (914095530868693936ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_5] [i_4] [i_1] [i_0]))))) || (((/* implicit */_Bool) arr_7 [i_0 + 1] [5] [i_4 - 1] [i_4 - 1]))))))));
                            arr_16 [i_0 - 2] [i_4] [i_5] = ((/* implicit */signed char) 17223063909685063653ULL);
                            arr_17 [i_4] [i_1 - 2] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)39)) >> (((((/* implicit */int) (unsigned short)45976)) - (45958))))))), (((long long int) arr_11 [i_5 + 2] [i_4 - 1] [i_0]))));
                            var_16 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_1 + 2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_4 - 1] [i_5 - 4]))) : (6045372506841279759LL)))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_4] [i_5])) ? (2047U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4 - 1] [i_4] [i_4])))))), (var_10)))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) 322887480U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_4);
    var_19 = ((/* implicit */short) ((((min((((/* implicit */int) var_7)), (-1710471588))) % (((/* implicit */int) var_9)))) & (((((/* implicit */int) var_4)) << (((((((-6045372506841279752LL) ^ (((/* implicit */long long int) var_6)))) + (6045372504621710725LL))) - (14LL)))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (((unsigned char) 17539205160313568589ULL))))) > (((/* implicit */int) ((unsigned short) 561093709U))))))));
}
