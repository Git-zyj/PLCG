/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55935
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) var_8)) - (221))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_2] [7] = ((/* implicit */short) ((unsigned short) min(((short)32767), (((/* implicit */short) (unsigned char)0)))));
                        arr_12 [i_1] [i_2] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_3]) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_3]))))) ? (arr_5 [i_0] [i_1] [i_1]) : ((-2147483647 - 1)))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(_Bool)1]))));
                        arr_13 [i_1] [9] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_8 [i_1])))) : (((((/* implicit */_Bool) min((arr_8 [i_1]), (var_8)))) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) min((((/* implicit */short) (signed char)115)), (arr_2 [i_1]))))))));
                    }
                    arr_14 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) : (((/* implicit */int) (signed char)48))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_0] = min((((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_8 [i_4])))), (((/* implicit */int) var_12)));
                                arr_21 [i_0] [i_5] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
}
