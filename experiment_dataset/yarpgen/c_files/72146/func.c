/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72146
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [16ULL] = ((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (max(((short)6174), ((short)6169)))));
        var_13 = arr_0 [i_0] [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_4 [22ULL] = ((/* implicit */long long int) arr_1 [21]);
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)17968))))), (min((max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_1])), (arr_6 [(unsigned char)11] [i_2]))), (((/* implicit */unsigned long long int) max((arr_1 [i_1]), (arr_0 [i_1 + 3] [(_Bool)1])))))))))));
                    var_15 -= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_2] [i_2] [i_1])), (arr_6 [i_2] [i_2])))))), ((!(((/* implicit */_Bool) arr_11 [i_3] [(_Bool)1] [i_2] [i_1 - 1]))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1] [i_2])) > (((/* implicit */int) min((((/* implicit */short) (signed char)-31)), ((short)6170))))))), (min((max((arr_6 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3 + 2])))), (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_4 - 2])) & (((/* implicit */int) arr_8 [i_2] [i_3 + 1] [i_3 + 1]))))))), ((!(((/* implicit */_Bool) max((arr_18 [(_Bool)1] [i_2] [i_2]), (((/* implicit */unsigned char) arr_17 [i_1] [i_3] [i_3] [i_4] [i_5])))))))));
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((arr_0 [i_3] [i_2]) && (((/* implicit */_Bool) arr_7 [i_2]))))))), (arr_7 [i_1])));
                            arr_20 [i_2] [i_2] [i_3] [i_2] = arr_18 [i_1] [i_1] [i_5];
                            arr_21 [i_1] [i_3] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_1 [23ULL])), ((+(arr_5 [i_3])))));
                        }
                        arr_22 [i_3] = ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_3] [i_4])), (arr_15 [i_1 + 2] [i_2])))) ^ (((/* implicit */int) min((arr_15 [i_2] [i_3]), (((/* implicit */unsigned short) arr_17 [i_1] [i_1] [i_2] [i_3 + 3] [i_4]))))))), (((/* implicit */int) arr_8 [i_1] [i_3] [i_4]))));
                        var_19 = min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_2])) + (((/* implicit */int) arr_18 [i_4] [i_3] [i_1])))))))), (arr_14 [i_4] [i_3] [4ULL]));
                    }
                    var_20 = arr_11 [i_1] [i_2] [i_2] [i_2];
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((max((min((((/* implicit */long long int) arr_8 [i_1] [i_6] [i_1])), (arr_5 [14LL]))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)3] [i_1] [(unsigned char)3] [i_1])) >> (((((/* implicit */int) arr_17 [i_1] [i_1] [i_6] [i_1] [i_6])) - (70)))))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) << ((~(((/* implicit */int) arr_10 [(_Bool)1] [i_1] [(_Bool)1]))))))))))));
            var_22 = arr_17 [i_1] [i_1] [(short)14] [i_6] [i_6];
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((((_Bool)1) && (((/* implicit */_Bool) min(((short)-6170), (((/* implicit */short) (unsigned char)3))))))) && (((/* implicit */_Bool) min((-1630240181811839722LL), (((/* implicit */long long int) 2147483647))))))))));
            arr_25 [i_1] [i_6] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_1])), (min((((/* implicit */unsigned long long int) arr_11 [i_1] [(short)17] [(short)17] [i_6])), (arr_7 [i_1])))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_7] [(unsigned char)15] [i_7])) && (((min((16744599322422957501ULL), (9887104105421494023ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_7])))))));
        arr_29 [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((-(arr_28 [i_7] [i_7]))), (((/* implicit */long long int) (!(arr_26 [i_7] [i_7]))))))), (arr_6 [i_7] [i_7])));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_34 [(_Bool)1] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_8]))) == (arr_31 [i_7])))), (max((((/* implicit */long long int) arr_1 [i_7])), (arr_31 [i_7])))))), ((-(max((((/* implicit */unsigned long long int) arr_10 [i_7] [i_8] [i_8])), (arr_19 [i_7] [i_7] [i_7] [(signed char)5] [i_7] [i_8])))))));
            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7])), (arr_30 [i_7])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_7] [(_Bool)1] [i_8]))))))))));
        }
    }
    var_26 = ((/* implicit */unsigned char) (-(var_1)));
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_3))));
    var_28 *= ((/* implicit */long long int) var_3);
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6170)) && (((/* implicit */_Bool) (short)-17466))));
}
