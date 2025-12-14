/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66818
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
    var_18 = ((/* implicit */long long int) min((max((var_4), (((/* implicit */unsigned long long int) ((var_6) % (6246721687582636562LL)))))), (((/* implicit */unsigned long long int) var_2))));
    var_19 = ((/* implicit */signed char) (~(max((2303287025U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) (~(max((((((/* implicit */int) (unsigned char)9)) & (1749888746))), ((+(((/* implicit */int) var_5))))))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)4)))) | ((~(((/* implicit */int) arr_2 [i_1])))))) | (((((((/* implicit */int) arr_0 [i_1] [i_2 - 2])) % (((/* implicit */int) (_Bool)1)))) * (max((var_2), (((/* implicit */int) var_0))))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+((+((+(((/* implicit */int) (unsigned short)60371)))))))))));
                        var_23 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_9 [i_2] [i_2] [i_2 - 3]))))));
                    }
                    var_24 |= ((/* implicit */long long int) (~((-(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (+(((arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [(unsigned short)11] [i_5]) - (var_10)))));
                                arr_17 [i_5] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5902))) / ((-(18ULL)))));
                                var_26 *= ((((((/* implicit */int) var_12)) / (var_2))) & ((+(((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(_Bool)1] [i_2] [i_2 - 3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)236))))), ((+(arr_5 [(signed char)14] [i_2] [i_0])))))), (max((max((var_8), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (3025685122641935641ULL))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65132)) == (((/* implicit */int) (_Bool)1))));
}
