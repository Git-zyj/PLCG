/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95821
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
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) 3956238715U);
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((unsigned char)0), ((unsigned char)2)));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        var_16 += ((/* implicit */unsigned int) arr_4 [i_1]);
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) (short)-20537)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((5026232329729681732ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_1 - 2] [i_4 - 2]))) : (((unsigned long long int) arr_9 [(short)14]))));
                        arr_17 [i_1] [i_1] [i_3] [i_4 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) ^ (arr_8 [i_3 - 1] [i_2 - 1])));
                    }
                } 
            } 
        } 
        arr_18 [i_1 + 4] &= ((/* implicit */unsigned short) (+(5026232329729681732ULL)));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5026232329729681732ULL))));
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 11; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 12; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_19 = min((((/* implicit */unsigned int) (signed char)55)), (739070625U));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_7 + 1] [i_7 + 1] [(_Bool)1] [i_6 - 3])) >= (((arr_16 [i_7] [i_7 + 1] [i_7] [11ULL]) ? (((/* implicit */int) arr_31 [i_7 + 1] [i_7 + 1] [i_8] [i_6 - 3])) : (((/* implicit */int) arr_16 [i_7 - 3] [i_7 - 1] [i_7 - 3] [i_7]))))));
                            }
                        } 
                    } 
                    arr_32 [i_5] = ((/* implicit */unsigned char) (unsigned short)43847);
                    arr_33 [i_5] [i_5] = ((/* implicit */short) var_5);
                    var_21 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_5] [i_5] [i_6 + 3] [i_5])), ((unsigned char)254))))) / (min((((/* implicit */unsigned long long int) (unsigned char)248)), (13420511743979869911ULL))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)22)) || (((/* implicit */_Bool) arr_12 [i_5] [i_6 - 4] [i_5])))) ? (((/* implicit */unsigned int) arr_8 [i_6] [i_6])) : (arr_28 [i_7 + 3] [i_6 + 2]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
    }
    var_23 = ((/* implicit */signed char) ((int) var_7));
    var_24 = ((/* implicit */long long int) ((_Bool) (unsigned char)2));
    var_25 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)21689)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42171)) ? (394551914U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) ((((/* implicit */_Bool) -1680745562339529506LL)) && (((/* implicit */_Bool) -3610153273467635005LL)))))))));
}
