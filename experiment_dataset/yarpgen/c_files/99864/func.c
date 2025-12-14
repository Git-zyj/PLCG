/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99864
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [16U] [i_0] = ((/* implicit */_Bool) ((((_Bool) max((((/* implicit */int) arr_5 [i_1])), ((-2147483647 - 1))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 1]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)15))))))))));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_14 = (!(((/* implicit */_Bool) arr_2 [i_4] [i_1 - 1] [i_0])));
                            arr_15 [i_0] [0LL] [i_2] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */unsigned long long int) 8888879240750723386LL)) | (1048575ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)37754), ((unsigned short)40685)))))))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3823417005U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)159))))))))));
                            arr_16 [11LL] [i_3] [i_2] [11LL] = ((/* implicit */int) 12672442016172496214ULL);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_15 = ((/* implicit */long long int) (+(arr_10 [i_1 + 2] [i_5] [i_1 - 1] [i_5] [i_5])));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (unsigned char)199))));
            }
            for (short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                var_17 = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned long long int) (unsigned short)14083))));
                arr_22 [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) 18446744073708503057ULL);
                arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_0))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_12 [i_7 - 1] [i_6] [i_1 + 3] [i_1 - 1] [i_0])))) <= (arr_6 [i_0] [i_1] [i_1] [i_0])));
                    arr_26 [i_0] [i_1] [i_6] [i_7 - 1] = ((/* implicit */long long int) (unsigned short)37730);
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_19 = (i_6 % 2 == 0) ? (((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_28 [i_0] [i_0] [i_6] [i_8])) >> (((((/* implicit */int) arr_19 [i_6] [i_6] [i_0])) - (60770))))) << (((var_12) - (2650026204U))))))))) : (((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_28 [i_0] [i_0] [i_6] [i_8])) >> (((((((/* implicit */int) arr_19 [i_6] [i_6] [i_0])) - (60770))) + (52764))))) << (((var_12) - (2650026204U)))))))));
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_1 + 2]), (((/* implicit */long long int) arr_24 [i_6])))))));
                }
                arr_30 [i_6] [(unsigned char)5] [13LL] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((short) var_6))) ? (18446744073708503057ULL) : (((/* implicit */unsigned long long int) var_10))))));
            }
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)27760))))), (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59668))) : (-8643180313875461334LL)))), (arr_9 [i_1 - 2] [i_0])))));
            var_21 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1 + 3] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0] [i_0])))))));
            var_22 = ((/* implicit */unsigned int) 1048559ULL);
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                arr_36 [i_0] [i_9] [i_0] = ((/* implicit */long long int) arr_29 [i_9] [i_0] [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    arr_39 [i_9] [i_9] = ((/* implicit */unsigned char) arr_35 [i_0] [i_9] [i_9]);
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_7 [i_10] [i_9] [12] [i_0])) : (arr_29 [11LL] [11LL] [11LL]))))));
                    var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_10 - 1] [12U] [i_1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((18446744073709551594ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    arr_40 [i_10] [i_9] [i_9] [i_0] = ((/* implicit */_Bool) ((4294967295ULL) % (((/* implicit */unsigned long long int) -800746298889668138LL))));
                    arr_41 [i_9] [i_9] [11LL] [i_9] = ((/* implicit */unsigned short) (-(((739972198626131951LL) >> (((arr_12 [i_0] [i_1] [i_9] [i_10 + 2] [8]) - (7541562393000245451LL)))))));
                }
                for (unsigned int i_11 = 3; i_11 < 17; i_11 += 3) 
                {
                    var_25 = ((/* implicit */long long int) min(((short)31678), (((/* implicit */short) (!(((/* implicit */_Bool) (+(var_2)))))))));
                    var_26 = ((((((/* implicit */int) (short)-24001)) & (((/* implicit */int) arr_19 [i_9] [i_9] [i_1 + 3])))) ^ ((~(((829291164) >> (((((/* implicit */int) (unsigned char)112)) - (83))))))));
                    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -739972198626131952LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_2 [i_0] [9LL] [i_0]))))))), (3321266792U)));
                }
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_50 [7LL] [i_1] [i_1] [i_1] [i_1 + 3] [i_9] = ((/* implicit */long long int) ((unsigned int) (((+(var_5))) < (((/* implicit */long long int) ((/* implicit */int) ((739972198626131956LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_28 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_7 [i_12] [i_9] [12LL] [(short)12])) | ((~(arr_9 [i_1 - 2] [i_1 + 3])))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_49 [i_13] [i_9] [i_9] [i_1 + 2] [i_9] [i_1] [i_0]), (arr_49 [i_0] [i_0] [i_9] [i_9] [i_9] [i_12] [15ULL]))))));
                            arr_51 [i_9] [5LL] [i_12] [i_1] [i_1] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1] [i_1] [i_1])) ? (arr_7 [i_1 + 1] [i_1 - 1] [i_0] [i_0]) : (arr_7 [i_1 + 1] [i_1 + 2] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (~(arr_35 [i_9] [i_12] [i_9])))) : (arr_2 [i_1 - 2] [i_1] [i_1 - 1])));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) max((((min((((/* implicit */unsigned long long int) (unsigned char)248)), (var_4))) << (((/* implicit */int) var_3)))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)138))))), (max((3000040985497732333ULL), (((/* implicit */unsigned long long int) arr_48 [i_0] [i_0]))))))));
            }
        }
    }
    var_31 = ((/* implicit */unsigned short) (-(var_5)));
}
