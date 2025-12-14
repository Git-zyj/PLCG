/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77469
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [11U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36988)) ? (142513060) : (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) * ((-(((/* implicit */int) (_Bool)0)))))))));
        var_11 = ((/* implicit */short) (~((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (min((281474976710655LL), (((/* implicit */long long int) 754485722U)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (142513046))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_3)) : (var_8)));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_14 -= ((/* implicit */unsigned short) -1);
                        var_15 ^= ((/* implicit */long long int) max(((-(((/* implicit */int) arr_2 [i_4 - 3] [i_6 + 1])))), (((/* implicit */int) (unsigned short)0))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 0LL)), (695610638857855894ULL))))));
            var_17 ^= ((/* implicit */long long int) var_9);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1333108528U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-68)), ((unsigned short)0))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1519336811U)) ? (((/* implicit */int) (short)30971)) : (((/* implicit */int) var_1))))), (arr_20 [i_1] [i_7])))));
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_8 [(_Bool)1] [i_8] [i_9]))));
                            var_20 -= ((/* implicit */unsigned char) (((+(min((((/* implicit */unsigned int) (_Bool)1)), (16777215U))))) > (((/* implicit */unsigned int) ((/* implicit */int) (((+(-1))) >= (((/* implicit */int) (_Bool)1))))))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((int) arr_5 [i_1])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [5LL] [i_8])))))));
                            arr_28 [i_1] [i_7] = ((/* implicit */unsigned int) (_Bool)0);
                        }
                    } 
                } 
            } 
            arr_29 [18ULL] [i_7] = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [9] [i_7]))) & (arr_5 [(unsigned char)12]))), (((/* implicit */unsigned int) (!((_Bool)1)))));
        }
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            arr_32 [i_1] [i_11] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) arr_22 [(unsigned short)0] [i_11]))))) ? (((((/* implicit */_Bool) 3327692420836907327LL)) ? (var_0) : (((/* implicit */long long int) arr_5 [14LL])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_11] [(unsigned short)17] [i_1])) | (-142513059)))))), (((/* implicit */long long int) min((arr_31 [i_1] [i_11]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1]))))))))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_19 [i_1] [i_1]))));
            arr_33 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)-32752)) & (((/* implicit */int) (unsigned short)0)))))) >> ((((((_Bool)1) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned char)0)))) - (146)))));
            arr_34 [i_1] = ((/* implicit */signed char) (~((-(arr_19 [i_1] [i_11])))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (unsigned char i_13 = 3; i_13 < 20; i_13 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_3);
                        arr_40 [i_1] [(unsigned char)7] [(unsigned char)7] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-4827))));
                        arr_41 [i_12] = ((/* implicit */unsigned int) var_6);
                        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_21 [i_13] [i_13 + 1] [i_13 - 1])) && (((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) (unsigned short)65535))))));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) (short)1058))))));
    }
    for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_15 = 2; i_15 < 9; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        {
                            arr_54 [i_17] [i_15] [8U] [i_15] [i_18 - 2] = ((/* implicit */unsigned short) arr_5 [(unsigned char)15]);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1817835123)) ? (min((((/* implicit */int) var_7)), (arr_22 [i_15 - 2] [i_18 - 1]))) : (((/* implicit */int) ((_Bool) var_9)))));
                        }
                    } 
                } 
            } 
            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30510)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27224))) : (max((arr_47 [i_15 - 1] [i_14]), (arr_47 [i_15 - 2] [i_15 - 2])))));
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18364279295144262614ULL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (short)32751))))) : (((/* implicit */int) max((arr_52 [4U]), (((/* implicit */short) arr_46 [i_14])))))));
        }
        for (signed char i_19 = 1; i_19 < 6; i_19 += 2) 
        {
            arr_58 [i_19] [i_19 + 2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_19 - 1] [i_19 + 3])) ? (((/* implicit */int) arr_15 [i_14] [i_19 + 3])) : (((((/* implicit */_Bool) arr_5 [i_19])) ? (((/* implicit */int) (unsigned short)46800)) : (((/* implicit */int) (_Bool)1)))))) ^ ((~(((/* implicit */int) (short)121))))));
            arr_59 [i_14] [(short)6] [(unsigned short)4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_19 + 2] [i_19 + 2] [i_19 + 4] [6U])) ? (((/* implicit */int) arr_21 [i_14] [i_19 - 1] [i_19 + 2])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_21 [i_19] [i_19 + 1] [i_19 + 3])) : (((/* implicit */int) arr_21 [i_19 + 4] [i_19 + 2] [i_19 - 1]))))));
        }
        for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            var_28 *= ((/* implicit */_Bool) (+((-(((/* implicit */int) min((arr_6 [i_14]), (((/* implicit */unsigned short) (unsigned char)0)))))))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                for (signed char i_22 = 3; i_22 < 9; i_22 += 3) 
                {
                    {
                        arr_68 [i_20] [i_21] [i_21] = ((/* implicit */unsigned char) arr_47 [4LL] [i_14]);
                        arr_69 [i_21] [7U] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(2199023255551ULL)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 1; i_23 < 8; i_23 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3526029020U)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned short)28256))));
                            var_30 ^= min((max((arr_18 [i_20] [i_20] [(unsigned char)12] [i_23 + 2] [i_23]), ((unsigned char)255))), (((/* implicit */unsigned char) (!(arr_67 [i_23 + 1] [i_22 - 3] [6ULL] [6ULL])))));
                            arr_72 [i_14] [i_21] [i_21] [i_22] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_35 [i_22 + 1] [i_21] [i_23 - 1]) < (((/* implicit */int) (short)-1))))), (min((arr_63 [i_14] [i_21] [i_21]), (((/* implicit */unsigned int) arr_15 [i_14] [i_20]))))));
                        }
                    }
                } 
            } 
            var_31 *= max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)32755)));
        }
        var_32 += ((/* implicit */unsigned long long int) arr_49 [(unsigned char)8] [i_14] [i_14]);
        var_33 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)127)) ? (arr_47 [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) var_6))));
    }
}
