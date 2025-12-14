/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99592
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) + (11296988626414825396ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) var_0))))) > (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_6))))))))));
        arr_5 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(11296988626414825403ULL)))) ? ((-(7149755447294726219ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        arr_6 [(unsigned short)11] = ((/* implicit */signed char) var_9);
        arr_7 [i_0] [(unsigned short)17] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) + ((-(var_4)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [19ULL])))) && (((/* implicit */_Bool) var_4))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_13 [i_2] [(unsigned short)15] = ((/* implicit */short) var_8);
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))) - (43090U)))));
        }
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (arr_11 [i_1]) : (((/* implicit */int) arr_8 [i_1 + 1]))));
        /* LoopSeq 1 */
        for (signed char i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) 260680064)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-9141122580764004402LL))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_27 [i_5] [i_3] [i_5] [i_5] = (!(((/* implicit */_Bool) var_8)));
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */signed char) (~(var_9)));
                        arr_29 [i_3 + 1] [i_1 - 2] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7149755447294726220ULL)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_8 [i_3])) : (arr_21 [i_1 + 3] [i_1 + 3] [i_3 + 2] [i_5 - 1])));
                        arr_30 [i_5] = ((/* implicit */_Bool) arr_26 [0ULL] [15LL]);
                        var_13 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        }
    }
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (var_4)))), (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (var_9) : (((/* implicit */unsigned int) var_0))))));
}
