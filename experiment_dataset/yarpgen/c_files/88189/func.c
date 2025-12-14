/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88189
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = (~(max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)32)) > (((/* implicit */int) var_7))))), (((var_9) ? (arr_4 [10LL] [10LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        {
                            var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((arr_4 [i_3] [i_3 + 4] [i_0]) - (((/* implicit */long long int) -1804301428)))) << (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_1 [1ULL] [i_1])))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))))) : (((/* implicit */unsigned short) ((((((arr_4 [i_3] [i_3 + 4] [i_0]) - (((/* implicit */long long int) -1804301428)))) + (9223372036854775807LL))) << (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_1 [1ULL] [i_1])))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
                            arr_13 [i_3 + 2] [i_0] [i_2] [(_Bool)0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((var_5) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(short)5] [i_2])))))))) ? ((+(((/* implicit */int) arr_9 [i_3 + 3] [i_3 + 3] [i_2] [9ULL])))) : (max((((/* implicit */int) max((arr_7 [3LL] [3LL] [i_0]), ((unsigned char)41)))), (((((/* implicit */int) (unsigned short)16785)) << (((/* implicit */int) arr_3 [i_0])))))));
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (max((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3])), ((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0])) == (((/* implicit */int) var_10)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0])), ((unsigned short)48747))))) % (((((/* implicit */_Bool) -5443978889536676084LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48757)))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))) : (arr_10 [i_0] [i_0] [i_1]))) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_0] [i_0])))));
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) || (arr_2 [i_0])))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_1);
}
