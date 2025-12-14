/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58525
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned short) (((-(((/* implicit */int) var_11)))) > (((/* implicit */int) arr_1 [i_3]))));
                            arr_12 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                            arr_13 [i_1] [i_1] [i_2] [21] = (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3])) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_6)))))));
                            arr_14 [i_0] [i_1] [i_2] [6U] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [(signed char)9] [i_3]))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) var_7)))));
                arr_16 [i_0] [i_0] [(short)4] &= var_9;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4172566536505328624LL)) && ((!((!(((/* implicit */_Bool) 13841839975341288755ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                arr_30 [4] [i_5] [4] [i_5] [i_4] = ((/* implicit */int) var_6);
                                arr_31 [i_5] = ((/* implicit */long long int) min((arr_18 [i_4 + 1]), (((/* implicit */int) arr_20 [i_4 + 3] [i_4 + 1] [i_4 - 1]))));
                                arr_32 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (arr_11 [i_5] [i_5] [i_4 + 1] [i_4 + 3]) : (((((/* implicit */int) arr_29 [i_4 - 2] [i_5] [i_6] [i_7] [i_8])) ^ (((/* implicit */int) arr_29 [9] [i_5] [11LL] [1LL] [i_4 - 2]))))));
                            }
                        } 
                    } 
                } 
                var_16 = var_12;
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned char) ((signed char) arr_8 [i_4 - 1] [i_4 - 2] [24] [i_9 + 1]));
                            var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))))) >= (-4123011658218354288LL)));
                            var_20 = (-(((/* implicit */int) arr_8 [i_9 - 1] [i_9 - 1] [i_4] [(unsigned short)18])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ^ (min((((/* implicit */unsigned int) var_3)), (var_1))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & ((~(((/* implicit */int) var_8)))))))));
}
