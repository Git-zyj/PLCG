/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97737
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((max((7976214174903779457ULL), (arr_4 [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned long long int) arr_9 [14LL]);
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_9))))));
                            arr_13 [i_3] [i_0] [i_2] [i_2] [i_0] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)176))))) ? (((((/* implicit */_Bool) (unsigned char)155)) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [1LL]))) < (var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0]))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)151)), ((~(((/* implicit */int) arr_3 [i_0] [i_1]))))))) ? ((+(max((var_3), (((/* implicit */long long int) (short)-26617)))))) : (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0 + 1])), ((unsigned short)1)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_4);
    var_16 &= ((/* implicit */signed char) (+(-2171564178752416075LL)));
    var_17 = ((((/* implicit */int) (unsigned char)73)) <= ((+(((/* implicit */int) (_Bool)1)))));
}
