/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97498
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (var_18) : (((/* implicit */long long int) (-(1214222352))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (197120892U)));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) max((arr_4 [i_1] [i_0]), (((/* implicit */short) arr_0 [i_1])))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_1])), ((-(((/* implicit */int) (unsigned short)9633))))))) : (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55902))) : (var_17))) * (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))));
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_0])))));
        }
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_11 [2U] [i_4] [i_2] [i_4] = ((/* implicit */int) var_7);
                        var_21 = ((/* implicit */short) arr_3 [i_2 - 1] [i_2 + 1] [i_4]);
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) 7863527719698126071LL)) && (arr_1 [i_2 + 1]))) && ((!(arr_1 [i_2 - 1])))));
                    }
                } 
            } 
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_1 [i_2 + 1]);
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_23 += ((short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_5 [i_0] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (356451001U)));
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((arr_9 [i_0] [(unsigned char)5] [(unsigned char)5] [0]) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_5] [i_0] [i_0] [(_Bool)0]))))) <= (arr_7 [i_0] [i_0] [i_5] [i_5])));
            var_25 = ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (1824228184U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 7; i_7 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_26 += ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)9633)) + (((/* implicit */int) arr_0 [i_7 + 4]))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_7] [i_7 + 4]) <= (arr_14 [1] [i_7 + 2]))))) / (2470739126U))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_8] [(short)6] [(short)6] [i_7] [i_6 + 1] [i_0])))) : (max((max((arr_13 [i_0] [i_7]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) arr_3 [i_6 + 2] [i_7 - 1] [i_7 - 1]))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            var_29 &= ((/* implicit */unsigned int) arr_24 [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1]);
                            var_30 = ((/* implicit */long long int) min((var_30), (max((max((arr_25 [i_9 + 1] [i_9] [i_7 - 1] [i_6 - 1]), (((/* implicit */long long int) (unsigned short)55902)))), ((+(arr_25 [i_9 + 1] [i_7] [i_7 + 3] [i_6 - 1])))))));
                            var_31 += ((/* implicit */unsigned int) ((short) 2470739111U));
                        }
                        for (int i_10 = 1; i_10 < 7; i_10 += 4) 
                        {
                            var_32 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 2] [i_7 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)9633)))))))) : (((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_7 - 1] [i_10 - 1] [i_10 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_25 [i_6 + 2] [i_7 + 4] [i_10 + 1] [i_10 + 3]))));
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_8])) / (((/* implicit */int) arr_6 [i_8]))))) * (max((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_7] [i_8] [i_10] [i_0])) ? (((/* implicit */unsigned int) arr_23 [i_0] [i_8] [i_8] [10LL] [i_8] [i_0])) : (arr_7 [i_0] [i_6 + 1] [i_8] [i_6 + 1]))), (((/* implicit */unsigned int) var_4)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_34 = arr_26 [i_0] [i_0] [i_6 + 1] [i_6 + 1];
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) & (((6195238097189128806LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        arr_37 [i_6 - 1] [i_6] [i_7] [i_6 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_6] [i_6 - 1] [i_7 - 1]))));
                        var_36 = ((/* implicit */unsigned char) (-(arr_5 [i_12] [i_12])));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                    {
                        arr_40 [i_13] [i_7] = ((/* implicit */short) var_17);
                        var_37 *= ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_6] [i_6] [i_7] [i_13]))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) arr_36 [i_7] [i_7 + 1] [i_14]);
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_35 [i_0] [i_6 - 1] [i_7] [i_7 - 1] [i_7] [i_14]) ? (1389305745) : (((arr_35 [i_0] [i_6 - 1] [i_7] [i_7 + 4] [i_0] [4LL]) ? (((/* implicit */int) arr_35 [(unsigned char)8] [i_6 + 2] [i_7] [i_7 - 1] [9] [1])) : (((/* implicit */int) arr_35 [i_0] [i_6 + 1] [i_7] [i_7 + 1] [i_7] [i_7]))))));
                        arr_44 [i_0] = ((/* implicit */unsigned short) var_16);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            arr_47 [i_0] [i_6] [i_7] [i_14] [i_0] [i_15] [i_14] = (-(((/* implicit */int) arr_10 [i_6] [i_6 + 1] [i_6 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 1])));
                            var_39 = ((/* implicit */short) ((((/* implicit */int) var_16)) * (((((/* implicit */_Bool) arr_16 [i_14] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)9645))))));
                            arr_48 [i_6 + 2] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_21 [i_6] [i_7])))) ? (arr_30 [i_0] [i_6] [i_7 + 4] [i_7] [i_14] [(unsigned short)10]) : (((/* implicit */long long int) arr_5 [i_7 + 3] [i_14]))));
                            arr_49 [1LL] [i_6 - 1] [i_7] [i_7] [i_14] [1LL] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1824228188U)) ? (((/* implicit */int) ((_Bool) (unsigned short)24326))) : (((/* implicit */int) arr_24 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1]))));
                            var_40 = ((/* implicit */unsigned short) (+(arr_32 [i_6 + 1] [i_7 + 4])));
                        }
                        arr_50 [i_0] [i_6 + 1] [7LL] [i_14] = ((/* implicit */unsigned long long int) var_16);
                    }
                    arr_51 [i_0] [i_6] [i_7] = ((int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33633)))))) : (-6195238097189128818LL)));
                    arr_52 [i_7] [i_7] [6U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_5)), (1389305745))))));
                    arr_53 [i_7] = var_6;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_41 += ((/* implicit */unsigned char) ((unsigned short) arr_9 [i_16] [i_7] [i_6] [i_0]));
                        var_42 = ((/* implicit */unsigned short) ((arr_21 [i_7 - 1] [i_6 + 1]) ^ (arr_21 [i_7 + 4] [i_6 + 2])));
                        arr_56 [i_0] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_6 - 1] [i_7 + 2] [i_7 + 2]))));
                        var_43 = ((/* implicit */short) (~((-(-1310973715598835065LL)))));
                    }
                }
            } 
        } 
    }
    var_44 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((((/* implicit */int) var_12)) <= (((/* implicit */int) var_2))))))), (var_14)));
    var_45 = ((/* implicit */unsigned char) var_0);
}
