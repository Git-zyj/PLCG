/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76912
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2147483647), (1605812938)))) ? (((/* implicit */int) var_14)) : (((1605812958) | (((/* implicit */int) arr_1 [i_2] [i_2]))))))) : (min((arr_7 [i_2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) min((((/* implicit */signed char) arr_8 [i_2] [i_1] [i_2])), ((signed char)27))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 = (-((((((_Bool)1) || (((/* implicit */_Bool) arr_9 [(unsigned short)19] [(unsigned short)11])))) ? ((~(((/* implicit */int) arr_13 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_13 [i_1] [i_1]))))))));
                                arr_16 [i_1] [i_1] [i_2 - 2] [i_3] [i_1] [i_4] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_15 [i_1] [i_2 + 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 340748785U)) ? (((/* implicit */int) (unsigned char)143)) : (-1605812938))))))) >> (((((/* implicit */int) max((arr_13 [i_1] [i_1]), (arr_13 [i_1] [i_1])))) - (41)))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_15 [i_1] [i_2 + 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 340748785U)) ? (((/* implicit */int) (unsigned char)143)) : (-1605812938))))))) >> (((((((/* implicit */int) max((arr_13 [i_1] [i_1]), (arr_13 [i_1] [i_1])))) - (41))) - (152))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_22 [(signed char)8] [i_1] [i_2] [i_5] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min(((-(var_7))), (((/* implicit */int) ((_Bool) arr_0 [i_6])))))) / (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-106)), ((unsigned char)50))))) : (var_16)))));
                                var_18 = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) 8367756865720902218ULL)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_0)))) >= (((((/* implicit */_Bool) -1334463099)) ? (1053796781) : (((/* implicit */int) var_14))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (var_15)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (short)2735);
}
