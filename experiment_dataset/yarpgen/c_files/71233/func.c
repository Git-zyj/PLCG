/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71233
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
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (0))))), (min((((/* implicit */unsigned long long int) ((unsigned int) 4294967295U))), (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (3365916332084181923ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_7 [i_1] [i_2]);
                    arr_9 [i_0] [(short)17] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */int) min((min((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_3 - 1] [i_0]))), (min((((/* implicit */long long int) arr_17 [8ULL] [i_1] [i_2] [i_3 - 1] [i_4 + 1])), (min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */long long int) var_8))))))));
                                var_19 = ((/* implicit */long long int) ((short) min((min((((/* implicit */unsigned int) (_Bool)1)), (4294967293U))), (((/* implicit */unsigned int) min(((short)24817), (((/* implicit */short) (unsigned char)107))))))));
                                arr_18 [i_0] [19ULL] [i_1] [i_0] = ((/* implicit */int) ((4294967282U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((long long int) ((min((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2])), (arr_6 [4LL] [i_1] [i_2]))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2U))))))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */unsigned short) var_4);
}
