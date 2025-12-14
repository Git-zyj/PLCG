/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85454
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (6595066047128920191ULL) : (var_4))) : (var_4)));
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) 2147483647)))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned short) (unsigned short)32256))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)6]))) == (13636206207634272782ULL)))) : (-583624576))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (unsigned short)33585)) ? (arr_12 [(unsigned short)20] [i_2] [i_2] [0LL]) : (((/* implicit */long long int) 4294967295U)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_1)))), (arr_12 [i_1] [i_2 + 1] [i_2] [i_5])))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2 - 2] [i_4 + 1])) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)3)) : (926185621))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned char) (signed char)79)), (var_6)))))));
                    var_20 = ((/* implicit */_Bool) var_6);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) (unsigned char)56))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11851678026580631441ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)993)) : (((/* implicit */int) (unsigned short)0))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned char)249))))))) < (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)156)))), (((/* implicit */int) var_10)))))));
}
