/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91995
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27562)))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2] [(short)3] [i_4]), (arr_8 [i_4 - 2] [i_4] [i_4] [i_4] [i_4])));
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)3004)))), (((/* implicit */int) arr_6 [i_1] [i_3] [i_1] [i_1]))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(short)9])), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_4 + 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_10 [(short)3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
                            var_21 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [(short)1] [(unsigned short)5] [(unsigned short)5] [i_4] [i_4 - 2] [(unsigned short)0] [(unsigned short)0])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 - 2] [i_4 - 1] [i_4])) : (((/* implicit */int) var_18)))) / ((~(((/* implicit */int) arr_10 [(unsigned short)7] [i_4] [(unsigned short)7] [(unsigned short)7] [i_4 - 1] [i_4] [(unsigned short)5]))))));
                        }
                        arr_12 [(short)5] [(unsigned short)3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_3])))) ? (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) arr_3 [i_2])) - (61508))))) : (((((/* implicit */int) (short)3049)) << (((((/* implicit */int) (unsigned short)9234)) - (9227)))))));
                        var_22 = ((/* implicit */short) (~((~(((/* implicit */int) arr_8 [(unsigned short)3] [(unsigned short)3] [i_1] [i_2] [i_3]))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [(unsigned short)7] [i_1] [i_1] [i_1] [i_1])))))) / ((-(((/* implicit */int) arr_3 [i_3]))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)3047))));
    var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_13)))) > (((/* implicit */int) var_5)))))));
}
