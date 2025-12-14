/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62628
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) (+(2964457899U)));
        arr_3 [(signed char)5] = ((/* implicit */short) var_2);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) (signed char)-104);
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_4))));
        var_20 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned short)33932)))));
    }
    for (int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        arr_10 [i_2] [i_2 + 1] = ((/* implicit */unsigned char) max((((((9945626910473748730ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [3ULL]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27078)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)21)) ^ (((/* implicit */int) arr_9 [i_2 + 1])))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2 + 1])) != (((/* implicit */int) min(((unsigned char)48), ((unsigned char)126))))))), (var_16)));
                        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_11 [i_2] [i_3] [i_5]) | (((/* implicit */int) (signed char)-43))))))) <= (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 + 2]))) + (2964457911U))), (((/* implicit */unsigned int) arr_13 [i_5] [i_3]))))));
                        var_23 = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
        } 
        arr_17 [i_2] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_6 [i_2])) | (var_2))))), (((((/* implicit */int) max(((unsigned short)22289), (((/* implicit */unsigned short) var_4))))) - ((-(((/* implicit */int) var_15))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        arr_21 [i_6] &= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (8296687890346726195ULL)))));
        var_24 = ((/* implicit */short) (_Bool)1);
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (var_8))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_6] [i_6])))))));
    }
    for (short i_7 = 2; i_7 < 7; i_7 += 4) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_7 + 3] [i_7] [i_7 + 2]))))) ? (((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)72))))) ? ((+(((9945626910473748749ULL) ^ (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)96))))));
        arr_25 [(unsigned short)0] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_7] [i_7 - 1] [i_7 + 3])) | ((~(((/* implicit */int) (signed char)67))))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) var_12)), (var_9)))) - (((/* implicit */int) var_5))));
    var_28 = ((/* implicit */int) (_Bool)1);
    var_29 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) ((signed char) var_12)))))));
}
