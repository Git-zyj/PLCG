/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77686
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) arr_1 [i_0])) - (25301)))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_18 -= ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_0 [8])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((unsigned long long int) max((arr_2 [i_1 - 1] [i_1 + 2] [i_1 + 2]), (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_19 = max((((/* implicit */short) (((+(arr_3 [i_0]))) <= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2])), (var_1))))))), ((short)19823));
                    var_20 ^= ((/* implicit */unsigned int) max((((var_14) >> (((var_12) + (3089744413875920344LL))))), (((/* implicit */long long int) var_2))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) var_15);
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), ((~(arr_4 [i_5] [i_4 + 1])))));
                    var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) arr_0 [i_5])) - (var_7)))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? ((~(arr_2 [i_3] [i_3] [i_3]))) : (((/* implicit */int) var_6))))), (var_12)));
        arr_17 [i_3] [i_3] |= ((/* implicit */unsigned long long int) var_12);
        arr_18 [i_3] [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (var_10))) : (((/* implicit */unsigned long long int) arr_4 [(short)10] [i_3])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_13)) | (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [10U]))) : (max((((/* implicit */unsigned long long int) var_11)), (var_10)))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (max((((/* implicit */long long int) (-2147483647 - 1))), (arr_12 [i_3] [i_6] [i_7]))))));
                    var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [i_7 + 1] [7U] [5])) ? (min((arr_2 [i_3] [i_3] [i_7]), (-1))) : (((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (+(((unsigned long long int) arr_14 [i_3] [i_6] [i_3] [i_3]))));
                                var_27 = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((int) var_2))) ^ (7305225680482426123LL))));
                                arr_27 [i_3] [i_6] [i_7] [i_8] [i_9 + 3] [i_3] [i_9] = ((var_8) >> (((((/* implicit */int) ((signed char) var_8))) + (101))));
                                var_28 *= ((/* implicit */unsigned short) min((min(((_Bool)1), (arr_6 [i_7] [i_8 - 2] [i_9 + 1]))), ((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 15; i_10 += 4) 
    {
        for (short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            {
                var_29 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_30 [i_10] [i_10 + 2])) : ((+(((/* implicit */int) ((short) var_1))))));
                var_30 = ((/* implicit */long long int) ((unsigned int) ((int) arr_32 [i_10 - 1] [0] [i_10 - 3])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        arr_36 [i_12] [i_12] = ((/* implicit */short) max(((+(((int) arr_34 [i_12])))), (((/* implicit */int) min((arr_33 [i_12]), (((/* implicit */short) arr_34 [i_12])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_31 *= ((/* implicit */signed char) arr_34 [i_12]);
            var_32 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) var_8)) > (2601280979562769949LL))))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                for (long long int i_15 = 3; i_15 < 20; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_4)) << (((arr_42 [i_12] [i_12] [i_12]) - (3304226544U))))) : (((/* implicit */int) (unsigned char)108))));
                            var_34 = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
            } 
            var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) arr_33 [i_12]))) : (((/* implicit */int) var_16))));
            var_36 *= ((/* implicit */short) ((unsigned int) arr_41 [i_12] [i_13] [i_12] [11LL] [i_13]));
        }
        for (short i_17 = 1; i_17 < 19; i_17 += 1) 
        {
            arr_50 [i_12] &= ((/* implicit */short) ((long long int) ((arr_44 [i_12] [i_12] [i_17 + 1] [i_12] [i_12]) < (arr_44 [i_12] [i_17] [i_17 + 3] [i_17] [i_17]))));
            var_37 -= ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)0)), (arr_44 [i_12] [i_17] [i_17] [i_17 + 3] [i_12])));
            var_38 = ((/* implicit */_Bool) var_14);
            var_39 = ((/* implicit */int) (signed char)-117);
        }
    }
    var_40 = ((/* implicit */unsigned int) max((var_40), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) <= ((~(var_12))))))) : (var_8)))));
    var_41 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (min((((/* implicit */long long int) (_Bool)1)), (var_14))))), (((/* implicit */long long int) var_13))));
}
