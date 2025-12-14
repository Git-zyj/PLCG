/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61197
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
    var_12 |= ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = (((-(((((/* implicit */_Bool) 935787266)) ? (296799583U) : (3998167712U))))) + (max((max((296799583U), (arr_6 [i_2] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) 1131779345)))));
                                var_14 = ((/* implicit */short) ((-594182459) ^ (((((/* implicit */_Bool) (short)26749)) ? (((/* implicit */int) (unsigned short)54578)) : (arr_9 [10U] [i_3 - 3] [i_3 - 4] [i_3] [i_3])))));
                                var_15 = ((unsigned int) max((((((/* implicit */int) arr_11 [i_0] [i_1] [i_1 + 1] [i_2] [(signed char)7] [i_3] [i_4])) + (var_8))), (((((/* implicit */_Bool) 6815195362176088890ULL)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (unsigned char)11))))));
                                var_16 = ((/* implicit */signed char) ((short) (signed char)-29));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)10957), (((/* implicit */unsigned short) (short)-9206))))) ? (min((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (((/* implicit */int) (unsigned short)10267)))) : (((/* implicit */int) ((unsigned short) (_Bool)0)))));
            }
        } 
    } 
}
