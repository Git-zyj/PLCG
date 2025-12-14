/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69894
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_0 [i_0])))) + (((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)167))))))) : (((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))) : (3901464910U)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_13 ^= 2146959360U;
                            arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_2] [i_2])), (arr_8 [i_1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) (short)-14224)) ? (1552128999) : (((/* implicit */int) (unsigned char)141))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) (signed char)109)), (arr_9 [i_1] [i_1] [i_1])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2])), (((unsigned short) var_10))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0]))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_1 + 2]))))) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1 - 1]), (((/* implicit */unsigned short) var_6)))))))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)119)))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned long long int) ((int) var_11));
}
