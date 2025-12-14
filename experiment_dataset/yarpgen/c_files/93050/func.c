/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93050
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)32758)))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) ((unsigned char) (short)-10581))))))));
                    arr_7 [i_2] |= ((/* implicit */short) arr_5 [i_2]);
                    arr_8 [i_0] [i_1] [6LL] [6LL] = ((/* implicit */_Bool) var_12);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((unsigned short) max((var_1), (((/* implicit */unsigned char) (_Bool)1)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((unsigned short) (unsigned short)32752))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 4; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((unsigned long long int) arr_11 [i_3] [i_3] [i_6]));
                                var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((unsigned long long int) var_0))));
                            }
                        } 
                    } 
                    arr_19 [i_5] [i_4] [i_5] = ((/* implicit */short) min((((unsigned int) (_Bool)0)), (var_13)));
                    var_23 ^= ((/* implicit */_Bool) arr_10 [i_3] [i_4]);
                }
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (-2147483625))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)1023)))))))))));
}
