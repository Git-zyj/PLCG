/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73281
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    var_10 = ((/* implicit */long long int) arr_5 [i_0] [(unsigned short)2] [i_1] [i_2]);
                    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (unsigned short)56242)) : (((/* implicit */int) arr_2 [i_2 - 2] [i_1] [i_2])))) == (((/* implicit */int) (unsigned short)9294))));
                    var_12 *= ((/* implicit */unsigned char) (_Bool)1);
                    arr_6 [i_2 + 1] [(signed char)13] = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                }
                var_13 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) -10LL)) ? (((/* implicit */unsigned long long int) arr_3 [(signed char)0])) : (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)9286))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (long long int i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                {
                    var_14 -= ((/* implicit */signed char) arr_7 [i_4]);
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) arr_8 [i_3]))))))))) == (max((((/* implicit */unsigned long long int) 4294967295U)), (arr_10 [i_3] [i_3])))));
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-22222))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) var_2))), (max((((/* implicit */unsigned long long int) (+(-1)))), (var_6)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)118)) < (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-114)))) : ((~(((/* implicit */int) (_Bool)1)))))) - ((+(((/* implicit */int) max((var_4), (((/* implicit */short) var_2)))))))));
}
