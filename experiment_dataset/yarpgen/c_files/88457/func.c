/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88457
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(short)3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)58165)) : (((/* implicit */int) var_3))))) : (arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            arr_10 [i_0 + 2] [i_0] [i_2] [i_3] [i_4] = arr_0 [i_4];
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)22497)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_1]))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((short) var_6))))))));
                            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_4] [i_1] [i_1 + 1] [i_4 + 3])) : (((/* implicit */int) ((short) var_8)))));
                            arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) arr_3 [i_0]))));
                        }
                        var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_16 = max((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (short)-22498)) == (((/* implicit */int) arr_14 [i_6])))))), (((((((/* implicit */_Bool) (short)-22497)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15796))) : (0U))) >> (((max((var_6), (((/* implicit */unsigned int) (short)15796)))) - (521651457U))))));
                                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43541)) ? (1267397037U) : (arr_17 [i_5 - 3])))) ? (((/* implicit */int) (short)15770)) : (((((/* implicit */_Bool) (unsigned short)18176)) ? (((/* implicit */int) (short)-15791)) : (((/* implicit */int) (short)-22492))))));
                                arr_25 [i_5] [i_5] [i_9] [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned int) min((var_8), ((short)21784)))), ((-(var_0)))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */short) min((((((/* implicit */_Bool) max((var_10), (var_2)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_5]))))) : (((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (var_4) : (3856736343U))))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) > (var_6))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (short)-22492))))))))));
                    var_19 ^= ((/* implicit */unsigned short) ((max(((+(((/* implicit */int) var_8)))), (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_7 [i_7] [i_6] [i_5])))))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (arr_20 [i_7])))) ? (((/* implicit */int) ((short) arr_14 [i_5 - 2]))) : (((/* implicit */int) ((unsigned short) (short)22497)))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_8)))));
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max(((short)-22507), (((short) arr_0 [i_10]))));
        var_22 = ((/* implicit */short) ((((((((/* implicit */int) var_9)) | (((/* implicit */int) var_2)))) - (((((/* implicit */_Bool) (short)-22492)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) arr_1 [i_10])))))));
    }
    var_23 = ((/* implicit */short) max(((((((-(((/* implicit */int) (unsigned short)17514)))) + (2147483647))) << (((var_0) - (4196506521U))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)33974)) : (((/* implicit */int) var_11))))))));
}
