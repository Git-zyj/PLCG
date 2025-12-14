/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55289
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)203)))));
                                arr_17 [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */_Bool) 8185243775204197571LL);
                                arr_18 [i_4] [i_2] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                                var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_1] [i_3 - 2] [i_4]) / (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [21ULL] [21ULL] [21ULL] [21ULL])))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                                var_12 = ((/* implicit */_Bool) (+(min((arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_3 - 2] [i_3 + 1]), (arr_12 [i_3 + 2] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 + 1])))));
                            }
                        } 
                    } 
                    arr_19 [(unsigned char)23] [i_1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((var_7) - (((/* implicit */int) arr_8 [i_2] [4] [i_2] [i_0] [4] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31854))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))) > (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9))))));
}
