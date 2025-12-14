/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93137
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [20U] [20U] = ((/* implicit */long long int) 11056656273869221853ULL);
                    var_10 = ((/* implicit */int) max((var_10), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1]))))) >> (((min((((/* implicit */unsigned long long int) arr_7 [i_0 - 2])), (11056656273869221850ULL))) - (174ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [17ULL] [13U] [i_3] [17ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (11056656273869221853ULL) : (((/* implicit */unsigned long long int) 299256696))));
                                var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 11056656273869221871ULL)) ? (-7133863232647590462LL) : (((/* implicit */long long int) 3047813407U)))) - (((/* implicit */long long int) ((/* implicit */int) max(((short)12189), (((/* implicit */short) arr_7 [i_0]))))))))), (((((/* implicit */unsigned long long int) ((arr_10 [i_0] [0LL] [i_0] [0LL] [i_0] [i_2 - 1]) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))) / ((+(10233302429612162522ULL)))))));
                                arr_17 [i_0] [i_2] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max(((~(((/* implicit */int) arr_5 [i_0 - 3])))), (((/* implicit */int) max((arr_5 [i_0 + 2]), (arr_5 [i_0 - 3])))))))));
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */int) (-(9927748129750372369ULL)));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_7))));
    var_15 ^= ((/* implicit */signed char) var_2);
}
