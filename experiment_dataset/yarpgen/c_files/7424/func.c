/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7424
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
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) max((var_14), ((+(arr_0 [i_0 + 1])))));
        arr_2 [(short)16] = ((/* implicit */_Bool) (+(arr_0 [i_0 + 1])));
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) arr_0 [i_0 - 2]))));
        var_15 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_1)))));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1 + 3] = ((/* implicit */unsigned long long int) (-(0U)));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_16 += ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) (+(max(((+(((/* implicit */int) var_3)))), (((arr_8 [(unsigned short)3]) / (((/* implicit */int) (signed char)-1))))))));
                var_18 &= ((/* implicit */long long int) -1847627221);
                var_19 += ((/* implicit */short) ((((arr_4 [i_1 - 2] [i_2]) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (-7396188190645431697LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)65))))) > (((/* implicit */long long int) (~(-1633892318)))))))) : (var_12)));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                arr_13 [i_1] [i_2] [(_Bool)1] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_5)))) ? (var_9) : (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))))));
            }
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                arr_16 [(short)4] [(unsigned char)2] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) ((2627706949U) < (arr_15 [(_Bool)1] [i_2] [i_4] [(short)12])))))));
                var_21 ^= ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_2] [i_4])))))) | ((+(max((arr_1 [i_1]), (((/* implicit */long long int) arr_15 [i_1] [7] [10] [i_1 + 1])))))));
                arr_17 [i_1] [i_2] [i_4 - 1] [i_2] = ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)65))));
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (7396188190645431708LL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_4 - 1]))) > (arr_19 [i_2])))))))));
                    arr_20 [i_1] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2047LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((max((535822336U), (((/* implicit */unsigned int) (unsigned short)58191)))), (((/* implicit */unsigned int) (_Bool)1)))))));
                }
            }
        }
    }
    for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6 - 3] [i_6 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7354))) == (arr_1 [(signed char)18])))) : (((/* implicit */int) ((7396188190645431697LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)21859))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_15 [i_6 - 3] [i_6] [i_6] [i_6])) ? (arr_1 [2U]) : (((/* implicit */long long int) arr_15 [i_6] [i_6] [(short)14] [i_6])))))));
        var_25 &= ((/* implicit */_Bool) arr_9 [(_Bool)1] [i_6 + 3] [(short)10]);
        var_26 ^= ((/* implicit */signed char) (-(var_5)));
    }
    for (unsigned short i_7 = 3; i_7 < 12; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            var_27 &= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_7 + 2] [i_8])) ? (((/* implicit */int) arr_22 [i_7 - 3])) : (((/* implicit */int) var_7)))));
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8 + 2])))))) > (min((arr_10 [i_8 + 1] [i_8 + 3]), (((/* implicit */unsigned int) (_Bool)0))))));
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_12))));
        }
        for (int i_9 = 1; i_9 < 13; i_9 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) (+(arr_25 [(_Bool)1])));
            arr_34 [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)189)) >= (((/* implicit */int) var_1))))) > (arr_25 [i_7 - 1]))) ? (((/* implicit */int) ((short) 1667260347U))) : (((/* implicit */int) arr_26 [i_7]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_40 [i_7] [i_10] [i_11 - 1] [i_10] = ((/* implicit */unsigned int) var_2);
                    var_31 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [(_Bool)1]))));
                }
            } 
        } 
        var_32 ^= ((/* implicit */unsigned int) (unsigned short)28646);
        arr_41 [i_7] = ((/* implicit */unsigned int) var_9);
    }
    var_33 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned char i_12 = 1; i_12 < 8; i_12 += 4) 
    {
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (int i_14 = 3; i_14 < 7; i_14 += 4) 
            {
                {
                    var_34 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (1667260348U)))) == (((/* implicit */int) var_10)))) ? (((/* implicit */int) ((unsigned short) arr_18 [14U] [i_14] [i_12 + 3] [i_12]))) : (((int) arr_22 [i_12 - 1]))));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (!((_Bool)1))))));
                    arr_51 [3] [i_14] [i_14] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_38 [i_12 + 2] [i_12 + 1] [i_14 + 4])), (arr_36 [i_12 - 1] [i_12 - 1] [i_14 + 4])))));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_14 - 3] [i_12 + 2] [14])) && (((/* implicit */_Bool) arr_50 [i_12 + 3] [i_14 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_14 - 1] [i_12 + 3] [i_14])) && (((/* implicit */_Bool) arr_50 [i_12 - 1] [i_14 + 3]))))))))));
                        var_37 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_14 + 4]) > (arr_1 [i_12 - 1]))))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) - (arr_1 [i_14 + 3])))));
                    }
                    for (short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_56 [(short)2] [i_16] [i_14 + 3] [i_16] &= ((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_45 [8U] [i_16] [i_14]) || (((/* implicit */_Bool) var_0))))) > (var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28738)))))) : (((((/* implicit */unsigned int) var_2)) | (min((((/* implicit */unsigned int) (_Bool)0)), (1667260351U)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_17 = 1; i_17 < 8; i_17 += 4) 
                        {
                            var_38 ^= arr_44 [(unsigned char)5];
                            arr_61 [i_14] = ((/* implicit */signed char) ((-2047414149759999877LL) % (((/* implicit */long long int) 1753128712U))));
                            var_39 = ((/* implicit */unsigned long long int) var_2);
                            arr_62 [i_12] [i_14] = ((/* implicit */unsigned int) arr_43 [i_17 + 1]);
                        }
                        var_40 += ((/* implicit */unsigned short) max(((+(2627706976U))), (var_12)));
                    }
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) var_4)) | (arr_12 [i_13] [i_14 + 4] [i_14])))));
                }
            } 
        } 
    } 
}
