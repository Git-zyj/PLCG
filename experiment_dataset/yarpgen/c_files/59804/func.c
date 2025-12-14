/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59804
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)12614))) < (((((2056863429) > (var_1))) ? (((((-1622565614) + (2147483647))) << (((((/* implicit */int) (unsigned short)12597)) - (12597))))) : (((/* implicit */int) (unsigned short)12614))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)65521))))) ? (-1039795378) : (-917192726)));
                                arr_16 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)2990)) ? (((/* implicit */int) (unsigned short)52921)) : (1039795378));
                            }
                        } 
                    } 
                    arr_17 [i_0 + 1] [0] [i_1] [i_1] = -889063078;
                }
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    arr_20 [i_1] [i_0 - 4] [4] [i_0] = (-(((/* implicit */int) arr_0 [i_0] [i_0])));
                    arr_21 [i_1] [3] = ((/* implicit */int) max(((unsigned short)12606), ((unsigned short)0)));
                }
                var_18 = ((int) ((((/* implicit */_Bool) (unsigned short)52915)) ? (((((/* implicit */_Bool) arr_18 [i_0 - 2])) ? (-1039795384) : (((/* implicit */int) (unsigned short)12621)))) : (-1185953670)));
            }
        } 
    } 
    var_19 = (-(116305472));
}
