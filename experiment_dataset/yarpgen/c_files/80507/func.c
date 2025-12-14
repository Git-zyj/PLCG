/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80507
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
    var_16 = ((/* implicit */_Bool) (~((+(((((/* implicit */unsigned long long int) 486734190U)) + (var_12)))))));
    var_17 = var_11;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65024)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) || (arr_2 [i_0 - 2]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (14ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2019584370U)))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [(signed char)12] [i_1 - 1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) arr_1 [i_1]);
                    arr_10 [i_2] [(unsigned char)6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_4 [i_0 - 1]) | (arr_4 [i_0 + 1])))) * (0LL)));
                    var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    arr_14 [13ULL] [i_1 - 1] [i_1] [i_3] = ((/* implicit */int) (+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2275382918U))))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [5ULL])) ? (((/* implicit */unsigned long long int) arr_8 [i_0 + 3] [i_3] [i_0 + 3] [8])) : (8488284927006019375ULL)))) ? (((/* implicit */unsigned long long int) (+(2019584377U)))) : (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) & (18446744073709551615ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_15)))) ^ (((int) -5613363121223941309LL)))))));
                    arr_15 [i_0] [(unsigned char)8] = ((/* implicit */_Bool) arr_6 [i_0 + 3] [i_3] [i_0 + 3]);
                    arr_16 [(unsigned short)6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 31LL)) ? (-3386880623571210950LL) : (1473411246683335916LL))))) - (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4ULL]))))))))));
                }
            }
        } 
    } 
}
