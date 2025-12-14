/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92386
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
    var_11 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((unsigned char) 15166936507619003996ULL))), (min((var_0), (((/* implicit */unsigned int) (unsigned char)78))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))) - ((+(((/* implicit */int) (unsigned char)78))))))) - (max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                    var_13 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_2])))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_2 + 3]))) : (max((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)6]))))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 + 1]))))) ? (((arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]) ? (var_6) : (((/* implicit */long long int) 1651915233U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1)))))))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_2 [i_0] [i_2 + 1]))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */short) ((((((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) > (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (((var_10) << (((((var_8) + (7926465906644208465LL))) - (44LL))))))) << (((((var_6) & (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_7 [i_3] [i_3] [i_3])))))))) - (2642LL)))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_2)) != (((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5 + 4] [i_5 + 2] [i_5 - 1] [i_5 + 4] [i_5])) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_11 [1U]))) : (((/* implicit */unsigned long long int) arr_1 [i_3] [i_4]))))));
                        var_17 -= ((/* implicit */unsigned char) ((((_Bool) arr_16 [i_6 + 1] [i_4] [i_5 + 1])) ? (((((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) arr_12 [i_3] [i_4])))) & (((/* implicit */int) (unsigned short)8191)))) : ((+(((/* implicit */int) ((var_0) < (2302910349U))))))));
                        var_18 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_18 [i_3] [i_6] [i_5] [i_4] [i_5 + 4] [i_6 + 1])) <= (((/* implicit */int) arr_18 [i_3] [i_4 + 1] [17LL] [i_6] [i_5 + 1] [(_Bool)1])))));
                    }
                    var_19 = ((/* implicit */int) arr_6 [i_3] [i_4] [i_4]);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_3)))) : (((var_3) ? (((/* implicit */int) arr_9 [i_4 + 2])) : (((/* implicit */int) var_5))))));
                    arr_21 [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 + 4] [i_4 + 2])))))));
                }
            } 
        } 
        arr_22 [8U] = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_21 = ((/* implicit */unsigned int) var_6);
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_3) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (6755135098386204111LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))))));
    var_23 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_7))))))) < (max((max((var_10), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))))))));
}
