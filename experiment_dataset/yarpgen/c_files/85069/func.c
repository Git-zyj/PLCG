/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85069
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_16)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)11)) : (var_8)))), (var_7)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = var_6;
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */int) max((arr_11 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)56))))) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0])))) != (min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) arr_11 [i_1] [i_3])), (var_5)))))));
                            }
                        } 
                    } 
                } 
                var_22 = max((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1])) : (var_1))), (var_17));
                var_23 = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_24 = ((/* implicit */signed char) arr_13 [i_5]);
        var_25 = ((/* implicit */unsigned long long int) arr_14 [(unsigned short)0] [i_5]);
        var_26 = ((/* implicit */unsigned short) (-(1108654786260748060LL)));
    }
}
