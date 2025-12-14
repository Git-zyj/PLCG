/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66000
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
    var_19 = ((/* implicit */int) min((((/* implicit */long long int) var_18)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) / (9223372036854775807LL)))));
    var_20 = ((/* implicit */unsigned int) var_6);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) (signed char)-40))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (~((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) % (1546657394U)))))));
                    var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((-9223372036854775807LL), (((/* implicit */long long int) (signed char)39))))) ? (max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) (signed char)-110)))) : (((/* implicit */unsigned int) ((arr_5 [i_0] [i_0] [i_2]) / (arr_5 [i_0] [i_0] [(unsigned char)10])))))), (((/* implicit */unsigned int) arr_3 [i_2] [i_1] [i_0]))));
                    arr_6 [(signed char)6] [i_1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) >> (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) max(((unsigned char)27), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    var_24 = ((/* implicit */unsigned int) (short)26438);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) % (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-55)))))))))));
                                var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)9] [(unsigned short)9] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) 4294967295U)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))))));
                                var_27 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) min((arr_7 [i_3 - 2] [i_1] [i_0 - 1] [i_3]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [(signed char)6]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)20729)), (var_2)))) : ((~(var_16))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
