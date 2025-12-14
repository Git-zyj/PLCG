/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68923
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
    var_15 = ((/* implicit */unsigned long long int) ((long long int) max(((((_Bool)0) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (-8991590873381712298LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)0))))));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [14U])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((var_5) & (((/* implicit */long long int) arr_4 [i_1 - 1]))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_19 [i_2] [i_1] = ((/* implicit */_Bool) ((signed char) arr_12 [i_1] [i_2] [i_1 - 2]));
                            var_19 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_5 [i_1 - 2]))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1 - 2]))));
        }
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                arr_24 [i_1] = (!(((/* implicit */_Bool) var_1)));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_27 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    arr_28 [i_8] [i_8] [i_6] [i_6] [i_1 + 1] &= ((signed char) ((((/* implicit */int) arr_26 [i_8] [i_6] [i_6] [i_1 + 3])) % (((/* implicit */int) (_Bool)1))));
                    var_21 *= ((/* implicit */unsigned int) 587289972476611586ULL);
                }
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_6] [i_1 - 3] [i_7]))) ? (((/* implicit */int) ((_Bool) arr_26 [i_7] [i_7] [i_7] [i_1]))) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_1 + 1]))));
            }
            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1 + 2] [i_1]))));
            arr_29 [i_1 + 2] [i_1] = arr_22 [i_1] [i_1] [i_6] [i_1];
        }
        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4416658578751111302LL))) >> (((var_0) - (3822989804458412016LL)))));
        /* LoopSeq 4 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((long long int) arr_8 [i_1])) > (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1] [17LL] [i_1] [11ULL] [i_9] [i_9] [i_9])) & (((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 1] [(_Bool)1])))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                for (long long int i_11 = 3; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) var_8);
                        var_27 *= ((/* implicit */_Bool) ((unsigned int) arr_14 [i_9] [i_9] [i_11 + 2] [i_10] [i_11 + 2] [i_9]));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_5 [i_11]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            arr_40 [i_1] = ((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            var_29 &= ((((((/* implicit */int) (signed char)-125)) / (((/* implicit */int) arr_8 [i_12])))) != (((/* implicit */int) arr_12 [i_12] [i_1 - 2] [i_12])));
            var_30 = ((/* implicit */unsigned long long int) ((_Bool) arr_32 [i_1 + 3] [i_12] [i_12]));
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (unsigned short i_15 = 1; i_15 < 23; i_15 += 2) 
                {
                    {
                        arr_52 [i_1] [11LL] [(short)3] [i_15] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [8LL]))) % (arr_45 [13ULL] [i_1] [i_1]))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_15 + 1])) ? (var_9) : (((/* implicit */long long int) arr_48 [i_1] [i_13] [i_14] [i_15 - 1]))));
                    }
                } 
            } 
            var_32 &= ((/* implicit */signed char) (_Bool)1);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_55 [i_1] [i_16] = ((/* implicit */int) arr_53 [i_1 - 3]);
            arr_56 [i_1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_3)));
        }
    }
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        var_33 -= ((/* implicit */short) arr_44 [i_17]);
        arr_61 [i_17] = ((/* implicit */signed char) min((max((arr_9 [i_17] [i_17]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6642303319450819089ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((unsigned short) 11651389865206792922ULL)))));
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((_Bool) 10464824105057081676ULL)) ? (((((/* implicit */_Bool) 842025768)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (8172816587505701577ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_14 [(unsigned char)16] [(_Bool)1] [(_Bool)1] [i_17] [i_17] [(_Bool)1]))))))))));
        arr_62 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((17859454101232940029ULL), (((/* implicit */unsigned long long int) 737851191U)))))) ? (arr_9 [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_17])))));
    }
    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_11))));
}
