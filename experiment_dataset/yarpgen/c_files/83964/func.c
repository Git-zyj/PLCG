/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83964
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
    var_17 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_18 += ((/* implicit */long long int) var_4);
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) arr_1 [i_0] [i_1 - 1]))))) ? (((arr_6 [i_1 + 2]) ? (((/* implicit */int) (short)1117)) : (((/* implicit */int) (short)-21132)))) : (-1137458244))) | (2102413439)));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_19 = arr_6 [i_1];
                        var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)24971)), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_8 [i_0])), (arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_1])))), (max((9007199254740991ULL), (var_15)))))));
                        var_21 += ((/* implicit */short) (unsigned char)190);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0 - 1] [i_0]);
                            var_23 = arr_9 [i_0] [i_0] [i_0] [i_6];
                            var_24 -= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_0])), (1357227002)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))), (arr_2 [i_4] [i_6 + 2])));
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (2541737963U)));
    }
    var_26 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1582965050)))) ? (((/* implicit */int) var_12)) : ((-(-1137458247))))));
}
