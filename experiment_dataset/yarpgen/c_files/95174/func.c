/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95174
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned char) 487471416);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (((-(((((/* implicit */long long int) 1604264186U)) - (arr_1 [i_0]))))) != (((/* implicit */long long int) -1503670499)))))));
    }
    var_21 = ((/* implicit */long long int) (((+(min((487471416), (-487471416))))) - (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (-(arr_1 [i_2])));
                    var_23 = ((/* implicit */long long int) arr_8 [i_1] [i_2] [i_1]);
                    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) != (((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_1] [i_1])) != (arr_6 [i_2])))))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1229879638)))))));
                    arr_10 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_3])), (arr_0 [i_3] [i_2]))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2])))))))) ? (((/* implicit */int) var_14)) : (var_12)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((-1229879638), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_15 [i_4]))))))));
                        var_27 = ((/* implicit */short) var_10);
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [(unsigned char)13] [i_1] [7LL])) != (((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))));
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) -487471416);
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned short) -487471416);
        var_28 = ((/* implicit */signed char) -312023219);
        var_29 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_22 [i_7])))) != (((((/* implicit */int) ((short) (unsigned short)18338))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7] [(_Bool)1])))))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_7] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) - (((((/* implicit */_Bool) arr_24 [(unsigned char)15] [(unsigned char)15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7]))) : (var_3)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1048575U)))))))) : (arr_24 [(short)7] [(short)7])));
    }
}
