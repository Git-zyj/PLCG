/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88866
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (var_7))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33)))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)83)) ? (16440488405826320660ULL) : (0ULL)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)173))));
                }
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) (unsigned char)79)) != (((/* implicit */int) (unsigned char)50)))))));
                var_19 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)176)) - (-168377338)));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) -1390983482)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (short)32767)))) | (((((/* implicit */int) arr_0 [i_0 + 2] [i_0])) % (((/* implicit */int) arr_2 [i_0 + 2]))))));
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2970155316479486828ULL)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)104))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_5))));
    var_22 = ((/* implicit */unsigned char) var_5);
}
