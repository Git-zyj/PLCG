/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82927
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
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */short) ((arr_1 [i_0] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((var_14) && (((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) (unsigned char)120)) << (((((/* implicit */int) arr_9 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0])) - (82))))))) < ((+(((/* implicit */int) var_9))))));
                                arr_13 [i_0] [i_0 + 3] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_4])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-8335))) & (3119992308U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_13)) ? (1680738390) : (((/* implicit */int) var_3))))))));
                                var_18 = ((/* implicit */short) arr_9 [i_0] [i_2 + 2] [8U] [i_2] [(unsigned short)13] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_14 [10LL] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */long long int) (short)-20649);
                            var_20 = ((/* implicit */unsigned short) ((5311978917327123941LL) ^ (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) : ((+(-4642033119025883858LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_13);
}
