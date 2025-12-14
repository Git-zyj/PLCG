/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60660
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_2))))) : (((/* implicit */int) ((var_5) > (var_9))))))) / ((+(((var_16) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_19 *= ((/* implicit */int) var_17);
    var_20 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [(unsigned char)11] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (~(var_5)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        arr_14 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4095)) ? (arr_2 [i_0] [(short)2]) : (arr_2 [i_0] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))))) == ((-(var_16)))));
                        var_22 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) ((int) var_17))), (min((var_6), (((/* implicit */long long int) (_Bool)1))))))));
                    }
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_3 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) & (arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2] [(signed char)5]))))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_21 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 1589245946);
                                var_24 = ((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [0] [i_1] [i_0])) ? (max((((/* implicit */unsigned int) var_12)), (arr_3 [(_Bool)1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))) - (1049897262U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min((((((/* implicit */_Bool) 1388612880)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)0] [(_Bool)0] [(_Bool)0]))) : (4146898083668418561ULL))), ((((_Bool)0) ? (var_16) : (((/* implicit */unsigned long long int) 3686733350U)))))));
        var_25 = ((/* implicit */unsigned short) (((!(((((/* implicit */int) var_8)) > (((/* implicit */int) arr_16 [0U] [i_0] [i_0] [i_0] [0U])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_3))))) : ((+(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) min((var_4), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) -1288096855)) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [0LL])))))))));
    }
    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) var_17);
        arr_26 [(unsigned short)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_17) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_24 [i_6] [i_6]))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(unsigned short)4])) || (((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : (((/* implicit */int) var_10)))))));
        arr_27 [i_6] [i_6] = ((/* implicit */signed char) (+((+((+(var_9)))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */long long int) arr_3 [i_7])) | (arr_15 [i_8] [i_7] [i_7] [i_7])))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 3; i_11 < 12; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((arr_11 [i_8] [8ULL] [i_7]) == (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_7])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7]))) / (arr_28 [i_9])))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_11 - 1])))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(arr_0 [i_11 + 1]))))));
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [7LL] [i_8] [i_9] [13ULL] [i_10])) ? (arr_13 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_7])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_7] [(unsigned char)16] [i_7])) ? (2147483647) : (((/* implicit */int) (unsigned char)135))))) : (arr_29 [i_10])));
                        arr_39 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_35 [(unsigned char)10] [(short)0] [i_9] [i_9])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [i_9] [i_7])) : (((/* implicit */int) arr_33 [i_7] [i_8] [i_9])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (var_9))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((5082363081678816698LL) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (34359738304ULL)));
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 12; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        {
                            var_33 *= ((/* implicit */signed char) (unsigned char)168);
                            var_34 = ((/* implicit */_Bool) var_5);
                            var_35 = ((((/* implicit */_Bool) ((arr_28 [i_7]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [i_12] [i_14])))))) ? (((((/* implicit */_Bool) arr_7 [i_14])) ? (var_14) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
            }
            var_37 = (!(((/* implicit */_Bool) arr_31 [i_7] [i_8] [i_7])));
            var_38 = ((/* implicit */int) (-((-(var_14)))));
        }
        var_39 = ((/* implicit */int) var_11);
        var_40 = (-(((/* implicit */int) (_Bool)1)));
        var_41 &= ((/* implicit */short) (-9223372036854775807LL - 1LL));
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) (short)3968)) : (((/* implicit */int) var_17))))) ? (arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)15281)) : (((/* implicit */int) var_4)))))));
    }
}
