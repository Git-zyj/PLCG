/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67658
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])))));
        var_10 = var_2;
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 8; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_0]))) ? (var_6) : (var_6)));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_1])) > ((-(((/* implicit */int) arr_14 [(unsigned short)4] [i_1] [i_2] [i_3 + 1]))))));
                            arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_2] [i_2 - 2] [(signed char)1] [i_3 - 1] [i_3 + 1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0])))));
                        }
                        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), ((signed char)-115)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)57505))))) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_0 + 1])))))));
                        var_14 -= ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        arr_18 [(unsigned char)8] [i_0] [(unsigned char)8] [(short)2] [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_15 = (((!(((/* implicit */_Bool) arr_20 [(unsigned char)9])))) && (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)50471)) : (((/* implicit */int) var_8))))))));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_5]))));
        arr_23 [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_20 [i_5])) ^ (((/* implicit */int) var_5))))));
        var_17 = ((/* implicit */unsigned short) ((signed char) ((short) arr_21 [i_5])));
    }
    var_18 = ((/* implicit */unsigned char) (signed char)114);
    var_19 = ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50471))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))));
}
