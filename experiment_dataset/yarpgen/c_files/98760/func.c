/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98760
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
    var_16 = var_7;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 = max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (arr_3 [i_2] [i_1] [i_0]) : (arr_3 [7LL] [i_2] [i_2]))), (var_10));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_18 = ((long long int) 9223372036854775807LL);
                        var_19 = (-((-(min((var_2), (arr_1 [i_0]))))));
                        var_20 ^= ((/* implicit */long long int) arr_9 [i_0] [i_0] [(unsigned short)0] [i_1] [i_2] [i_3]);
                    }
                    for (long long int i_4 = 3; i_4 < 14; i_4 += 4) 
                    {
                        var_21 &= (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27508))) : (((var_14) / (-9223372036854775781LL))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39266))))))));
                        arr_14 [i_0] [i_0] [3LL] [i_4] = var_10;
                    }
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_17 [i_5] [i_1] [i_2] [i_0] = ((long long int) min((arr_5 [i_5] [i_5] [i_0]), (((/* implicit */long long int) (unsigned short)63516))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_23 ^= ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6]))) : (7590506653796524181LL)));
                            var_24 = ((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0]) < (max((var_9), (((((/* implicit */_Bool) -322414851906994566LL)) ? (322414851906994552LL) : (9223372036854775807LL)))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [7LL] [i_0] [i_5] [i_2])))))) <= ((+(arr_1 [9LL])))));
                            var_26 = var_9;
                        }
                        for (long long int i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            var_27 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) > (((/* implicit */int) var_8)))) ? (max((var_10), (arr_4 [i_0] [i_1]))) : (min((((/* implicit */long long int) (unsigned short)0)), (var_12)))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50631))))) : (min((((((/* implicit */_Bool) arr_21 [(unsigned short)1] [16LL] [i_2] [i_0] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)5] [i_2] [i_2] [14LL]))) : (9223372036854775807LL))), (1742371564493887355LL))));
                            var_28 = 7144363850260690180LL;
                        }
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned short) (-((+(9223372036854775807LL)))));
                            var_30 = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) (unsigned short)23998)) ? (var_12) : (arr_21 [i_0] [i_1] [i_0] [i_0] [i_8]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned short)14898)))))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_3 [i_1] [i_5] [i_2]) - ((-9223372036854775807LL - 1LL)))) << (((((long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) - (8874110073912998897LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_5] [i_8]))) : (min(((-9223372036854775807LL - 1LL)), (min((2728824350872088665LL), (9223372036854775807LL)))))));
                        }
                        var_32 = ((((/* implicit */_Bool) 843090025123423846LL)) ? (9209968908847207536LL) : (9117830681733295954LL));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] [i_2] [i_5] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6558761375322939944LL)) ? (5950430018920380711LL) : (1573865732551871991LL)))) ? (arr_3 [(unsigned short)5] [13LL] [i_2]) : (max((var_3), (16383LL))));
                            var_33 = (i_0 % 2 == zero) ? (((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((arr_5 [i_0] [i_0] [i_0]) + (2461113254982919542LL))) - (19LL))))))))) : (((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((((arr_5 [i_0] [i_0] [i_0]) + (2461113254982919542LL))) - (19LL))) - (1875828858289298831LL)))))))));
                            var_34 = ((/* implicit */long long int) max((var_34), ((+(arr_24 [i_9] [i_5] [i_5] [i_0])))));
                            var_35 = ((/* implicit */long long int) min((var_35), (arr_3 [i_1] [i_2] [4LL])));
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) var_12);
                            var_37 = arr_21 [i_0] [i_1] [(unsigned short)15] [i_0] [i_10];
                            arr_32 [i_0] = arr_24 [i_0] [i_1] [i_0] [i_10];
                        }
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            var_38 = ((((/* implicit */_Bool) (~(arr_21 [(unsigned short)9] [i_0] [i_0] [i_0] [i_0])))) ? (arr_3 [i_11] [i_2] [i_1]) : ((~(arr_8 [(unsigned short)10] [i_1] [i_0] [i_0] [i_5] [i_0]))));
                            var_39 = ((((/* implicit */_Bool) -9117830681733295955LL)) ? (((long long int) ((long long int) 7872521747334679998LL))) : ((+((-(-4176201020930430036LL))))));
                        }
                    }
                }
            } 
        } 
    } 
}
