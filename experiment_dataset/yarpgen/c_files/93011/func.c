/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93011
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_9);
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-1)) ? (256155088286813275LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))), (((/* implicit */long long int) ((signed char) 1865832115U)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((_Bool) (unsigned char)115));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) var_0);
        arr_9 [i_1] = ((/* implicit */signed char) var_3);
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_18 [i_2] [(signed char)0] = ((/* implicit */unsigned char) var_0);
                    arr_19 [6] [i_3] [6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (1865832099U)))))), (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 288230376151711743ULL)) ? (arr_4 [11U] [i_4 - 2]) : (((/* implicit */unsigned long long int) var_6))))))));
                }
            } 
        } 
        var_10 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2])) & (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_5))))))), (((((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))) & (arr_13 [i_2])))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        var_11 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)-24481))));
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_12 = ((/* implicit */long long int) min((var_12), (var_6)));
            arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_6] [(unsigned short)12]))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [0] [i_6 + 1])))))));
            arr_25 [i_5] [i_6 - 1] [i_6] = ((signed char) var_1);
        }
        arr_26 [i_5 - 1] = ((/* implicit */signed char) ((unsigned char) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
        arr_27 [i_5] = ((/* implicit */_Bool) var_1);
    }
    var_14 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)136)), (((min((((/* implicit */long long int) (signed char)84)), (-256155088286813275LL))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */unsigned int) ((int) var_9));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 1938134140428700799ULL)) ? (639574888U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-91)) || (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 18158513697557839880ULL)) ? (288230376151711743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 1; i_7 < 9; i_7 += 3) 
    {
        var_17 |= ((/* implicit */unsigned long long int) var_1);
        arr_30 [i_7] [i_7] = ((/* implicit */int) var_5);
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_28 [6U])) >= (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    }
}
