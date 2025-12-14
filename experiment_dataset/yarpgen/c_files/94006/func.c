/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94006
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((unsigned short) ((arr_3 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [(short)2] [i_0] [i_0]))))) > (((unsigned long long int) (short)32736))));
                var_19 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((arr_2 [i_0]) + (((/* implicit */unsigned long long int) (+(var_15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (short)32767))))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_15))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) & (arr_14 [i_0] [i_1] [i_2] [i_3 + 2] [16ULL]))))) ? (((/* implicit */int) var_8)) : (min((((((/* implicit */int) (short)-32764)) & (((/* implicit */int) (short)-32737)))), (((/* implicit */int) (unsigned char)161))))));
                                arr_16 [i_0] = ((long long int) (short)14816);
                                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_12);
                                arr_18 [i_0] [i_0] [i_0] [12U] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) max((3419286390U), (((/* implicit */unsigned int) (short)-32733))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((unsigned short) var_9)), (((/* implicit */unsigned short) var_8))));
}
