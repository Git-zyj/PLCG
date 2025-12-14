/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7044
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)28924)) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)127)) / (arr_0 [i_0 + 2])))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))))) : (((/* implicit */int) ((arr_0 [i_0 + 2]) < (arr_0 [i_0 + 2])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned char)125), ((unsigned char)101)))), (arr_3 [i_0] [i_1] [i_2]))))));
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]);
            }
            arr_9 [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_1])) ? (max((arr_3 [i_0 - 1] [i_1] [i_0 + 2]), (arr_3 [i_1] [i_1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_1])))), (((/* implicit */short) ((unsigned char) var_4)))))))));
            arr_10 [i_1] = ((/* implicit */_Bool) var_5);
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)125)) % (((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                var_14 = ((/* implicit */int) var_4);
                arr_15 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (signed char)-65)) : (-3)));
            }
        }
        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62231))))) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_15 += ((/* implicit */short) arr_12 [i_0 - 1] [i_0] [i_0] [i_0]);
    }
}
