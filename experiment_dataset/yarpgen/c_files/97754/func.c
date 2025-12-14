/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97754
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_6), (var_6))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_5))) ? ((-(((/* implicit */int) (short)7994)))) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (unsigned char)0))))));
    var_11 = ((/* implicit */unsigned char) -198188172);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_4))));
                    var_13 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) (short)-7979)) : (((/* implicit */int) (unsigned char)248))))))));
                    arr_7 [i_0 - 1] [0] [(unsigned char)10] [i_0] |= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-7996))))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)64))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_21 [i_3] [16LL] [(unsigned char)5] [(signed char)17] = ((/* implicit */_Bool) (((!(var_0))) ? (0) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_6] [i_6] [15ULL] [15ULL])) != (((/* implicit */int) arr_11 [i_6] [i_3] [i_3])))))));
                        var_14 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)8018)) : (((/* implicit */int) (unsigned char)18)))));
                        var_15 = ((/* implicit */unsigned int) arr_16 [i_3] [(unsigned short)6]);
                    }
                    arr_22 [i_3 - 1] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_4] [i_3 - 1])) : (((/* implicit */int) arr_17 [i_4 + 2] [i_3] [i_3 + 1]))))) - (((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (503606421) : (((/* implicit */int) var_4))))) : (-4443524846651404973LL)))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    var_16 -= ((/* implicit */unsigned short) (_Bool)1);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */int) (short)7996)) : (((/* implicit */int) var_8))))))));
                    arr_26 [i_3] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)178)) ? (2360686009574415975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned long long int) var_3))));
                }
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3] [i_3])) ? (((/* implicit */unsigned int) -2147483635)) : (var_5)))) ? (((/* implicit */unsigned long long int) arr_24 [i_3] [(unsigned char)14] [i_3] [i_3])) : (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) : (var_1)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -503606426)) ? (1423754198U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3])))))) ^ (min((arr_10 [i_3] [i_3]), (((/* implicit */long long int) 2871213097U)))))) : (((/* implicit */long long int) ((((arr_10 [i_3] [i_3]) != (arr_24 [i_3 + 1] [(short)0] [i_4] [i_3 + 1]))) ? (min((((/* implicit */unsigned int) arr_20 [i_3] [i_3 - 1] [i_4 - 2] [i_4])), (arr_1 [9U] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
            }
        } 
    } 
}
