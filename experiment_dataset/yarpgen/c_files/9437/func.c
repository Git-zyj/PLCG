/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9437
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (signed char)26);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_1))) & (((/* implicit */int) arr_3 [i_0] [1U] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_1 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))) : ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_1] [(signed char)7] [(signed char)7]))))) : (((((/* implicit */_Bool) (signed char)-26)) ? (4424745125909854529ULL) : (((/* implicit */unsigned long long int) var_1))))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (var_1)))) ? (((/* implicit */long long int) arr_2 [i_1 + 1] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) (signed char)-27);
                var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (arr_4 [i_2])))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-11)) != (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_2 - 1])))))))));
            }
        } 
    } 
}
