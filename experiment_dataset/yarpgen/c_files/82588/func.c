/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82588
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) -3691896710788688985LL)) ? (((/* implicit */int) (short)-12487)) : (((/* implicit */int) (short)12487))));
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) (-((~((-(((/* implicit */int) (short)-12505))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] = var_5;
                                arr_17 [i_2] [i_3] [i_2] [i_1] [i_0] = (short)-12505;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */short) (+(((/* implicit */int) var_7))));
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_20 [i_1] [i_1] [i_2 - 1] [i_5 - 1] [i_6] [i_6]))))));
                                var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) >= (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2]))))))) ? (var_8) : (((((/* implicit */_Bool) (+(var_10)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))));
                                var_20 = ((((/* implicit */_Bool) (-((+(arr_14 [i_0] [i_0] [i_0] [i_0] [12LL] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_5] [17LL]))) : ((+(((((/* implicit */_Bool) (short)12487)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [13LL] [i_1] [i_1] [i_5]))))));
                                var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)31275)), (4432610544300485976LL)))) ? ((-(((/* implicit */int) (short)12490)))) : ((~(((/* implicit */int) (short)-12470)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_0] = min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))), (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (8900316664206519295LL) : ((-9223372036854775807LL - 1LL)))) | (arr_0 [i_0]))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)32704)))) ? ((-(((/* implicit */int) arr_19 [(short)15] [i_0] [i_0] [(short)17])))) : (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) - (20904)))))));
    }
    for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
    {
        var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-((~(arr_4 [i_7 + 1] [i_7 + 1]))))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), ((+(7212187997255477062LL)))));
        arr_28 [i_8] = ((((/* implicit */_Bool) arr_27 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32704)) >= (((/* implicit */int) arr_26 [i_8])))))) : (((((/* implicit */_Bool) (short)-32759)) ? (1279862804704215914LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))));
    }
}
