/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60357
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_1 - 1] [i_1 - 3]), (arr_3 [i_1 - 1] [i_1])))) ? (((/* implicit */unsigned long long int) var_19)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 4]))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -3364828524830320053LL)) : (var_12)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) min((arr_2 [i_1] [(unsigned short)9]), (((/* implicit */unsigned long long int) (unsigned char)237))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) 15164351349483650124ULL);
                            var_22 = ((/* implicit */signed char) (-((-((-(3364828524830320053LL)))))));
                            arr_14 [i_0] [i_1] [i_1 - 3] [i_2] [21U] [i_0] = ((/* implicit */unsigned short) ((int) var_5));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_12 [i_0] [i_1 - 1] [i_1] [i_0]), (arr_12 [i_1] [i_1 - 1] [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            for (unsigned int i_6 = 3; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */short) (unsigned char)5);
                                var_25 = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    arr_30 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_5] [i_4 - 1] [i_5]), (arr_6 [i_5] [i_4 + 3] [i_5])))) ? (((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_4 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_15 [i_4 - 1] [i_4 - 3]))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (arr_15 [i_4 - 3] [i_4 - 1])))));
                    arr_31 [(unsigned char)10] [i_5] [i_5] [i_6 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_15 [i_6 - 1] [i_5 - 2]), (((/* implicit */unsigned int) arr_24 [i_4 + 3] [i_5] [i_5 - 1] [i_6 - 2] [i_4 + 2])))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) var_1);
    var_27 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4611686018427387904ULL)) || (((/* implicit */_Bool) var_17))))) : ((+(((/* implicit */int) var_5)))))) / (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_36 [(signed char)14] [i_10] [i_9] = ((/* implicit */long long int) (~(min((((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_4 [i_9] [i_9 + 1] [14]))))), (((((/* implicit */_Bool) var_12)) ? (1689963041) : (((/* implicit */int) (signed char)-112))))))));
                var_28 = ((/* implicit */unsigned int) arr_0 [i_9]);
            }
        } 
    } 
}
