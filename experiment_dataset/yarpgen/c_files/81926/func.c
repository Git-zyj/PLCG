/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81926
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((_Bool) ((((/* implicit */unsigned long long int) 926060629U)) * (270215977642229760ULL)))) ? (((/* implicit */unsigned int) ((arr_5 [i_2] [i_1 - 3] [i_1]) & (((/* implicit */int) (unsigned char)69))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64276))))) ? (2986908505U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [(short)6] [(short)6] [i_2]))))))))))));
                            arr_10 [i_0] [i_2] [i_0] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1510603510U)) ? (((/* implicit */unsigned long long int) (~(878858937560748004LL)))) : (arr_3 [i_3])));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2] [i_3])) == (max((((/* implicit */int) (unsigned char)0)), (-1898122173)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((short) ((int) arr_11 [i_0 - 2] [i_1] [i_1 + 3] [i_4]))))));
                    arr_13 [i_1] [i_1 + 3] = ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_4]);
                    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 255358697)) ? (arr_12 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) - (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_1])))) * (arr_8 [i_0] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [(unsigned char)8] [(unsigned char)8])))))))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_6)), (var_9)))), (var_11)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_3)))) : ((-(min((var_4), (((/* implicit */int) var_5))))))));
}
