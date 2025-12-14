/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62951
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
    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) ((short) var_9))) : (min((var_1), (((/* implicit */int) var_4)))))), (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */int) min((5927374570410480522ULL), (((/* implicit */unsigned long long int) 3768414820676252138LL))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((short) arr_1 [i_0])))));
        var_17 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_5 [(short)3]) : (min((arr_5 [(unsigned short)22]), (((/* implicit */long long int) arr_0 [i_0]))))))));
            var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (4294967295U)))))))));
            var_20 = max((max((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_0]))), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) max((arr_0 [i_0]), (arr_0 [i_0])))));
            var_21 = ((/* implicit */int) ((unsigned short) arr_5 [i_0]));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) ((unsigned short) min((((arr_1 [i_2]) ? (arr_2 [18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) (-(arr_5 [i_0])))))));
            arr_11 [i_0] = ((/* implicit */signed char) arr_6 [13LL] [i_0]);
            arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (~(min((max((((/* implicit */unsigned long long int) arr_8 [17LL] [i_2])), (arr_10 [i_0] [i_0]))), (arr_10 [(short)6] [16LL])))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) (-(max((((arr_1 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))) : (arr_10 [i_3] [(signed char)8]))), (((/* implicit */unsigned long long int) ((signed char) arr_15 [i_3] [i_3])))))));
                            arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_21 [i_3] [8U] [i_5] [8U] [(signed char)1]), (arr_21 [(signed char)17] [13LL] [i_5] [i_6] [i_3])))) ? (((/* implicit */int) ((unsigned char) ((int) arr_20 [i_7] [9ULL] [i_7] [i_7 - 1])))) : (((/* implicit */int) max((arr_7 [i_5] [i_7]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_5] [i_7 - 3] [i_7 - 3]))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            arr_26 [i_4] [i_4] [i_5] [i_6] [19] = ((/* implicit */long long int) ((signed char) ((short) arr_22 [i_3] [i_3] [i_3] [i_4] [i_3] [(unsigned short)17] [i_3])));
                            var_24 = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_8 + 3]);
                        }
                        for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_25 &= ((/* implicit */unsigned long long int) arr_4 [0] [i_6]);
                            arr_30 [i_9] [i_4] [(unsigned short)4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_6 + 1] [i_4] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_20 [i_6 + 1] [i_9] [19] [i_9])))) : (((unsigned long long int) -3768414820676252138LL))));
                        }
                        var_26 = ((/* implicit */signed char) ((long long int) arr_8 [i_3] [(unsigned short)17]));
                        var_27 *= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_4 [i_3] [i_3])), (arr_19 [i_6] [i_6 + 1] [i_6] [i_5]))), (((/* implicit */long long int) max((arr_15 [i_5] [i_6]), (max((((/* implicit */unsigned short) arr_25 [i_6] [i_5] [i_4] [(unsigned short)4] [i_3] [16U])), (arr_15 [i_3] [i_6]))))))));
                    }
                } 
            } 
        } 
        arr_31 [i_3] = ((/* implicit */unsigned char) min((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))), (min((((/* implicit */int) arr_9 [19LL] [(unsigned char)23])), (arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]))))), (((/* implicit */int) arr_9 [17] [6LL]))));
        var_28 = ((((/* implicit */_Bool) 1730983884U)) ? (((/* implicit */int) ((unsigned short) (unsigned short)32060))) : (((/* implicit */int) max(((unsigned char)27), (((/* implicit */unsigned char) arr_7 [i_3] [i_3]))))));
        var_29 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned short) ((short) arr_24 [i_3]))), (min((((/* implicit */unsigned short) arr_4 [i_3] [i_3])), (arr_9 [i_3] [i_3]))))));
        var_30 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) max((arr_15 [i_3] [i_3]), (((/* implicit */unsigned short) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [(short)8] [i_3]))))), (max((((/* implicit */long long int) arr_4 [i_3] [i_3])), (arr_6 [(unsigned short)11] [(unsigned short)12])))))));
    }
}
