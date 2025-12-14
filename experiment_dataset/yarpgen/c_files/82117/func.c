/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82117
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
    var_13 = ((/* implicit */short) (~((+(var_8)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_3 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (signed char)(-127 - 1)))))))) : ((((!(((/* implicit */_Bool) 1940450391)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (var_6)))));
        arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (1940450371)))), ((~(var_6))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned char) ((long long int) ((var_8) >= (((/* implicit */long long int) -1530906979)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1530906978))));
                    arr_19 [(_Bool)1] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_7)))));
                }
            } 
        } 
        arr_20 [i_1] = ((unsigned char) var_10);
        arr_21 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    }
}
