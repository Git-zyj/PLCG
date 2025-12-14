/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62136
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
    var_15 = ((/* implicit */unsigned short) -4044898929866577652LL);
    var_16 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((long long int) arr_8 [i_0] [i_0] [i_0]))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [(unsigned char)1] [i_1]))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [9]))))))) : (((((((/* implicit */_Bool) var_8)) ? (4044898929866577657LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) / (((/* implicit */long long int) var_9)))));
                    arr_12 [i_0] [i_0] [i_0] [0ULL] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-127)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2]))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) && ((_Bool)1))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_6 [i_3])), (max((min((arr_2 [i_3]), (((/* implicit */unsigned long long int) var_9)))), (arr_13 [i_3])))));
        arr_16 [i_3] = ((/* implicit */unsigned short) (_Bool)1);
        arr_17 [i_3] = ((/* implicit */long long int) (~(((arr_2 [i_3]) << (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) / (4044898929866577645LL)))))));
    }
}
