/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87595
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_1])), ((~(((/* implicit */int) (short)-6))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_0] = min((11445814134552489917ULL), (((/* implicit */unsigned long long int) ((signed char) 9223372036854775807LL))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1])) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-22916)))) : (((/* implicit */int) min((arr_8 [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 += ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-1)))), ((-((+(((/* implicit */int) (signed char)0))))))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((((/* implicit */int) ((signed char) (signed char)-65))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
    var_22 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min(((short)-8), ((short)11)));
                            var_24 = ((/* implicit */_Bool) min((var_24), (var_0)));
                            var_25 ^= ((/* implicit */long long int) (((_Bool)0) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_14 [i_7])), ((unsigned char)46)))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2695369996877504922LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [i_6] [i_5] [i_4] [i_4])))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
}
