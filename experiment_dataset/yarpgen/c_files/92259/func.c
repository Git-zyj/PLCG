/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92259
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = (~((-(((/* implicit */int) arr_4 [i_2])))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_3 [i_0])), (arr_2 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned char) var_11))))) && (((/* implicit */_Bool) ((arr_7 [i_1] [i_1] [i_2]) + (((/* implicit */long long int) arr_0 [(unsigned char)7]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                arr_15 [i_4] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_3])) / (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((-3875851267198355134LL) + (3875851267198355146LL)))))) ^ (var_8)))));
                arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((signed char) var_0));
                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -3875851267198355134LL)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)127))));
                var_15 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (short)19680)), (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9887))) : (18446744073709551584ULL))))), (((((/* implicit */_Bool) max((30ULL), (arr_14 [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (max((var_8), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_4]))))))));
                arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (max((arr_14 [i_3] [i_3]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_4]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_12 [i_3]))) >> ((((~(((/* implicit */int) arr_13 [i_3] [i_4])))) + (54396))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-111))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) -1059179468))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) & (min((4294967295U), (((/* implicit */unsigned int) var_10))))))));
}
