/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69097
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_8)))))) == (((((/* implicit */long long int) ((/* implicit */int) (short)32748))) ^ (var_0))))))) % (((((/* implicit */_Bool) ((long long int) var_12))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)182)), (var_2))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */_Bool) arr_0 [i_1]);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((/* implicit */unsigned short) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [(unsigned short)16] [i_2 - 1] [i_1] [i_1 - 1] [i_2 - 1])))))), (((unsigned short) (short)-32459)))))));
                        var_17 -= (-(((arr_3 [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 - 3])) : (((/* implicit */int) arr_3 [i_1 - 2])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((var_9) != (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 3] [(unsigned char)0] [i_4] [i_1])) ? (4402291329472904888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                        var_19 = ((/* implicit */_Bool) (~(14044452744236646727ULL)));
                        var_20 = ((/* implicit */short) 4402291329472904888ULL);
                        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (14044452744236646704ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1])))) >> (((((/* implicit */int) ((short) var_11))) - (8044)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_16 [(short)17] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) -284738280468367770LL);
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 24; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_6] [i_0] = ((/* implicit */short) ((_Bool) (signed char)110));
                            arr_20 [(short)24] [i_0] [i_1 - 2] [i_2 + 1] [i_6] [(unsigned char)11] [i_6 + 1] = ((/* implicit */_Bool) ((short) arr_18 [i_0] [i_1 - 2] [i_2 - 1] [i_5] [i_2 - 1] [i_6 - 1] [i_6 - 1]));
                        }
                        for (short i_7 = 3; i_7 < 22; i_7 += 1) 
                        {
                            arr_24 [i_7] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) ((int) arr_7 [11U] [i_2 + 1] [i_1 - 1] [i_5]));
                            arr_25 [i_0] [i_7] [i_0] [(short)14] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [(signed char)12] [i_2] [i_5]);
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_22 = arr_4 [i_1 - 2] [i_5] [(_Bool)1];
                            var_23 = ((/* implicit */_Bool) max((var_23), (((arr_18 [i_1 - 2] [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 - 1] [i_2 - 1]) != (17593329021564159153ULL)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        arr_33 [i_0] [i_0] [i_9] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_0])) ? (10152998391120415082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_9])) < (((/* implicit */int) var_10))))));
                        arr_34 [i_0] [i_0] [i_9] [(short)3] [i_0] = ((/* implicit */_Bool) ((arr_30 [i_9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [3] [i_2 - 1] [(unsigned char)8] [i_9])))));
                        var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_2 + 1] [i_9] [(short)14]))));
                        arr_35 [i_9] [i_1] [i_0] [i_9] = ((/* implicit */signed char) var_2);
                        arr_36 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 24; i_11 += 3) 
                        {
                            {
                                arr_41 [11ULL] [i_1 - 3] [i_2] [i_10] [(short)21] [i_10] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_2 + 1] [i_2 - 1]))) == ((+(((/* implicit */int) arr_8 [i_1]))))))), (max((var_12), (((/* implicit */long long int) max(((unsigned short)65518), (((/* implicit */unsigned short) arr_26 [i_10] [i_11])))))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) (short)25054)), (arr_30 [i_1 - 2]))))))))));
                                var_26 = (signed char)-21;
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (((+(((284738280468367757LL) % (var_0))))) <= (((long long int) (-(((/* implicit */int) arr_38 [i_0]))))))))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-11636))))) > (((arr_9 [i_0] [i_0] [(signed char)24] [i_2] [i_2] [1LL]) ? (8589934591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))))) >> (((min((((arr_27 [i_0] [i_0] [(signed char)5] [i_1 - 1] [i_1] [16]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_21 [i_0] [i_0] [10ULL] [i_0] [i_2 - 1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))))) - (32755U)))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) (~(var_1)));
}
