/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69514
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [(_Bool)1])))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) & (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (arr_0 [(unsigned short)12]))))) : (arr_2 [i_0] [i_0]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_7);
        var_15 = ((/* implicit */long long int) (unsigned short)2047);
        var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (((+(-1728033023))) != (min((var_9), (((/* implicit */int) arr_10 [i_2]))))))), (arr_9 [i_2])));
        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_2] [i_2])))) ? ((~((~(var_1))))) : (((arr_7 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)0])))))));
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) min((((max((-7356898576930439100LL), (((/* implicit */long long int) arr_6 [i_2])))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((787318296U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3])))))))))));
            var_19 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((((/* implicit */int) arr_10 [i_2])) * (((/* implicit */int) arr_11 [i_2])))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((var_10), (min((arr_5 [(_Bool)1]), (arr_5 [i_2]))))))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = ((/* implicit */short) (((!(arr_3 [(unsigned short)12]))) ? ((-(var_5))) : ((-(((/* implicit */int) arr_15 [i_4] [i_2]))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_19 [i_2]))) ? (((/* implicit */unsigned long long int) arr_6 [i_6])) : (arr_7 [i_2])));
                        var_22 *= ((/* implicit */unsigned int) ((var_1) > (((/* implicit */unsigned long long int) (~(var_10))))));
                        arr_25 [i_6] [i_4] [i_5] [i_6] [i_2] = ((/* implicit */int) ((unsigned char) arr_10 [i_2]));
                        var_23 = ((/* implicit */int) arr_17 [i_4]);
                        arr_26 [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5]))) * (((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_24 [i_6]) : (((/* implicit */unsigned int) 1420613288)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_7 - 1] [i_7 - 1])) ? (var_9) : (((/* implicit */int) arr_27 [(unsigned char)0] [i_7 - 1] [i_7]))));
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_28 [i_4] [i_7 - 1] [i_8]) >> (((/* implicit */int) arr_3 [(unsigned short)12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_7 - 2] [i_8]))) : (arr_22 [i_2] [i_2])));
                    }
                } 
            } 
            arr_31 [i_2] [i_4] = ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_2]));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_11 [i_2])) | (((/* implicit */int) arr_11 [i_9])))));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                arr_36 [i_2] [i_2] [i_9] [i_10] = ((/* implicit */unsigned short) var_2);
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_20 [i_2] [i_2] [i_10])))), ((+(((/* implicit */int) arr_35 [i_2] [i_9] [i_10]))))))) ? (((/* implicit */int) min((((_Bool) (short)5)), (arr_23 [i_2] [i_9] [i_10] [i_10])))) : ((+(((/* implicit */int) arr_3 [i_10]))))));
                var_28 = ((/* implicit */int) max((var_28), ((-(((/* implicit */int) var_0))))));
                arr_37 [i_2] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_10] [i_9] [i_10])) ? (((((/* implicit */int) arr_18 [i_9] [i_9] [i_2])) * (((/* implicit */int) arr_18 [i_2] [i_9] [i_10])))) : (((((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) var_11))))));
            }
            for (short i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                arr_40 [i_2] [i_9] [i_11] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_22 [i_9] [i_11])) ? (((/* implicit */int) arr_30 [6ULL] [i_9])) : (((/* implicit */int) (short)15320)))))));
                var_29 = arr_14 [i_11];
            }
        }
        /* vectorizable */
        for (unsigned int i_12 = 2; i_12 < 13; i_12 += 1) 
        {
            var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))));
            arr_43 [i_2] [i_12 - 1] = ((/* implicit */int) ((long long int) arr_29 [i_2] [i_12] [i_12 - 1] [i_12 - 1] [i_2] [(signed char)1]));
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_12 - 1])) ? (((/* implicit */int) arr_3 [(unsigned char)4])) : (((/* implicit */int) var_13))));
            var_32 = ((/* implicit */_Bool) arr_33 [i_12 - 1] [i_12 - 2]);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                {
                    var_33 = ((/* implicit */short) ((((((var_10) & (((/* implicit */int) var_7)))) ^ (((/* implicit */int) arr_42 [i_13])))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_1 [i_2] [i_13]))))));
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_42 [i_2])) ? (((/* implicit */int) var_0)) : (arr_6 [i_2]))) << (((min((((((/* implicit */_Bool) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (var_5) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_11)))) + (184904168))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
    {
        arr_51 [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_5 [i_15])) & (3596812647U)));
        arr_52 [i_15] [(unsigned short)8] = ((/* implicit */unsigned short) (~((~(var_3)))));
        var_35 += (_Bool)1;
    }
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        for (unsigned short i_17 = 1; i_17 < 15; i_17 += 1) 
        {
            for (short i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                {
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) 7110309692828734385LL))));
                    /* LoopSeq 1 */
                    for (long long int i_19 = 3; i_19 < 13; i_19 += 1) 
                    {
                        var_37 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (4188980898U)));
                        var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (max((((/* implicit */int) (_Bool)1)), (arr_6 [i_17 - 1])))))) ? (((/* implicit */int) arr_45 [i_17 - 1] [i_18] [i_19])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_17 + 1] [i_18] [i_19])) & (var_5)))))))));
                    }
                    var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_23 [i_17] [i_16] [i_16] [i_17]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (849919753U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned long long int) ((var_5) + (((/* implicit */int) arr_11 [i_17 - 1]))))) : (arr_14 [i_16])))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) 3445047512U)) : (9223372036854775807LL))) : (((/* implicit */long long int) var_5))))));
}
