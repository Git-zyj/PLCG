/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73908
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
    var_12 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) ((unsigned short) var_0)))), ((+(arr_2 [i_0])))));
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [10])) ? (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_9))), (max((arr_1 [i_0]), (((/* implicit */signed char) (_Bool)1))))))) : ((~(((/* implicit */int) var_2))))));
    }
    for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((~((+(((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */_Bool) -400994475)) ? (arr_2 [i_1 - 2]) : (((/* implicit */int) (_Bool)1)))))))));
        var_16 -= ((/* implicit */_Bool) max(((~((~(((/* implicit */int) (unsigned short)28758)))))), ((~((+(((/* implicit */int) (signed char)18))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                    arr_15 [i_3] [i_3] = ((/* implicit */int) ((short) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (_Bool)1);
                        var_18 = ((((/* implicit */_Bool) (~(arr_25 [i_7 + 2] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 2])))) ? (min((arr_25 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7 + 3]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [6U] [6U])))) ? (((/* implicit */long long int) ((unsigned int) arr_13 [(unsigned char)4] [i_2]))) : (var_10)));
        var_20 = ((/* implicit */short) (-(min((var_8), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_2] [(signed char)4] [i_2])) : (((/* implicit */int) var_2))))))));
    }
    var_21 ^= ((/* implicit */_Bool) var_3);
}
