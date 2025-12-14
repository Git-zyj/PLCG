/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65794
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
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = min((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (17U))) : (550187273U))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */short) max((max((((arr_6 [i_0] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) 1662438725U)))), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_22 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_8 [8U] [i_2])))));
                    }
                    var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [1U] [i_0] [i_0])), ((unsigned short)57050)))))))));
        /* LoopSeq 2 */
        for (short i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            arr_13 [(unsigned short)14] [i_4 - 2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) 1662438719U)) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-17376)))))))) ? (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_7)), (1503909726)))))) : (arr_11 [12LL] [12LL])));
            arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0] [i_0 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (arr_6 [i_4 + 2] [i_0 - 1]))) : (max((((unsigned long long int) var_19)), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
            var_25 = arr_8 [i_0] [15LL];
            var_26 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_0 + 1]) : (arr_2 [i_0] [i_0 + 1]))) + (2147483647))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((arr_2 [i_0] [14U]), (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3298293459U))))))) - (34232)))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
            var_27 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
            var_28 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 883960498U)), (var_4)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (1152921504606846912ULL)))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_29 -= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (max((((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned char)255)) - (241))))), (((((/* implicit */_Bool) 136216768U)) ? (((/* implicit */int) arr_12 [i_0 + 1] [(_Bool)1])) : (var_19)))))));
                var_30 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_20 [i_0] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 1] [7] [i_5] [i_6]))) : (min((((/* implicit */unsigned int) (!((_Bool)1)))), (arr_20 [i_5] [(short)3])))));
                /* LoopSeq 1 */
                for (short i_7 = 3; i_7 < 14; i_7 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) var_10);
                    arr_26 [i_0 + 1] [i_5] [i_6] [i_6] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) var_14);
                }
            }
            arr_27 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) == (((/* implicit */int) var_18)))))) * (((arr_6 [i_0] [i_5]) + (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) min((arr_5 [i_5] [i_0 + 1] [i_0 + 1]), ((_Bool)0)))), (var_18))))));
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_32 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_4)))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_16))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_30 [i_8])) : (-1583319901)))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_1)))))));
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_8]))))) > (((((/* implicit */_Bool) 1589462253U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (34359738367ULL))))))))));
        var_34 &= ((/* implicit */long long int) (unsigned short)58648);
        var_35 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((var_0) | (var_19)))) ? (((/* implicit */int) max((var_10), ((signed char)127)))) : (1503909712)))));
        var_36 = ((/* implicit */unsigned int) ((((_Bool) var_12)) ? (var_0) : (((/* implicit */int) arr_28 [i_8]))));
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) (-(var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_2))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_15)))));
}
