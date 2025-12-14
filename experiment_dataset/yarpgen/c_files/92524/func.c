/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92524
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)45904)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_6)) - (64480))))) | (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) max(((unsigned short)17), (max(((unsigned short)19632), ((unsigned short)0))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)35603)) < (((/* implicit */int) (unsigned short)30587)))))))));
                        arr_14 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
                        arr_15 [i_0] [i_1] [(unsigned short)6] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [(unsigned short)3] [(unsigned short)15] [i_3]))));
                        arr_16 [i_2] [i_2] [i_2] = (unsigned short)34949;
                        arr_17 [i_3] [i_2] [i_2] [i_0 - 3] = var_1;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_32 [i_6] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)65535)))) * (max((((/* implicit */int) ((unsigned short) var_9))), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [(unsigned short)14]))))))));
                                var_13 = max(((unsigned short)46295), (min((arr_3 [i_6] [i_5 + 1]), ((unsigned short)11165))));
                                var_14 = min((min((arr_22 [i_5 - 1] [i_5 + 2] [(unsigned short)0]), (arr_22 [i_5 + 2] [i_5 - 1] [(unsigned short)5]))), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_22 [i_5 + 2] [i_5 + 1] [i_5 - 1]))))));
                            }
                        } 
                    } 
                    arr_33 [i_5] = ((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_4])) || (((/* implicit */_Bool) var_3)))))))));
                }
            } 
        } 
    }
}
