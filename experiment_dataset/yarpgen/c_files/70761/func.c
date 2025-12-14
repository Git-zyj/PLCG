/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70761
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
    var_10 = ((/* implicit */int) ((short) var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] = ((/* implicit */long long int) ((((long long int) arr_0 [i_0])) != (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_1] [14LL] [i_3])) != (-4237088725916907202LL)))), (max((((/* implicit */int) arr_3 [i_3])), (220733119))))))));
                                var_11 += ((/* implicit */short) var_3);
                                var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) >= (((arr_2 [i_3]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_4 + 1]))))))), (((((((/* implicit */_Bool) -5618349711023610598LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_9))) & (((/* implicit */long long int) 438381537))))));
                                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))))), (((4294967293U) / (((/* implicit */unsigned int) arr_14 [i_0] [11ULL] [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_3 [i_1])), (-2714755579562135387LL)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) arr_11 [i_1] [i_1] [4U]))))) != (max((((/* implicit */int) var_2)), (arr_17 [9LL] [i_2] [i_5] [9LL])))))), (arr_1 [i_2])));
                                arr_23 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (max((arr_6 [18]), (((/* implicit */long long int) arr_1 [i_1]))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) arr_3 [(signed char)12])))))) : (max((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [8LL]) ^ (var_1))), (max((arr_13 [i_2] [i_0] [i_5] [3] [i_0] [i_6] [i_0]), (1136369837)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_9))));
}
