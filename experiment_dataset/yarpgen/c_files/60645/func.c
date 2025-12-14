/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60645
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_8))))), (min((13184192878237910542ULL), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)));
    var_11 -= ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_4)))) : (((((/* implicit */_Bool) 13184192878237910546ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))) <= (((/* implicit */int) var_9)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) arr_1 [i_0] [12U]);
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_10 [i_0] [i_0] [i_0] [(short)9] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (5262551195471641073ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0] [(short)3] [(signed char)7] [i_0] [4U])))))))), (arr_8 [12LL] [(signed char)8] [i_2 - 1] [(_Bool)1] [i_2 + 3] [(signed char)4])));
                            var_13 += ((/* implicit */signed char) ((short) arr_8 [i_3] [(unsigned short)16] [7ULL] [8] [i_3] [(signed char)1]));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) 5262551195471641069ULL))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_13 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((max((max((arr_3 [i_5] [i_0] [(unsigned short)16]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_7 [1U] [i_1 - 1] [i_2 + 1])))) << (((/* implicit */int) (((-(var_0))) == (((/* implicit */long long int) arr_9 [i_0] [12ULL] [i_2 + 3] [12U] [9])))))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((5424266911298733656ULL) | (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_9 [(signed char)7] [i_3] [(unsigned char)16] [(unsigned short)3] [(short)13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_8 [i_0] [i_0] [(unsigned short)5] [i_2 + 3] [(short)2] [(short)10]) : (arr_8 [i_0] [10] [(unsigned short)0] [(short)0] [6ULL] [i_0]))))))))));
                        }
                        var_16 = (+(max((((/* implicit */unsigned long long int) min((arr_6 [5U] [(unsigned char)9] [i_0]), (((/* implicit */unsigned char) arr_12 [9] [i_3] [(unsigned short)8] [i_1 + 1] [(short)15]))))), (((((/* implicit */_Bool) var_3)) ? (4706705695676483006ULL) : (((/* implicit */unsigned long long int) var_3)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 15; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                        {
                            arr_21 [(unsigned short)0] [i_0] [(signed char)4] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13184192878237910542ULL)) ? (arr_16 [i_1 - 1] [i_7 + 2] [(short)1] [i_0] [i_8 - 1]) : (((/* implicit */unsigned long long int) var_6))));
                            var_17 = ((((/* implicit */_Bool) 3377071046904315341ULL)) ? (arr_9 [(_Bool)1] [i_1 + 2] [(unsigned char)10] [i_0] [16U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_7 + 1] [(signed char)7] [(short)4]))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) 13184192878237910549ULL)) ? (((13184192878237910549ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5262551195471641082ULL)) ? (598081792U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48392)))))))))));
                        }
                        for (int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_9] [i_6] [(unsigned short)16] [(unsigned short)16])) % ((~(((/* implicit */int) ((((/* implicit */long long int) var_3)) == (var_0))))))));
                            arr_24 [i_0] [16] [11] [i_0] [16LL] = ((/* implicit */signed char) max((max((((/* implicit */long long int) var_9)), (min((-7607407103599459137LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) (-(arr_9 [(unsigned short)12] [i_1 - 2] [i_7 + 3] [10U] [i_9]))))));
                            arr_25 [9U] [6LL] [i_0] [(short)9] [(unsigned short)3] [i_7 + 2] [(unsigned short)10] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) max(((~(arr_3 [i_1 + 2] [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)245)) << (((arr_0 [i_0]) - (110205357)))))) || (((/* implicit */_Bool) arr_2 [i_0])))))))) : (((/* implicit */unsigned short) max(((~(arr_3 [i_1 + 2] [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)245)) << (((((arr_0 [i_0]) - (110205357))) + (2063256044)))))) || (((/* implicit */_Bool) arr_2 [i_0]))))))));
                            var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [i_7 + 3] [i_7 - 1] [i_7 - 2] [i_1 - 2] [i_1 - 1])) ? (arr_9 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_1 - 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [(unsigned short)2] [(short)6] [i_0])))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */unsigned int) (-(-7607407103599459137LL)));
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_14 [(short)11] [6] [i_7 - 1] [i_10]) : (((/* implicit */unsigned int) arr_0 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)11] [(unsigned short)3]))) : (((long long int) var_0))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 1497959074U))));
                            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1] [i_0]))));
                        }
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_5)))))) ? (5262551195471641069ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [6LL] [i_6] [(_Bool)0])))));
                    }
                } 
            } 
        }
        var_27 = var_0;
    }
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        for (unsigned short i_12 = 1; i_12 < 9; i_12 += 4) 
        {
            {
                var_28 += ((/* implicit */unsigned int) ((_Bool) (+(var_0))));
                arr_33 [2U] [i_11] [i_12] = ((/* implicit */int) min((min((((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-7505053099806145953LL))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_19 [i_12] [i_12 + 2] [i_12 + 1] [(unsigned short)6]), (((/* implicit */short) (unsigned char)243))))))))));
            }
        } 
    } 
    var_29 = (-(((/* implicit */int) (signed char)-68)));
}
