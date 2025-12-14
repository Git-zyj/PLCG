/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81442
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = min((((/* implicit */unsigned int) ((unsigned short) (unsigned short)13748))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (max((arr_5 [(signed char)7] [(signed char)7]), (((/* implicit */unsigned int) arr_3 [i_1])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-81))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1616056580U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */int) var_2))));
                            var_14 = ((/* implicit */unsigned char) (((~((-(var_0))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                            var_15 = max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17817))))), ((+((+(var_1))))));
                            arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (var_10)))) || (((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3] [3ULL] [i_3 - 3] [i_3]))))) ^ (max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) 452735471U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_3)) ? (3510979255U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    var_17 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-7))));
    var_18 = ((/* implicit */unsigned int) var_4);
}
