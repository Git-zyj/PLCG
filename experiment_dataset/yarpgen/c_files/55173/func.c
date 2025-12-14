/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55173
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
    var_20 &= ((/* implicit */long long int) (unsigned char)64);
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned char)12))) ^ (((/* implicit */int) var_17))))), (min(((-(var_19))), (var_19)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_22 = arr_1 [i_0];
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    arr_11 [(_Bool)0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)250)) ? (min((((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [i_1])), (arr_10 [(unsigned short)7] [i_1] [i_2] [(unsigned short)4] [i_2] [6LL]))) : (((/* implicit */unsigned long long int) arr_8 [2U] [i_3 - 1] [i_3 + 1] [i_3 - 2])))), (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_1] [8U] [0LL]), (((/* implicit */unsigned int) ((unsigned char) arr_2 [i_2] [i_1] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)51))))) ? (((((/* implicit */_Bool) 2871577630U)) ? (arr_7 [i_0] [i_1] [i_2] [7U]) : (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))), (arr_10 [(_Bool)1] [i_1] [(_Bool)1] [i_3 - 2] [i_3] [i_3])));
                        arr_14 [i_4 + 1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_6 [i_0] [(unsigned short)2] [i_1]))))) | (arr_5 [i_2] [1ULL])))));
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((arr_2 [i_0] [i_3 + 1] [i_4]), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) (unsigned char)192)))))));
                        arr_15 [i_2] [9LL] [i_2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) max((15358386608887531093ULL), (((/* implicit */unsigned long long int) (unsigned char)82))))) ? (arr_7 [i_3 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1]) : (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_3])))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_5 = 4; i_5 < 8; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)12)))))));
                        arr_18 [i_0] [i_1] [i_2] [(unsigned short)5] [i_5] = ((/* implicit */unsigned char) (unsigned short)52162);
                        arr_19 [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_7 [i_3 - 1] [i_0] [(short)1] [i_0]);
                    }
                    arr_20 [i_0] [(short)1] [i_2] [i_1] = ((/* implicit */signed char) ((min((12696772732095129230ULL), (((/* implicit */unsigned long long int) ((unsigned short) var_4))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (arr_7 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1]))))));
                    arr_21 [i_1] = ((/* implicit */unsigned char) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)51)) ? (2871577634U) : (3497965962U)))));
                    arr_25 [i_2] = arr_3 [i_2];
                    var_27 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [6ULL] [i_1] [i_2] [i_6]))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))))))));
                }
                for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) (~((+(arr_5 [i_0] [i_7])))));
                    arr_29 [i_2] [5U] [7LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)3))));
                    var_29 = (unsigned char)127;
                    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(651621950U))))));
                }
                arr_30 [7ULL] [i_0] = arr_5 [i_0] [i_1];
                arr_31 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((+(((unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))));
            }
            /* LoopNest 2 */
            for (short i_8 = 3; i_8 < 8; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_37 [i_0] [i_0] [i_8] [i_9] = arr_4 [(unsigned short)0] [i_0] [2ULL] [i_8 - 2];
                        var_31 = ((/* implicit */unsigned char) -1995240001287152250LL);
                        arr_38 [i_9] [i_8] [i_8] [i_8] [2LL] [i_0] = ((((((/* implicit */_Bool) (~(1423389675U)))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_19)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_10 [i_8 - 3] [3ULL] [i_8 - 2] [i_8] [i_8 + 1] [i_9])))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                {
                    arr_45 [i_11 - 1] [i_10] [i_10] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */unsigned long long int) arr_5 [i_11 + 1] [i_11 - 1])) & (arr_28 [i_0] [i_0] [i_11] [i_11 - 1]))));
                    arr_46 [i_11 + 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_14) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_10] [i_11 + 1] [i_11] [i_11])), (max((var_14), (arr_0 [9U]))))))));
                }
            } 
        } 
        var_32 = min((4275958914812665714LL), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
    {
        var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)18055))));
        /* LoopNest 3 */
        for (long long int i_13 = 2; i_13 < 20; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_12])) ? (((/* implicit */int) ((arr_56 [i_13 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */short) arr_47 [i_13]))))))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)93)) > (((/* implicit */int) (unsigned char)0)))))));
                        arr_57 [i_15] [i_13] [i_12] = 4864713560749432419LL;
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */short) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_51 [i_12 - 1] [i_12 + 3] [(unsigned char)16])) == (-403284806020686418LL))))));
        var_36 = ((/* implicit */unsigned char) arr_55 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12] [(unsigned short)19]);
    }
    for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_17 = 3; i_17 < 14; i_17 += 2) 
        {
            arr_62 [i_16] [i_17 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)82))))) : (max((403284806020686417LL), (((/* implicit */long long int) (signed char)64))))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) 1423389689U)) | ((-9223372036854775807LL - 1LL))))))) ? (((var_18) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100)))));
            var_38 = min((((/* implicit */unsigned int) ((161917290U) != (((459317284U) >> (((1613258070U) - (1613258067U)))))))), (((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
            arr_63 [i_16] [i_16] = ((/* implicit */signed char) ((((arr_58 [i_16]) < ((~(arr_51 [i_17 - 1] [i_17] [i_17 - 3]))))) ? (min((((long long int) var_5)), (var_19))) : (((/* implicit */long long int) ((arr_56 [i_16]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-65))))))))));
            /* LoopNest 3 */
            for (long long int i_18 = 1; i_18 < 15; i_18 += 3) 
            {
                for (long long int i_19 = 2; i_19 < 17; i_19 += 4) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_12)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) ^ (134217720U)))));
                            arr_71 [i_16] [i_17] [i_18 + 2] [i_20] [i_20 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((arr_67 [(unsigned char)10]) != (arr_68 [i_16] [i_17 + 4] [i_18 + 1] [i_16] [i_20])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 3690571877U)))))))) < (((unsigned int) arr_50 [i_20]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_21 = 3; i_21 < 14; i_21 += 3) 
        {
            var_40 = ((/* implicit */short) arr_59 [i_16]);
            arr_75 [i_16] [i_16] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)63))));
            arr_76 [1LL] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_58 [i_21])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)47812))))))) / ((+(((arr_67 [i_21 + 3]) | (((/* implicit */long long int) arr_74 [i_16]))))))));
        }
        arr_77 [(unsigned char)4] [2U] = ((/* implicit */unsigned int) var_12);
    }
}
