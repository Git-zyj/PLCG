/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81282
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 4; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_17 -= max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (var_16));
                        var_18 = ((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1]);
                        arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                        arr_13 [i_0] [i_1] [i_2] [(unsigned short)14] [i_2] |= ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_11 [i_3 + 1])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_4]))) : (arr_5 [i_0 - 1]))), (((/* implicit */long long int) min((arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_4]), (((/* implicit */short) (signed char)-114)))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    {
                        arr_21 [(signed char)17] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) 2941501765U);
                        arr_22 [i_5] [i_4] [i_4] [i_5] [i_4] [i_6] = ((/* implicit */_Bool) arr_2 [i_5] [i_6]);
                    }
                } 
            } 
            arr_23 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))));
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) (-(10657478524319858476ULL)));
        }
        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned int i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_10] [(_Bool)1]))))), (arr_33 [i_10] [(signed char)8] [i_10] [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_7])))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7])) ? ((~(((/* implicit */int) arr_20 [i_10 - 2] [i_7] [i_8] [i_0 - 1])))) : (((/* implicit */int) arr_6 [i_0 + 1]))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 4736425585866938776ULL))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) 2834983649U))))))));
    /* LoopNest 3 */
    for (short i_11 = 1; i_11 < 18; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [15LL] [15LL] [15LL])) ? (arr_35 [i_12] [i_13]) : (3536384760263041937ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (arr_34 [i_11] [i_11 + 2]))), ((-(min((var_7), (((/* implicit */int) var_6)))))))))));
                    arr_42 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)55302)))) ? (((/* implicit */int) arr_37 [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) arr_36 [12LL] [i_11 - 1] [i_11 - 1]))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11 + 2] [i_12] [i_13])) ? (((/* implicit */int) arr_40 [i_11] [i_11] [i_13])) : (arr_41 [i_11] [i_11 - 1] [i_11 - 1] [i_11]))))));
                    var_26 = ((/* implicit */unsigned short) 8960368076579566205LL);
                    arr_43 [i_13] [i_12] [(short)10] = ((/* implicit */long long int) var_0);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
    {
        for (int i_15 = 3; i_15 < 18; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                {
                    var_28 -= ((/* implicit */long long int) ((int) arr_46 [i_14 - 1] [i_15 + 3]));
                    /* LoopNest 2 */
                    for (long long int i_17 = 2; i_17 < 20; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 21; i_18 += 4) 
                        {
                            {
                                arr_56 [i_14] [i_15 - 2] [i_18] [i_14 + 1] [(unsigned char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_44 [i_14 - 1] [i_14 + 1]))) ? ((-(min((((/* implicit */unsigned long long int) arr_55 [i_15] [i_14 + 1])), (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_17] [i_17 - 2]))))))));
                                var_29 ^= ((/* implicit */unsigned char) arr_54 [i_14]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
