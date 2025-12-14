/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86791
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7840)) / (((/* implicit */int) (unsigned short)23219))))) ? (((/* implicit */int) max(((unsigned short)7840), ((unsigned short)7840)))) : (((int) (unsigned char)120)))))))));
                            arr_8 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_4 [(short)18]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551602ULL)))))));
                    var_16 = ((/* implicit */unsigned int) var_9);
                    var_17 *= ((/* implicit */unsigned char) ((((arr_5 [i_0]) + (2147483647))) << (((((((int) var_1)) + (1736889398))) - (29)))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned int) (~(var_12)));
                    arr_15 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7846)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1] [i_0]))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_7))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)37)) ? (19ULL) : (((/* implicit */unsigned long long int) 5868916894124670497LL))));
                    var_21 = ((/* implicit */short) (~(260046848U)));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5978))) : (var_7))));
                    var_23 ^= ((((((/* implicit */_Bool) (short)11658)) ? (((/* implicit */int) (short)-11659)) : (((/* implicit */int) (unsigned char)120)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                }
                var_24 ^= ((/* implicit */short) ((unsigned long long int) (+((+(((/* implicit */int) (signed char)-93)))))));
                arr_18 [i_0] = ((/* implicit */short) ((arr_9 [i_1] [i_0] [i_0]) | (arr_9 [i_1] [i_0] [i_0])));
                arr_19 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_9 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_25 = min((min((((var_0) + (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (-((+(3268908238U)))))));
    var_26 = ((/* implicit */int) var_7);
    var_27 ^= ((/* implicit */unsigned long long int) ((_Bool) var_9));
}
