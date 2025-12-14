/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98340
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
    var_11 = ((/* implicit */signed char) ((((((var_10) >> (((((/* implicit */int) var_4)) + (7870))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */int) ((((/* implicit */long long int) var_10)) % (var_8)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((3732761893U) * (1478675736U))) << (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (arr_5 [i_1])))), (arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1 - 1] [i_0])))))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3]))) ^ (((arr_2 [i_0] [i_1] [i_4]) ^ (((/* implicit */unsigned int) arr_3 [i_3]))))))));
                                var_16 = ((/* implicit */long long int) max((((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2 - 3] [i_4] [i_1] [i_1 - 1])) - (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2 - 3] [i_4] [i_3] [i_1 - 1])))), (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
                                var_17 = ((/* implicit */unsigned char) arr_2 [i_3] [i_2 + 3] [i_1 - 1]);
                                var_18 = ((/* implicit */unsigned long long int) min((min((-4442119578057465980LL), (((/* implicit */long long int) 2816291559U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4442119578057465980LL)) && (((/* implicit */_Bool) 2115702275U)))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((max((4442119578057465980LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) ((-2439384162511125744LL) >= (72057594037919744LL))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
