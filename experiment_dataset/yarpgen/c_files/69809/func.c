/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69809
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
    var_19 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) (_Bool)1)), (-1335834789)))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(2147483644))), (((((/* implicit */int) (unsigned short)57344)) + (((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) (unsigned short)94)) ? ((~(1602064014))) : (((/* implicit */int) ((_Bool) var_12))))) : (((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) 2147483647)) ? (var_16) : (((/* implicit */int) (unsigned short)65528))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((short) -1936503026))) : (((/* implicit */int) ((short) var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((((-863207163) + (2147483647))) >> (((((/* implicit */int) arr_2 [8] [(short)4])) - (15646)))))));
                    arr_7 [i_2] [i_2] = ((short) var_12);
                    arr_8 [i_2] [i_1 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (short)8176))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((var_5) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) (short)-3601)))))));
                }
                arr_9 [(unsigned short)2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)12]))))))))));
                var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [10]))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))))))));
            }
        } 
    } 
}
