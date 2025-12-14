/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87420
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_1] &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (short)29023)) ? (8844981396565920326LL) : (((/* implicit */long long int) arr_7 [i_1] [i_1])))))));
                    var_20 = ((/* implicit */signed char) (((~(arr_6 [i_0] [(_Bool)1] [i_2 - 1]))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) : (8844981396565920346LL)))) ? (((((/* implicit */_Bool) 1730146178U)) ? (((/* implicit */unsigned long long int) 601000313)) : (arr_6 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_2])))) - (601000267ULL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) ((min((arr_9 [i_2 - 1] [i_2] [i_0]), (arr_9 [i_2 - 1] [i_2 - 1] [i_1]))) == (arr_0 [i_4] [24ULL])));
                                var_22 = ((/* implicit */short) (~(((max((arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]), ((_Bool)1))) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (signed char)84)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [0LL] [0LL]))))))))));
                                var_23 = (-(((/* implicit */int) ((11562328318032724222ULL) >= (((/* implicit */unsigned long long int) arr_13 [i_2 - 1] [i_2] [i_2 - 1]))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) / (max((1221566456U), (((/* implicit */unsigned int) arr_4 [i_4] [i_3] [i_2]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1])))) >= (arr_9 [(unsigned char)20] [i_2 - 1] [i_3])))) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_3]))));
                                var_25 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [2] [i_3])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (601000313)))), (max((arr_6 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) -601000313)))))), (((((/* implicit */_Bool) 492533450724118112ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : ((~(arr_2 [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -601000314)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)12] [i_0])) : (arr_6 [6LL] [6LL] [6LL])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_26 ^= ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 7; i_8 += 4) 
                    {
                        {
                            arr_28 [i_6] [i_6] [i_7] [i_7] = ((/* implicit */short) arr_23 [i_6] [(unsigned char)7] [(_Bool)1]);
                            var_27 = ((/* implicit */int) (!(((_Bool) min((1903676149U), (((/* implicit */unsigned int) (_Bool)1)))))));
                            var_28 = ((/* implicit */long long int) ((unsigned short) (unsigned char)7));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) 4294967295U))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (((+(max((((/* implicit */int) (short)32767)), (601000313))))) - ((+(((/* implicit */int) arr_25 [i_7 - 1] [i_8 + 4] [i_8 + 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
