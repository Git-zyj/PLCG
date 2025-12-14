/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70110
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967295U)))))) || (((((/* implicit */_Bool) var_10)) || ((!(((/* implicit */_Bool) var_11)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0])) << (((var_0) - (3702115682U))))))))), ((+(max((243876784961421378LL), (((/* implicit */long long int) arr_10 [(_Bool)1] [i_2] [8U]))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4432935156737179622ULL)) || (((/* implicit */_Bool) var_12)))))) * (((((/* implicit */_Bool) -1690864933)) ? (14013808916972371993ULL) : (((/* implicit */unsigned long long int) arr_5 [10] [10] [i_3]))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [(signed char)4] [i_4]))))), (((unsigned char) var_6)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */long long int) 10728848398986405137ULL);
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_1 - 2] [i_5] [i_6] [i_0]))));
                                arr_25 [11ULL] [i_1] [(unsigned short)4] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_7 [i_0])))))))));
                                arr_26 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0 - 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_0 + 2]))))))));
                            }
                        } 
                    } 
                } 
                arr_27 [(signed char)1] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((((var_14) << (((((var_2) + (1606154429))) - (52))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [(signed char)0] [(signed char)0] [(unsigned short)9] [i_1 - 2] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0]))))))) != (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]))))), (var_2))))));
            }
        } 
    } 
}
