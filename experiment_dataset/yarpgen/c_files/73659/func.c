/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73659
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
    var_13 ^= ((/* implicit */signed char) ((((int) var_0)) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((3556169925U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (738797371U))))))));
    var_14 = max((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) - (3556169925U))), ((~(685069414U))))), (((/* implicit */unsigned int) var_6)));
    var_15 = min((max((((/* implicit */unsigned int) max((var_1), (var_2)))), ((~(685069414U))))), (((unsigned int) var_12)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3556169925U)))) ? (3556169925U) : (((3536347421U) & (3609897881U)))))) ? (max((((long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4267102103693687755LL))))) : (-8348394885274364843LL)));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((1188502323489075757LL) | (var_7))))));
                var_17 = ((/* implicit */long long int) min((var_17), (arr_4 [i_0 + 2] [i_0 - 1])));
                var_18 ^= ((/* implicit */unsigned int) arr_2 [i_1 - 2] [8] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_13 [i_2] = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_3] [i_2]);
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_2) ? (arr_6 [i_4]) : (arr_6 [i_4])))), (var_7))))));
                    var_20 = (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 3536347421U)) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) var_8)))))));
                    arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_6 [i_2]) : (((/* implicit */int) var_11))))) & (arr_12 [i_4] [i_3] [i_2] [i_2])));
                }
            } 
        } 
    } 
}
