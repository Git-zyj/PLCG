/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69275
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (var_5)))))))) & (((unsigned long long int) -4348586731917095686LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_4 [(short)0] |= ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [2ULL]))) - (arr_0 [(short)3] [i_1 - 1]))) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 231731558)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [(_Bool)1]))))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((4069465481225288319ULL) == (((/* implicit */unsigned long long int) arr_1 [i_0])))))) - (((arr_0 [i_1 - 1] [i_1 + 1]) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 4] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)19538)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -7544002105694561579LL)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_0] [i_0] [3LL]))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) - (min((((/* implicit */unsigned int) (short)-13385)), (arr_1 [i_0])))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)822), (((/* implicit */unsigned short) min(((short)14481), (arr_2 [i_0] [i_0] [i_1 + 2])))))))) * (arr_1 [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 3])) : (((/* implicit */int) arr_13 [(unsigned short)10] [(unsigned short)10] [i_3 + 3] [i_3 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_12 [i_2] [i_2])))) / (((/* implicit */int) (signed char)-26))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (-2267123559352715776LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [9LL] [i_4]))) & (var_4))))))));
                    var_18 -= ((/* implicit */unsigned long long int) ((arr_7 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1)))))))))));
                    var_19 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_8)))));
                    var_20 ^= arr_7 [i_3];
                    var_21 ^= ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3] [i_3])) <= (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 - 1]))) : (3689541231U))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (min((var_11), (((/* implicit */unsigned short) var_10))))));
}
