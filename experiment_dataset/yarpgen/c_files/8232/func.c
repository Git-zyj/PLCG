/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8232
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
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            arr_16 [i_0 + 1] [i_0] [i_0 - 2] = ((/* implicit */short) max(((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_0])))), (((/* implicit */int) arr_14 [i_0] [i_2 + 1] [i_0]))));
                            var_17 = ((/* implicit */short) min(((~(((/* implicit */int) ((((/* implicit */int) (short)-1575)) == (((/* implicit */int) (_Bool)1))))))), (min(((~(((/* implicit */int) (short)11938)))), ((~(arr_1 [i_0 - 1] [i_4 - 1])))))));
                            arr_17 [i_0] = ((/* implicit */short) (signed char)61);
                        }
                        arr_18 [i_0 + 1] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) arr_14 [i_2 - 2] [i_2 - 3] [i_0])), (arr_4 [i_2 - 4] [i_2 - 1] [i_2 - 2]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 - 2]))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)7976))));
            arr_26 [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_3))) ? (arr_7 [i_5 + 1] [i_5 + 1]) : (arr_25 [i_5 - 2])));
            arr_27 [i_5 - 1] [i_5 + 2] [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_23 [i_5 + 1] [i_5 + 1] [i_5 - 2]) + (2147483647))) >> (((-1) + (18)))))) ? (((/* implicit */int) arr_9 [16])) : (((/* implicit */int) (signed char)90))));
            arr_28 [i_5 + 1] = ((/* implicit */short) ((unsigned long long int) arr_10 [i_5 + 2] [i_6] [(signed char)6] [i_5 + 1]));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_31 [i_5 + 1] [i_5 + 1] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned short)57559)))))));
            arr_32 [i_5 + 1] [i_5 - 2] [i_7] = ((/* implicit */unsigned short) ((_Bool) (signed char)-15));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_11 [i_5 + 1] [(unsigned char)14] [i_7] [i_5 + 2])))))));
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (_Bool)1))) != (arr_1 [i_5 + 2] [i_5 + 2])));
        arr_33 [i_5 + 1] [i_5 - 1] = ((/* implicit */unsigned long long int) (~(arr_23 [i_5 + 2] [i_5 + 2] [i_5 - 1])));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1])) <= (((/* implicit */int) (unsigned short)57538)))));
        arr_36 [i_8 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1]))));
        var_24 = ((/* implicit */signed char) (((~(-1LL))) == (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (signed char)118))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1])) > (((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1]))))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1]))));
    }
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) 5327510328374288517LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (14476963319538322836ULL)))));
}
