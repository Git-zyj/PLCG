/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65749
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
    var_16 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (8551111021938830770LL))))));
                                arr_14 [i_0] [(signed char)13] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [3LL]))))) * (((unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [0] [(unsigned char)2] [i_4 + 1])), ((~(((/* implicit */int) (signed char)-1)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_21 [2U] [i_5] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (unsigned short)65535)), (arr_9 [i_0] [i_5 + 1] [i_5] [(short)5])))));
                            var_18 &= ((/* implicit */short) (signed char)-10);
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (signed char)37))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [7] [7]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_7] [i_7 - 2] [i_7 + 3] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)8)) ? (7617231454063182909ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20)))))))) || (((/* implicit */_Bool) (~(max((-8551111021938830770LL), (((/* implicit */long long int) var_13)))))))));
                            var_21 = ((/* implicit */signed char) min((arr_3 [(signed char)0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
                var_22 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_25 [(signed char)14]))))), (((max((((/* implicit */unsigned long long int) (signed char)0)), (18446744073709551615ULL))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) == (var_3)))))));
            }
        } 
    } 
}
