/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65098
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(signed char)6] [i_1])) ? (((((/* implicit */_Bool) (signed char)-3)) ? (arr_9 [11] [i_1] [i_2] [i_3]) : (((/* implicit */int) (short)62)))) : (var_0)));
                        var_15 = ((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_2]));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_16 ^= ((((arr_15 [i_4] [i_2] [i_1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))) >> (((((/* implicit */int) ((signed char) arr_15 [i_4] [(signed char)5] [i_1] [i_0]))) - (45))));
                        arr_16 [i_0] [i_1] [i_4] = ((((/* implicit */_Bool) (((~(arr_4 [i_0] [i_1] [i_2]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40225)))))) ? ((+(((/* implicit */int) (unsigned short)52382)))) : (((/* implicit */int) ((1314091619U) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (short)16123)))))))));
                    }
                    var_17 += ((/* implicit */signed char) var_12);
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_18 ^= ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_5])))));
                    var_19 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_5])) ? (((/* implicit */long long int) var_10)) : (5950259447351454335LL)))) ? ((~(((/* implicit */int) (unsigned short)13153)))) : ((-(((/* implicit */int) (signed char)-91))))))));
                    var_20 = min(((~(2059227489))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_5]))))));
                    var_21 ^= ((/* implicit */unsigned short) ((long long int) arr_15 [i_0] [(signed char)4] [i_5] [i_0]));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(0U)))) == (arr_7 [(_Bool)1] [i_1])));
                                arr_23 [i_0] [5] [i_7] [i_6] [i_7 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_2 [i_1] [i_0])))));
                arr_24 [i_0] [0ULL] [i_0] &= ((/* implicit */signed char) min((((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */int) ((unsigned short) var_1));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
    var_26 |= ((/* implicit */unsigned long long int) max((((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_7))))), (((/* implicit */signed char) (!(var_6))))));
}
