/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79899
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) arr_11 [i_1] [i_2]))))) | (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (2399304723705329756ULL))))));
                            var_19 = ((/* implicit */int) max(((+(var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */short) arr_3 [i_3 - 1] [i_2]))))) ? (((/* implicit */int) arr_11 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 6241533490201656706LL))))))))));
                            arr_13 [i_3] [i_3] [i_3] [i_2] [i_3] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1]))))) ? (10911604047965257904ULL) : (arr_4 [i_1])));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6241533490201656699LL))));
                arr_15 [17U] = ((((/* implicit */_Bool) 1327214677734178164ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned short)16])), (max((((/* implicit */long long int) (_Bool)1)), (var_5))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((2147483647) + ((-2147483647 - 1))))))) + (((unsigned int) arr_3 [i_0 + 1] [i_0 + 1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (unsigned short)2047);
}
