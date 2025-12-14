/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66552
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
    var_15 = ((((/* implicit */unsigned long long int) (+(var_3)))) | (min((((/* implicit */unsigned long long int) var_11)), (15373566324112452389ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) min(((short)6912), (arr_3 [i_0] [i_0] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_0]))))) : ((-9223372036854775807LL - 1LL)))));
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16940))))) ? (((unsigned long long int) arr_1 [i_1])) : (var_1)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) arr_5 [i_5 + 1]);
                            arr_14 [i_2] [(_Bool)1] = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_3 [i_3] [i_3] [i_4])))), (((((/* implicit */_Bool) 6786642742560775038LL)) ? (((/* implicit */int) arr_3 [i_5 + 1] [(signed char)8] [i_3])) : (((/* implicit */int) (short)-6912))))));
                            arr_15 [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5 - 1])))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [2LL] [2LL] [i_2])) ? (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_3] [i_2])) ? (arr_10 [i_5] [i_5] [i_2]) : (arr_10 [i_2 + 3] [8U] [i_2]))) : (((unsigned long long int) arr_6 [i_2 + 1]))));
                            var_21 = ((/* implicit */int) ((unsigned char) var_3));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)-6909), (((/* implicit */short) arr_9 [i_2] [i_3]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_0))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_3);
}
