/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79001
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
    var_16 = (short)-10304;
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((4267111090703463110LL), (((/* implicit */long long int) min(((unsigned short)65526), (((/* implicit */unsigned short) (short)-16318)))))))) | (5386214426991681426ULL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((min((arr_7 [i_3] [i_2 - 3] [i_3] [i_3 + 3]), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_18 = ((/* implicit */unsigned char) ((_Bool) ((arr_9 [i_2] [i_2 - 1] [i_3 + 2] [i_3 + 3] [i_3]) + (arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 3] [i_3 + 2] [i_3 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_2 - 1] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 - 1] [i_1] [i_2 - 3] [i_4]))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_4] [i_5]))));
                                arr_18 [i_0] [i_1] [i_2 + 1] = ((/* implicit */long long int) ((short) arr_7 [i_0] [i_1] [i_2 + 2] [i_4]));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */long long int) max((arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2 - 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_2 - 3]), (((/* implicit */unsigned int) var_4))))))))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~(max((((/* implicit */unsigned int) ((short) var_15))), (arr_1 [i_0] [i_1]))))))));
                    arr_19 [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)2301))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_1] [i_2 - 3] [i_2] [i_2 - 3]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 13060529646717870218ULL))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((signed char) var_12)))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_7]))));
            }
        } 
    } 
}
