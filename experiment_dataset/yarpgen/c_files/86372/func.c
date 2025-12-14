/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86372
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [(short)7])), ((unsigned short)41881))))) : (((0ULL) / (5964990162629713938ULL))))) == (min((((((/* implicit */unsigned long long int) -1002016487)) & (12481753911079837671ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))))))));
        var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_0] [4]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_16 ^= ((/* implicit */signed char) var_7);
            var_17 ^= (-(((/* implicit */int) arr_1 [6] [i_0])));
            var_18 = ((/* implicit */int) min((var_18), ((((~(((/* implicit */int) var_3)))) - (((/* implicit */int) ((unsigned short) 5964990162629713945ULL)))))));
        }
    }
    var_19 -= ((((/* implicit */int) var_3)) & (1998785486));
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 1] [i_2])) ? (arr_8 [i_2]) : (var_11)))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_2 + 2] [i_2] [i_6] [i_2 - 2] [i_2])), (((((/* implicit */_Bool) (signed char)-93)) ? (12481753911079837670ULL) : (((/* implicit */unsigned long long int) var_2))))))) ? (((((-1) < (var_5))) ? (((int) (short)-16384)) : (-1775057929))) : (((/* implicit */int) (short)17272))));
                            arr_20 [i_6] [i_2] [i_4] [i_2] [i_2] = ((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) * ((((+(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2 + 2]))) / (arr_9 [i_2 + 1] [i_3]))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((arr_16 [i_2 + 1] [i_2 + 1] [i_4] [i_2 + 2] [i_2 - 1]) + (2147483647))) >> (((arr_16 [i_2 + 1] [i_2 - 1] [i_7] [i_2 + 1] [i_2 - 1]) + (1581548668))))))));
                        var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) 5964990162629713938ULL)) ? (arr_23 [i_2] [i_4]) : (((/* implicit */int) var_3))))));
                    }
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) 1775057928)) ? (min((max((1256443704), (var_2))), (((/* implicit */int) ((short) arr_16 [i_4] [i_3] [i_4] [i_2] [i_2]))))) : (((max((arr_9 [i_2] [i_2]), (((/* implicit */int) (short)29936)))) | (arr_14 [i_4]))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16383)) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_26 = (short)32764;
        arr_27 [(short)14] [i_8] = ((/* implicit */signed char) var_9);
    }
    /* vectorizable */
    for (short i_9 = 2; i_9 < 13; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_9] [i_9 + 2] [i_9])))))));
        arr_30 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-28933)) + (2147483647))) << (((((-1686134438) + (1686134460))) - (22)))))) ? (((var_1) & (var_9))) : (((/* implicit */int) arr_10 [i_9] [i_9] [i_9]))));
    }
}
