/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81578
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) -4151769052286245819LL))))) ^ (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)30299)))))) | ((~(((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) var_1))))))));
        arr_3 [i_0] = ((unsigned char) ((unsigned long long int) ((((var_8) + (2147483647))) << (((((/* implicit */int) (unsigned short)30300)) - (30300))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_11 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)254))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (short)-1);
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((short)-32746), (((/* implicit */short) (unsigned char)47))))) : (((/* implicit */int) (unsigned char)249))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)42621)) / (((/* implicit */int) (unsigned short)7053))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((6011416026241585935LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46811))))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_15 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)94)) != (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) max(((unsigned char)252), ((unsigned char)128)))) : (((var_10) ? (((/* implicit */int) (unsigned short)60826)) : (((/* implicit */int) arr_14 [i_5]))))))));
        arr_16 [i_5] = ((/* implicit */unsigned short) var_9);
    }
    for (int i_6 = 3; i_6 < 15; i_6 += 2) 
    {
        arr_21 [i_6] = ((/* implicit */short) arr_14 [i_6]);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)11070))))) ? (((/* implicit */unsigned long long int) -206958044)) : (max((min((12666584386803971255ULL), (((/* implicit */unsigned long long int) arr_0 [i_6] [i_6])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)109)))))))));
        /* LoopSeq 1 */
        for (long long int i_7 = 3; i_7 < 15; i_7 += 2) 
        {
            arr_24 [(unsigned short)14] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_6 - 3] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24962))) : (arr_23 [i_6 + 1] [i_6] [i_7 - 2]))));
            arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17173)))))))) ? (min((((2099289355) - (((/* implicit */int) (short)12546)))), (((/* implicit */int) ((1062649040) > (var_8)))))) : (((((/* implicit */_Bool) arr_22 [i_6 - 2] [i_6])) ? (((/* implicit */int) arr_22 [(_Bool)0] [i_6])) : (((/* implicit */int) arr_22 [i_7 - 2] [i_6]))))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            {
                arr_31 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) max((((((_Bool) 3618141481581807833LL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)47))))) : ((-(arr_29 [i_8] [i_8]))))), (((/* implicit */unsigned long long int) (unsigned short)56276))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_3))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (short)7))));
            }
        } 
    } 
}
