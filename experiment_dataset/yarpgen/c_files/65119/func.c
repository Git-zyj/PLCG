/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65119
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
    var_20 &= ((/* implicit */unsigned char) var_18);
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) ((_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 0)), (8405086388670738314ULL)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) min((8405086388670738314ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (((/* implicit */int) ((var_7) != (((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_1 + 1])), ((unsigned char)249))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_0] [i_0] [i_3]))) != (9762368261234605636ULL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != ((~(((/* implicit */int) var_5))))))))))));
                            var_25 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) min((arr_4 [i_1 - 1]), (var_15))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
