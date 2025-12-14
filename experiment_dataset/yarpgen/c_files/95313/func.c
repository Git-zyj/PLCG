/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95313
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
    var_10 = ((/* implicit */short) var_5);
    var_11 = ((/* implicit */unsigned int) max((var_11), (var_3)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_10 [i_0])))) != (arr_7 [i_0 + 1] [i_1] [(short)0])));
                var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned char) var_7)))));
                var_16 = ((/* implicit */unsigned int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 1]);
            }
            var_17 = ((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_0] [i_0 - 2] [i_1]);
            var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0 + 2]))));
        }
        var_19 &= ((/* implicit */long long int) ((_Bool) -4681222608890320470LL));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) 0);
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)2))))))));
        }
        arr_17 [(unsigned char)0] [(unsigned char)0] |= ((((/* implicit */_Bool) var_0)) || (var_6));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_5]))))), ((~(((unsigned int) arr_19 [i_5]))))));
        var_21 ^= ((/* implicit */unsigned long long int) ((long long int) 3013765212U));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4681222608890320465LL)))) * (min((((/* implicit */unsigned int) arr_19 [(_Bool)1])), (21U)))))) ? (((/* implicit */int) ((unsigned char) (short)23676))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_19 [15ULL]))) >= (7212600171298908723LL))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4681222608890320470LL)))))))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_5])), (62525997U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_1);
                                arr_33 [i_5] [i_5] [i_7 + 1] [(unsigned char)15] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) arr_24 [i_7]);
                                var_24 |= ((/* implicit */long long int) (+((~(((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_0))));
                }
            } 
        } 
    }
}
