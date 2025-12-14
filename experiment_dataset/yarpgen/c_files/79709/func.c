/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79709
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((var_11), (((/* implicit */long long int) var_4))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (short)-17201))))), (max((max((var_11), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) -2048879606))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) var_3);
        }
        for (int i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((_Bool) (short)17201)) ? (((/* implicit */unsigned long long int) 327828600)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (8357463730791733812ULL))))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) -1610830666)) ? (((/* implicit */int) arr_13 [i_0] [i_2])) : (((/* implicit */int) (short)17201))))))));
                arr_14 [i_0] [i_0] [i_2 + 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) / (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(-5172950463192276887LL)))));
                arr_15 [i_3] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2 + 2] [i_2 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)57683)) >= (((/* implicit */int) (signed char)-82)))))) : (max((((/* implicit */long long int) arr_13 [i_2 + 1] [i_2 + 1])), (var_0))));
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24128)) & (var_5)));
                    arr_22 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + ((~(8357463730791733812ULL)))));
                    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        arr_26 [i_0] [i_5] [i_4] [i_4] [i_2] [7] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) / ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-6749))))));
                        arr_27 [i_0] [11U] [i_0] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                    }
                    arr_28 [i_0] [(unsigned short)8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)57))) % (((/* implicit */int) (unsigned short)40080))));
                }
                /* LoopSeq 2 */
                for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    arr_33 [i_0] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_1)))));
                    var_18 = ((/* implicit */unsigned int) (~(var_1)));
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)17208))));
                }
                for (unsigned char i_8 = 2; i_8 < 13; i_8 += 3) 
                {
                    arr_37 [i_0] [i_2] [i_0] [i_8] = ((/* implicit */unsigned char) (~((~(10089280342917817803ULL)))));
                    arr_38 [i_8] [i_0] [i_0] = ((/* implicit */signed char) arr_31 [i_4] [i_2]);
                    arr_39 [i_0] [i_4] [i_2 + 2] [i_2] [i_0] = ((/* implicit */unsigned char) var_7);
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) var_1);
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                        arr_43 [i_0] [i_0] [i_4] [i_8 - 2] [i_8 - 2] [9] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (short)17196)) : (((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (short)16762)) : (((/* implicit */int) (short)-17201))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) var_1)) ^ (arr_41 [i_9] [i_8 - 2] [i_8 + 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                        arr_46 [i_10] [i_0] = ((/* implicit */unsigned short) var_0);
                    }
                }
            }
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) min((min((-5172950463192276887LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_2 + 2] [i_11])))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)-23267)) | (((/* implicit */int) (short)17223))))))) ? ((-((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_1 [i_2] [i_11]))))))));
                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_41 [i_11] [i_11] [(signed char)14] [i_11] [i_11] [i_11] [i_11])))));
            }
            arr_51 [i_0] = ((int) (!(((/* implicit */_Bool) 6722767591810399551LL))));
            /* LoopSeq 3 */
            for (long long int i_12 = 2; i_12 < 14; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 1; i_13 < 13; i_13 += 2) 
                {
                    var_27 = ((/* implicit */signed char) var_8);
                    arr_57 [i_0] [i_13] [i_13] [i_13] [i_13] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                    arr_58 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_29 [i_2 - 1] [i_12 - 2] [i_2] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (max((6722767591810399551LL), (((/* implicit */long long int) arr_24 [i_13 - 1] [i_0]))))));
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) (short)-16762)), (arr_8 [i_13 - 1] [i_12 - 2] [i_2 - 1])))), (((((/* implicit */_Bool) 3151517484U)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12 - 1])))))));
                }
                arr_59 [i_0] = ((/* implicit */long long int) ((unsigned char) min((6722767591810399551LL), (((/* implicit */long long int) (unsigned short)8750)))));
            }
            for (long long int i_14 = 2; i_14 < 14; i_14 += 3) /* same iter space */
            {
                arr_62 [i_0] [i_0] [i_0] = ((/* implicit */short) min((var_14), (((/* implicit */unsigned int) ((_Bool) arr_50 [i_14 - 2] [i_0] [i_14 - 2] [i_0])))));
                arr_63 [i_2] [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)32532)))))), (((/* implicit */int) arr_20 [i_14] [i_14] [i_2] [i_0] [i_0] [i_0]))));
            }
            for (long long int i_15 = 2; i_15 < 14; i_15 += 3) /* same iter space */
            {
                arr_68 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-11102)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned char)65))))))), (var_10)));
                var_29 = ((/* implicit */signed char) var_2);
                var_30 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */long long int) ((min((var_6), (((/* implicit */unsigned int) (short)-1927)))) | (max((var_4), (((/* implicit */unsigned int) var_7)))))))));
            }
            arr_69 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)170);
        }
        arr_70 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) 8680010937051925349LL)))));
    }
    var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_9))))))), (var_6)));
    var_32 = ((/* implicit */short) var_3);
}
