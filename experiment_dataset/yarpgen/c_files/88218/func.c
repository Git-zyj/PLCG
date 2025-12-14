/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88218
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_3))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) (signed char)123)));
        var_14 = ((/* implicit */unsigned long long int) var_0);
        var_15 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)124))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2])))))) ? ((+(((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) (signed char)123))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (unsigned short)58362)) : (((/* implicit */int) (unsigned short)64728)))) / (((/* implicit */int) ((unsigned char) (unsigned short)14079)))))), (((arr_4 [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1] [i_2] [i_2])))) : (((unsigned long long int) arr_4 [i_0] [i_2] [i_3]))))));
                        var_16 = ((/* implicit */long long int) ((unsigned long long int) max((min((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))));
                    }
                }
            } 
        } 
    }
    var_17 = max((var_7), (max((min((var_7), (var_1))), (((/* implicit */unsigned short) max(((signed char)-122), ((signed char)122)))))));
}
