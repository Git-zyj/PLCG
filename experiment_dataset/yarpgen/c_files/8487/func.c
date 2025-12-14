/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8487
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((635815480), (((/* implicit */int) (_Bool)1)))))));
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */short) min(((signed char)102), ((signed char)8)))), (max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1])))));
            var_14 = ((/* implicit */unsigned char) 4294967295U);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) var_7);
                            arr_14 [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((int) 2024133188));
                            var_16 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_11) / (arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_2])))) && (((/* implicit */_Bool) arr_6 [(unsigned char)4] [i_3 + 2] [i_1 + 1])))) && (((/* implicit */_Bool) ((unsigned short) (unsigned short)1536)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 3) 
        {
            arr_18 [i_5] = ((/* implicit */signed char) -2024133188);
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_6))) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_5] [i_5 + 2] [i_5 + 2] [i_0])));
            arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (-6149303895456304392LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1536)) ^ (((/* implicit */int) arr_13 [i_0] [(unsigned char)1] [i_0] [i_0] [i_5])))))));
        }
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)27))));
    }
    for (unsigned int i_6 = 2; i_6 < 23; i_6 += 2) 
    {
        arr_23 [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_6 - 1])) % (((/* implicit */int) arr_20 [(_Bool)1] [i_6]))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_30 [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) arr_20 [i_7] [i_7]);
                    var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6 - 1])))))), (max((-2024133188), (-956124921)))));
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6]))) % (var_6))))));
                    var_22 = ((/* implicit */signed char) (~(min((arr_24 [i_6 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7])) ? (arr_27 [i_7] [i_8]) : (((/* implicit */int) arr_20 [i_6 - 1] [i_7])))))))));
                }
            } 
        } 
    }
}
