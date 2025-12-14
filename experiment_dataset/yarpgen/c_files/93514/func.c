/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93514
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
    var_20 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((((signed char) (+(var_0)))), (((/* implicit */signed char) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1)))))))));
                        var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [2ULL] [(_Bool)1])) ? (((/* implicit */int) arr_10 [i_0] [(unsigned short)14] [i_2 + 1] [i_2 + 1] [(signed char)14])) : (-1732945737))) / (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))) * (((((/* implicit */_Bool) arr_10 [4U] [i_0] [i_2 + 1] [i_0] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_0])) : ((-(((/* implicit */int) (_Bool)1))))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (arr_7 [i_0] [i_3])))) ? (arr_1 [(unsigned char)0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))));
                        arr_12 [i_2] = ((/* implicit */_Bool) arr_9 [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */unsigned long long int) 1216758561)) : (13802905742548324979ULL)))) ? (arr_1 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_17 [i_0] [i_2] [12ULL] [i_0] [i_4] = ((/* implicit */unsigned int) var_6);
                            arr_18 [i_2] [i_1] [i_1] [i_2] [i_4] = var_13;
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) arr_5 [i_5] [(_Bool)1] [i_1])) && (((/* implicit */_Bool) var_5)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_2])) && (var_12))) || (((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2 + 1] [12] [i_2] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))))))));
                            var_26 *= ((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) / (-888905106)));
                            var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) arr_7 [i_2 + 1] [i_2]))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((arr_1 [i_2 + 1] [i_2 + 1]) / (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
