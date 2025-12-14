/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86128
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (short)1511)))) & (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)113)) > (((/* implicit */int) (signed char)-113))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1511)) ? ((+(((var_8) * (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)65504);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-1509)) && (((/* implicit */_Bool) (short)17904))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)0])) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-119)) % (((/* implicit */int) (_Bool)1))))))))));
                            var_12 = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_3))))))));
        var_14 = ((/* implicit */signed char) (unsigned short)24178);
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                arr_23 [i_6] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)41359))) ? (((((/* implicit */int) arr_16 [i_6] [(unsigned short)1] [i_7 - 1] [i_7] [i_7])) & (((/* implicit */int) arr_16 [i_6] [i_7] [i_7 - 1] [i_7] [i_7])))) : (-1094952837)));
                arr_24 [i_6] [i_6] &= ((/* implicit */int) (!((_Bool)1)));
                var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6] [i_6])) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))) : ((-(((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -1094952832))))), (var_0)));
}
