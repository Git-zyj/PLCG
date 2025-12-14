/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71764
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_6))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((int) ((unsigned long long int) var_6))))));
                            arr_17 [i_0] = ((/* implicit */short) (_Bool)1);
                            var_13 ^= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_3 + 2] [i_4 + 2])))));
                            arr_18 [i_0] [i_2] = ((/* implicit */short) ((unsigned long long int) ((short) arr_1 [i_0])));
                        }
                    } 
                } 
            } 
            arr_19 [i_0] = ((/* implicit */_Bool) 966086897);
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 9321191172052504367ULL)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        {
                            arr_30 [i_0] = ((/* implicit */int) arr_24 [i_0] [i_1] [i_1]);
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) 18446744073709551615ULL))));
                            arr_31 [i_0] [i_0] [i_5] [i_0] [i_7] = arr_8 [i_0] [i_0] [i_0] [i_6];
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */_Bool) ((unsigned int) 966086897));
        }
        for (int i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            var_17 -= ((/* implicit */_Bool) ((unsigned int) var_8));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) (+(((1203832887U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))));
                        arr_43 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (9125552901657047233ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_10])))));
                    }
                } 
            } 
            arr_44 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_0]))));
        }
    }
}
