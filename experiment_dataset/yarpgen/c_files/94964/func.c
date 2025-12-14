/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94964
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
    var_13 += ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) 0ULL)))));
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6522819249823629787ULL)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))) && (((_Bool) var_12)))) ? ((~(arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) || (((/* implicit */_Bool) 4068208045272730117ULL))))))));
        arr_4 [(signed char)12] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_5 [i_0] [11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0])))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_8 [(short)6]))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_7)))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((min((max((9817154393750627685ULL), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [0])))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)25590)) >= (((/* implicit */int) (_Bool)1))))), (1282817877)))))))));
                        var_17 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_4])) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4]))))) << (((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))));
        arr_19 [i_4] = ((/* implicit */unsigned char) var_8);
        var_18 = ((/* implicit */unsigned long long int) min((1687262417U), (((/* implicit */unsigned int) var_5))));
    }
}
