/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56185
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((long long int) var_3)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 -= ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_0 [(short)9]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 + 1])) && (((/* implicit */_Bool) arr_1 [i_3] [i_2 + 1]))));
                        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3 - 1] [9U] [5LL] [i_3 - 1] [i_2 - 1])) + (((/* implicit */int) arr_9 [i_3 + 2] [i_3] [i_3] [i_3 - 1] [i_2 - 1]))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(_Bool)1] [i_2 - 1] [i_0] [i_0]))))) ? (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((388159001) << (((arr_3 [i_0] [i_0] [i_2]) - (5742476014535185904ULL))))))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = (+(((int) var_8)));
                        var_14 = ((/* implicit */_Bool) ((long long int) (-(arr_3 [i_3 - 1] [i_1] [i_0]))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((unsigned int) var_0))) : ((+(var_8)))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_2 [(unsigned short)16] [16] [i_0])) : (var_4)))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 - 4] [i_4 - 4] [i_4 + 1])) ? (arr_3 [i_4 - 4] [i_4 - 2] [i_4 - 3]) : (((/* implicit */unsigned long long int) 131140587U))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (int i_6 = 4; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (unsigned short)13360);
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((arr_21 [(short)13] [i_5 + 4] [i_5 + 2] [19]) >> ((((~(((/* implicit */int) (unsigned short)52176)))) + (52182))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_7 = 4; i_7 < 21; i_7 += 1) 
            {
                var_18 -= ((/* implicit */signed char) arr_17 [i_7] [i_7 - 3] [i_4]);
                var_19 -= ((/* implicit */unsigned short) ((int) (-(arr_3 [i_0] [i_0] [i_7]))));
            }
        }
        var_20 -= ((/* implicit */signed char) (unsigned short)13360);
    }
    var_21 = ((/* implicit */_Bool) var_4);
    var_22 -= ((/* implicit */_Bool) var_8);
}
