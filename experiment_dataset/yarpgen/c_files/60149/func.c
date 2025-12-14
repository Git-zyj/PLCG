/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60149
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
    var_17 &= ((/* implicit */_Bool) var_7);
    var_18 -= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [(short)1] [i_1] [(signed char)3] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_1])) : (max((var_15), (((/* implicit */int) arr_3 [i_2]))))))) ? (((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 3] [(unsigned short)4])) % (((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)14361)))))) : ((((-(((/* implicit */int) (unsigned short)38671)))) * (((((/* implicit */_Bool) (unsigned short)26865)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [(unsigned char)7]))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), ((unsigned short)26865)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) var_5)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0])))) : (min((((/* implicit */int) var_9)), (var_0)))));
                        arr_15 [i_0] [i_4] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))), (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_12))))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38671)))))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) var_13);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_24 [i_7] [i_7] [i_0] = max(((unsigned short)38659), ((unsigned short)26856));
                    var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) (unsigned short)26865))))) ? (min((var_14), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((var_0) & (arr_5 [i_0] [i_6] [9]))))))));
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)38651))));
    }
    /* vectorizable */
    for (short i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
            {
                for (unsigned short i_11 = 1; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) % (arr_28 [i_9 - 1] [i_10 - 1]))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_9 + 2] [i_9 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_34 [i_8 - 1] [i_9 + 1] [i_10 + 1]))))));
                        var_25 *= ((/* implicit */_Bool) arr_28 [12] [12]);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_41 [i_8] [i_9] [i_12] [i_12] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_8] [i_12] [i_12] [(signed char)4] [i_12] [(unsigned char)17])) ? (((/* implicit */unsigned long long int) arr_32 [i_8] [i_9] [i_8] [i_12])) : (var_16)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26873))) : (arr_44 [i_8] [i_12] [i_12] [i_13] [i_14] [i_14]))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26876))) : (var_7))))));
                            arr_47 [i_9] [i_12] [i_9] [4ULL] [i_9] = ((/* implicit */unsigned int) var_16);
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                arr_50 [18LL] [i_15] [18LL] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_15] [3LL] [14ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38666)) && (((/* implicit */_Bool) var_2)))))) : (var_6)));
                var_27 = ((/* implicit */unsigned long long int) var_1);
            }
            for (long long int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
            {
                arr_53 [i_16] [(signed char)3] [(unsigned short)19] [(unsigned short)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) arr_33 [i_8 - 1] [i_8 + 1] [i_9 + 1]))));
                arr_54 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26865))) & (arr_44 [i_8] [10] [i_8] [i_9 - 1] [10] [i_9 - 1])));
                arr_55 [i_8] [i_8] = ((/* implicit */_Bool) arr_51 [i_16] [i_16] [i_16] [i_16]);
            }
            for (long long int i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */int) arr_57 [15LL] [i_9] [i_8]);
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (var_15)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_17] [i_17] [i_17] [i_8])) && (((/* implicit */_Bool) (unsigned short)38665))))) : (((/* implicit */int) (unsigned short)26870)));
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) var_7);
            arr_61 [(_Bool)1] [i_8] [i_18] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (var_0) : (var_2)))));
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)26876))))))))));
                var_32 = (unsigned short)38666;
            }
            for (int i_20 = 1; i_20 < 20; i_20 += 1) 
            {
                arr_66 [(unsigned short)18] [3] [i_20] = ((((/* implicit */int) (unsigned short)26873)) >> (((var_0) + (1543525145))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_64 [i_8 + 1] [(unsigned char)2] [i_8 + 1])))))));
                var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_20])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)38647)))) - (((/* implicit */int) var_1))));
            }
            arr_67 [i_8] &= var_0;
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26893)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)38660)) : (var_15))) : (((/* implicit */int) (unsigned short)38655))));
        }
        arr_68 [i_8] [i_8] = (unsigned short)38659;
        arr_69 [i_8] = ((/* implicit */signed char) var_4);
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38668)) ? (((/* implicit */int) (unsigned short)26893)) : (((/* implicit */int) var_10)))))));
        arr_70 [i_8] = ((/* implicit */unsigned long long int) var_11);
    }
}
