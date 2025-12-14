/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65880
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
    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)))) ? ((+(var_11))) : (var_11)))));
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43934))))) : (var_0)))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (~(var_0)))) ? (((long long int) var_14)) : (((/* implicit */long long int) 134217727))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
                            var_21 = ((/* implicit */long long int) arr_3 [1LL] [i_1] [i_2]);
                            var_22 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 1])))));
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((min((((var_7) - (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-8535)), ((unsigned short)50852)))))) - (min((((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_5 + 1])), (0)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_0)))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (-(min((-865107299), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22005))) == (var_11)))))))))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_5 [i_5] [i_4])) ? (var_12) : (((/* implicit */int) var_15)))) - ((+(((/* implicit */int) (unsigned char)232)))))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_5])))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_7))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (-12)))))) < (((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned short)9])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_0] [5ULL] [(unsigned short)12] [5ULL])))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) (~(((((/* implicit */long long int) -865107299)) % (min((((/* implicit */long long int) arr_15 [i_6] [(unsigned short)3])), (var_7)))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) 2)), (var_7))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_1) : (((/* implicit */unsigned long long int) 13)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (1205950289U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_20 [i_6] [i_6] [i_1] [i_0])))))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_6] [(unsigned char)16]))))), (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_6] [i_7])))))))) ? ((-(((((/* implicit */_Bool) -1203138126541734769LL)) ? (((/* implicit */unsigned int) 7)) : (arr_13 [i_0] [(unsigned short)10] [i_7]))))) : (max((var_11), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)43526)), (13))))))));
                            arr_25 [i_0] [(short)7] [i_1] [i_6] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_10 [i_0] [i_0] [i_7 - 1] [i_7])))) ? (((min((((/* implicit */unsigned long long int) var_11)), (arr_10 [i_0] [i_1] [i_6] [i_7 - 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_1] [i_1]))))) : (max((var_2), (min((12046463794867694208ULL), (var_1))))));
                            arr_26 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
