/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67195
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)13)) ? (min((((/* implicit */int) var_13)), (1560248219))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-38)) && ((_Bool)1))))))) : (((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_12 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_11))) == ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))) <= ((+(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_19 [i_4] [8LL] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_4] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)0))))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (((((_Bool)1) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [(unsigned char)12] [(unsigned char)12] [i_5] [i_4] [i_0 + 1]))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0)))))));
                                var_21 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 1538936626)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_0 + 1] [i_4 - 1] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) var_9);
}
