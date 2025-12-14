/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91742
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (~(3160678551U)));
        var_17 *= ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_1]))));
        var_20 = (!((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? ((~(((/* implicit */int) (short)32765)))) : (((/* implicit */int) arr_7 [i_2]))))) || (((/* implicit */_Bool) arr_8 [i_2]))));
        var_22 = ((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_14))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (arr_10 [i_4 + 1]) : (((/* implicit */unsigned int) arr_12 [i_4 + 1] [i_5 + 1] [i_4] [i_3]))))));
                        var_24 = ((/* implicit */int) arr_7 [i_3]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_3)) > (((/* implicit */int) (short)32760))))));
                            var_26 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)16568)))));
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                            var_28 = ((/* implicit */signed char) (short)32767);
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) arr_16 [(signed char)4]);
        arr_18 [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))), ((-(((/* implicit */int) var_4))))));
    }
}
