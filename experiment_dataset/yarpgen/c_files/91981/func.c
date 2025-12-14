/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91981
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (var_12))))) : (var_2)))) ? (((unsigned long long int) (+(((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-((~(var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_0 [i_0 + 2] [i_0 - 1])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3]);
                        var_19 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_0 [i_2] [i_1]))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 4; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 2]))));
                        arr_15 [i_0] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_0 + 1] [i_1] [i_2] [(short)9] [i_4] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        arr_16 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_13 [i_0] [i_1] [i_0] [(unsigned char)4] [i_4 - 4] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_5)))));
                    }
                    arr_17 [i_0 - 2] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_1] [i_0 - 2]))) : (arr_13 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_2])))) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])))) ? (var_2) : (((/* implicit */unsigned int) min((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0 + 2])))), ((-(((/* implicit */int) var_0)))))))));
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_9))))) ^ (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 23; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_23 [i_6] [i_5]))))))));
                    arr_27 [i_6] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_26 [i_5 - 3])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((var_9) && (((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_9)))))))));
    var_24 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) (signed char)1)), (var_6))))) << (((((((/* implicit */_Bool) ((var_15) ? (var_11) : (var_4)))) ? (var_2) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2))))) - (3166833865U)))));
}
