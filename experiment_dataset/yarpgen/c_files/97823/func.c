/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97823
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
    var_10 = -246970573;
    var_11 = ((/* implicit */_Bool) ((unsigned int) var_4));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_3 [(signed char)4])), (33285996544LL))) | ((((!(((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-2271428144276019200LL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 3])) ? (arr_4 [i_0 + 2] [i_1 - 2]) : (arr_4 [i_0 + 2] [i_1 + 2])));
                    var_14 = ((/* implicit */signed char) ((arr_7 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1])))));
                }
                for (int i_3 = 3; i_3 < 7; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((arr_4 [i_1 - 2] [(signed char)5]) << (((arr_0 [i_0] [i_1]) - (2050119525U))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_3] [i_0] [i_0 - 1])) + (8394201326254267078ULL)))) ? (arr_1 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) 16544703823450815542ULL))))))))));
                    arr_13 [(short)8] [i_1 + 1] [i_0 + 1] [(short)8] &= 455871570;
                }
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46678)) | (33554416)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63410))) : (((3729302209107263536LL) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [6] [i_0] [i_0]))))))) != (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0]))))) & (((((/* implicit */int) (short)-4096)) + (((/* implicit */int) (unsigned char)140)))))))));
            }
        } 
    } 
}
